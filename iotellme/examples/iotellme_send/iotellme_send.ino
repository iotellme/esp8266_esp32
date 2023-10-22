 #include <iotellme.h>
String Token = "8eac160ca6a916e48eef5cc4b81e81bb0698e4d6c081862c3dbe8b877d398c8f";  // Your token 
int user_id=2;
int id1=3687;
int id2=3767;
int id3=3769;
void setup(){
 Serial.begin(115200);
  connectWiFi("abdulmalek","bb1234554321BB");
  Serial.print("RSSI: ");
  Serial.println(WiFi.RSSI());
}
void loop() {
  unsigned long currentMillis = millis();
  if ((WiFi.status() != WL_CONNECTED) && (currentMillis - previousMillis >=interval)) {
    Serial.print(millis());
    Serial.println("Reconnecting to WiFi...");
    WiFi.disconnect();
    WiFi.reconnect();
    previousMillis = currentMillis;
  }
iotellme iotellme;
iotellme.Token(Token,user_id);
iotellme.Write1(id1,random(10,100));
iotellme.Write2(id2,random(10,100));
iotellme.Write3(id3,random(10,100));
iotellme.Send();
}
