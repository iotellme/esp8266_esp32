#include <HTTPClient.h>
#include <Arduino_JSON.h>
#include <iotellme.h>
const char* ssid = "D-Link";                  // Your wifi Name    
const char* password = "a1234554321A";    
//const char* ssid = "ali4";                  // Your wifi Name    
//const char* password = "7715007080";
String Token = "5cb7530162c7609c245e83bf0777a1a33ab3604e99d6f4cc2037c5941934ba2a"; 
int user_id=932;
int id1=412;
int id2=413;
void initWiFi() {
  try { 
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi ..");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print('.');
    delay(1000);
  }
  Serial.println(WiFi.localIP());
  Serial.println("");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());  //IP address assigned to your ESP
  }catch (const std::exception& ex){
  Serial.printf("Error:%s",ex.what());
} 
}
void setup() {
Serial.begin(115200);
  pinMode(2, OUTPUT);
  
}

void loop() {
initWiFi();
iotellme iotellme;
iotellme.Token(Token,user_id);
iotellme.Read1(413);
iotellme.Read2(413);
iotellme.Read3(417);
iotellme.Read4(414);
iotellme.Read();
Serial.print("Read1=");
Serial.println(iotellme.R1);
Serial.print("Read2=");
Serial.println(iotellme.R2);
Serial.print("Read3=");
Serial.println(iotellme.R3);
Serial.print("Read4=");
Serial.println(iotellme.R4);
if(iotellme.R4==1){
digitalWrite(2,HIGH);
}
else if(iotellme.R4==0){
  digitalWrite(2,LOW);
}

}
