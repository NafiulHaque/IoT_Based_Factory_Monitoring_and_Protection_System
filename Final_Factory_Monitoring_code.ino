//display
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for SSD1306 display connected using software SPI (default case):
#define OLED_MOSI  19
#define OLED_CLK   18
#define OLED_DC    22
#define OLED_CS    23
#define OLED_RESET 21
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
  OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);



/* Fill-in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPL6UGGdT3NM"
#define BLYNK_TEMPLATE_NAME "IoT Based Factory Monitoring"
#define BLYNK_AUTH_TOKEN "DnGBnIVrz4KhEaoIQPmsKj0qp6U-Htb6"

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// WiFi credentials.
char ssid[] = "IMRAN";
char pass[] = "11223344";


// DHT 11---------------------------------------------------
#include "DHT.h"
#define DHTPIN 13     // Digital pin connected to the DHT sensor
// Uncomment whatever type you're using!
#define DHTTYPE DHT11   
DHT dht(DHTPIN, DHTTYPE);
// DHT 11-------------x--------------x----------------------

//onewireTem------------------------------------------------
#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 16
// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);
// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);
//onewireTem----------x--------------x------------------------

//ultrasonic--------------------------------------
const int trigPin = 5;
const int echoPin = 17;
long duration;
int distance, distanceInch;
float oilLevel;

BLYNK_WRITE(V0){
  if(param.asInt()==1){
    digitalWrite(32,HIGH);
  }else{
  digitalWrite(32,LOW);
  }
}

BLYNK_WRITE(V1){
  if(param.asInt()==1){
    digitalWrite(25,HIGH);
  }else{
  digitalWrite(25,LOW);
  }
}

BLYNK_WRITE(V2){
  if(param.asInt()==1){
    digitalWrite(27,HIGH);
  }else{
  digitalWrite(27,LOW);
  }
}

BLYNK_WRITE(V5){
  if(param.asInt()==1){
    digitalWrite(26,HIGH);
  }else{
  digitalWrite(26,LOW);
  }
}


BlynkTimer timer;

float tempC=0;
int gas_value=0;
int flame_value=0;
double t=0;
double h=0;

const int buzzer=4;

void sendSensor(){
  int value=analogRead(34);
    gas_value = map(value, 0, 4096, 0, 100);
  if (gas_value <= 55) {
    digitalWrite(buzzer, LOW);
    display.clearDisplay();
  } else if (gas_value > 55) {
    digitalWrite(buzzer, HIGH);
    ledPrint("Gas Lekage!", gas_value);
    
  }

  Blynk.virtualWrite(V3,gas_value);

   flame_value=digitalRead(14);

 if(flame_value==0){
   flame_value=1;
   Buzzer();
   ledPrint("Fire!",flame_value);
 }else{
   flame_value=0;
   display.clearDisplay();
 }
 Blynk.virtualWrite(V4,flame_value);

  h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  t = dht.readTemperature();

   Blynk.virtualWrite(V6,t);
   Blynk.virtualWrite(V7,h);

   //onewireTem
  sensors.requestTemperatures(); // Send the command to get temperatures
  tempC = sensors.getTempCByIndex(0);
  Blynk.virtualWrite(V8,tempC);
  //onewireTem

 //Ultrasonic
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
// distanceCm= duration*0.034/2;
// distanceInch = duration*0.0133/2;
 distance = (duration/2) / 29.1;
      const int maxdis=14;
      const int mindis=2;
      oilLevel=((maxdis-distance)*100)/(maxdis-mindis);
// Serial.print(distanceCm);
Blynk.virtualWrite(V9,oilLevel);
if(oilLevel<=10){
  digitalWrite(26,HIGH);
}else if(oilLevel>=90){
  digitalWrite(26,LOW);
}
 //Ultrasonic

}
void Buzzer(){
  digitalWrite(buzzer,HIGH);
  delay(500);
  digitalWrite(buzzer,LOW);
}

void setup()
{
  // Debug console
  Serial.begin(115200);
  //display........
   // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.
  display.display();

  // Clear the buffer
  display.clearDisplay();
  //display........
  dht.begin();
 //onewireTem
  sensors.begin();  

  pinMode(32,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(14,INPUT);
  pinMode(34,INPUT);


  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

 ledPrint("Connecting",0); 
//  display.drawCircle(64, 32, 10, WHITE);   // Draw 'stylized' characters
  Buzzer();
  pinMode(buzzer,OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  // You can also specify server:
  // Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, IPAddress(192,168,1,100), 8080);
  ledPrint("connected",1);
  delay(2000);
  timer.setInterval(500L, sendSensor);
  // timer.setInterval(1000L, sendDisplay);
}

void loop()
{

  Blynk.run();
  timer.run();
 
}

void ledPrint(char* text, int data) {
  display.clearDisplay();
  display.setTextSize(2);             // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE);        // Draw white text
  display.setCursor(0,0);             // Start at top-left corner
  display.println(F(text));
  display.setCursor(50,30);  
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE); // Draw 'inverse' text
  display.println(data);
  display.display();
  // delay(2000);
}
