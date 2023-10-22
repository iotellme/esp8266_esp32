#include <WiFi.h>
#include <HTTPClient.h>
#include <Arduino_JSON.h>
unsigned long previousMillis = 0;
unsigned long interval = 10000;
void connectWiFi(const char* ssid, const char* password) {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi ..");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print('.');
    delay(1000);
  }
  Serial.println(WiFi.localIP());
}
class iotellme{
   public: 
   struct struct_name {
      String url;
      String Data;
   };
      struct_name write;
      struct_name read_value;
    int R1,R2,R3,R4,R5,R6,R7,R8,R9,R10,R11,R12,R13,R14,R15,R16,R17,R18,R19,R20,R21,R22,R23,R24,R25,R26,R27,R28,R29,R30,R31,R32,R33,R34,R35,R36,R37,R38,R39,R40,R41,R42,R43,R44,R45,R46,R47,R48,R49,R50;
   void Token(String token,int users_id ){
      struct_name send;
      send.url="https://iotellme.net/send?users_id=";
      write.Data +=send.url;
      write.Data +=users_id;
      write.Data +="&token=";
      write.Data +=token;
      // Read iotellme
      read_value.url="https://iotellme.cloud/api/read?token=";
      read_value.Data +=read_value.url;
      read_value.Data +=token;
      read_value.Data +="&users_id=";
      read_value.Data +=users_id;
   }
   void  Write1(int id, float v, int s=0){
      write.Data +="&id1=";
      write.Data +=id;  
      write.Data +="&v1="; 
      write.Data +=v;  
      write.Data +="&s1="; 
      write.Data +=s;  
  }
  void  Write2(int id, float v, int s=0){
      write.Data +="&id2=";
      write.Data +=id;  
      write.Data +="&v2="; 
      write.Data +=v;  
      write.Data +="&s2="; 
      write.Data +=s; 
  }
  void  Write3(int id, float v, int s=0){
      write.Data +="&id3=";
      write.Data +=id;  
      write.Data +="&v3="; 
      write.Data +=v;  
      write.Data +="&s3="; 
      write.Data +=s; 
  }
  void  Write4(int id, float v, int s=0){
      write.Data +="&id4=";
      write.Data +=id;  
      write.Data +="&v4="; 
      write.Data +=v;  
      write.Data +="&s4="; 
      write.Data +=s; 
  }
  void  Write5(int id, float v, int s=0){
      write.Data +="&id5=";
      write.Data +=id;  
      write.Data +="&v5="; 
      write.Data +=v;  
      write.Data +="&s5="; 
      write.Data +=s; 
  }
  void  Write6(int id, float v, int s=0){
      write.Data +="&id6=";
      write.Data +=id;  
      write.Data +="&v6="; 
      write.Data +=v;  
      write.Data +="&s6="; 
      write.Data +=s; 
  }
  void  Write7(int id, float v, int s=0){
      write.Data +="&id7=";
      write.Data +=id;  
      write.Data +="&v7="; 
      write.Data +=v;  
      write.Data +="&s7="; 
      write.Data +=s; 
  }
  void  Write8(int id, float v, int s=0){
      write.Data +="&id8=";
      write.Data +=id;  
      write.Data +="&v8="; 
      write.Data +=v;  
      write.Data +="&s8="; 
      write.Data +=s; 
  }
  void  Write9(int id, float v, int s=0){
      write.Data +="&id9=";
      write.Data +=id;  
      write.Data +="&v9="; 
      write.Data +=v;  
      write.Data +="&s9="; 
      write.Data +=s; 
  }
  void  Write10(int id, float v, int s=0){
      write.Data +="&id10=";
      write.Data +=id;  
      write.Data +="&v10="; 
      write.Data +=v;  
      write.Data +="&s10="; 
      write.Data +=s; 
  }
  void  Write11(int id, float v, int s=0){
      write.Data +="&id11=";
      write.Data +=id;  
      write.Data +="&v11="; 
      write.Data +=v;  
      write.Data +="&s11="; 
      write.Data +=s; 
  }
  void  Write12(int id, float v, int s=0){
      write.Data +="&id12=";
      write.Data +=id;  
      write.Data +="&v12="; 
      write.Data +=v;  
      write.Data +="&s12="; 
      write.Data +=s; 
  }
  void  Write13(int id, float v, int s=0){
      write.Data +="&id13=";
      write.Data +=id;  
      write.Data +="&v13="; 
      write.Data +=v;  
      write.Data +="&s13="; 
      write.Data +=s; 
  }
  void  Write14(int id, float v, int s=0){
      write.Data +="&id14=";
      write.Data +=id;  
      write.Data +="&v14="; 
      write.Data +=v;  
      write.Data +="&s14="; 
      write.Data +=s; 
  }
  void  Write15(int id, float v, int s=0){
      write.Data +="&id15=";
      write.Data +=id;  
      write.Data +="&v15="; 
      write.Data +=v;  
      write.Data +="&s15="; 
      write.Data +=s; 
  }
  void  Write16(int id, float v, int s=0){
      write.Data +="&id16=";
      write.Data +=id;  
      write.Data +="&v16="; 
      write.Data +=v;  
      write.Data +="&s16="; 
      write.Data +=s; 
  }
  void  Write17(int id, float v, int s=0){
      write.Data +="&id17=";
      write.Data +=id;  
      write.Data +="&v17="; 
      write.Data +=v; 
      write.Data +="&s17="; 
      write.Data +=s;  
  }
  void  Write18(int id, float v, int s=0){
      write.Data +="&id18=";
      write.Data +=id;  
      write.Data +="&v18="; 
      write.Data +=v;  
      write.Data +="&s18="; 
      write.Data +=s; 
  }
  void  Write19(int id, float v, int s=0){
      write.Data +="&id19=";
      write.Data +=id;  
      write.Data +="&v19="; 
      write.Data +=v;  
      write.Data +="&s19="; 
      write.Data +=s; 
  }
  void  Write20(int id, float v, int s=0){
      write.Data +="&id20=";
      write.Data +=id;  
      write.Data +="&v20="; 
      write.Data +=v;  
      write.Data +="&s20="; 
      write.Data +=s; 
  }
  void  Write21(int id, float v, int s=0){
      write.Data +="&id21=";
      write.Data +=id;  
      write.Data +="&v21="; 
      write.Data +=v; 
      write.Data +="&s21="; 
      write.Data +=s;  
  }
  void  Write22(int id, float v, int s=0){
      write.Data +="&id22=";
      write.Data +=id;  
      write.Data +="&v22="; 
      write.Data +=v;  
      write.Data +="&s22="; 
      write.Data +=s; 
  }
  void  Write23(int id, float v, int s=0){
      write.Data +="&id23=";
      write.Data +=id;  
      write.Data +="&v23="; 
      write.Data +=v;  
      write.Data +="&s23="; 
      write.Data +=s; 
  }
  void  Write24(int id, float v, int s=0){
      write.Data +="&id24=";
      write.Data +=id;  
      write.Data +="&v24="; 
      write.Data +=v; 
      write.Data +="&s24="; 
      write.Data +=s;  
  }
  void  Write25(int id, float v, int s=0){
      write.Data +="&id25=";
      write.Data +=id;  
      write.Data +="&v25="; 
      write.Data +=v;  
      write.Data +="&s25="; 
      write.Data +=s; 
  }
  void  Write26(int id, float v, int s=0){
      write.Data +="&id26=";
      write.Data +=id;  
      write.Data +="&v26="; 
      write.Data +=v;  
      write.Data +="&s26="; 
      write.Data +=s; 
  }
  void  Write27(int id, float v, int s=0){
      write.Data +="&id27=";
      write.Data +=id;  
      write.Data +="&v27="; 
      write.Data +=v;  
      write.Data +="&s27="; 
      write.Data +=s; 
  }
  void  Write28(int id, float v, int s=0){
      write.Data +="&id28=";
      write.Data +=id;  
      write.Data +="&v28="; 
      write.Data +=v;  
      write.Data +="&s28="; 
      write.Data +=s; 
  }
  void  Write29(int id, float v, int s=0){
      write.Data +="&id29=";
      write.Data +=id;  
      write.Data +="&v29="; 
      write.Data +=v;
      write.Data +="&s29="; 
      write.Data +=s;   
  }
  void  Write30(int id, float v, int s=0){
      write.Data +="&id30=";
      write.Data +=id;  
      write.Data +="&v30="; 
      write.Data +=v;  
      write.Data +="&s30="; 
      write.Data +=s; 
  }
  void  Write31(int id, float v, int s=0){
      write.Data +="&id31=";
      write.Data +=id;  
      write.Data +="&v31="; 
      write.Data +=v;  
      write.Data +="&s31="; 
      write.Data +=s; 
  }
  void  Write32(int id, float v, int s=0){
      write.Data +="&id32=";
      write.Data +=id;  
      write.Data +="&v32="; 
      write.Data +=v;  
      write.Data +="&s32="; 
      write.Data +=s; 
  }
  void  Write33(int id, float v, int s=0){
      write.Data +="&id33=";
      write.Data +=id;  
      write.Data +="&v33="; 
      write.Data +=v;  
      write.Data +="&s33="; 
      write.Data +=s; 
  }
  void  Write34(int id, float v, int s=0){
      write.Data +="&id34=";
      write.Data +=id;  
      write.Data +="&v34="; 
      write.Data +=v;
      write.Data +="&s34="; 
      write.Data +=s;   
  }
  void  Write35(int id, float v, int s=0){
      write.Data +="&id35=";
      write.Data +=id;  
      write.Data +="&v35="; 
      write.Data +=v;  
      write.Data +="&s35="; 
      write.Data +=s; 
  }
  void  Write36(int id, float v, int s=0){
      write.Data +="&id36=";
      write.Data +=id;  
      write.Data +="&v36="; 
      write.Data +=v;  
      write.Data +="&s36="; 
      write.Data +=s; 
  }
  void  Write37(int id, float v, int s=0){
      write.Data +="&id37=";
      write.Data +=id;  
      write.Data +="&v37="; 
      write.Data +=v;  
      write.Data +="&s37="; 
      write.Data +=s; 
  }
  void  Write38(int id, float v, int s=0){
      write.Data +="&id38=";
      write.Data +=id;  
      write.Data +="&v38="; 
      write.Data +=v;  
      write.Data +="&s38="; 
      write.Data +=s; 
  }
  void  Write39(int id, float v, int s=0){
      write.Data +="&id39=";
      write.Data +=id;  
      write.Data +="&v39="; 
      write.Data +=v;  
      write.Data +="&s39="; 
      write.Data +=s; 
  }
  void  Write40(int id, float v, int s=0){
      write.Data +="&id40=";
      write.Data +=id;  
      write.Data +="&v40="; 
      write.Data +=v;  
      write.Data +="&s40="; 
      write.Data +=s; 
  }
  void  Write41(int id, float v, int s=0){
      write.Data +="&id41=";
      write.Data +=id;  
      write.Data +="&v41="; 
      write.Data +=v;  
      write.Data +="&s41="; 
      write.Data +=s; 
  }
  void  Write42(int id, float v, int s=0){
      write.Data +="&id42=";
      write.Data +=id;  
      write.Data +="&v42="; 
      write.Data +=v;  
      write.Data +="&s42="; 
      write.Data +=s; 
  }
  void  Write43(int id, float v, int s=0){
      write.Data +="&id43=";
      write.Data +=id;  
      write.Data +="&v43="; 
      write.Data +=v;  
      write.Data +="&s43="; 
      write.Data +=s; 
  }
  void  Write44(int id, float v, int s=0){
      write.Data +="&id44=";
      write.Data +=id;  
      write.Data +="&v44="; 
      write.Data +=v;  
      write.Data +="&s44="; 
      write.Data +=s; 
  }
  void  Write45(int id, float v, int s=0){
      write.Data +="&id45=";
      write.Data +=id;  
      write.Data +="&v45="; 
      write.Data +=v;  
      write.Data +="&s45="; 
      write.Data +=s; 
  }
  void  Write46(int id, float v, int s=0){
      write.Data +="&id46=";
      write.Data +=id;  
      write.Data +="&v46="; 
      write.Data +=v;  
      write.Data +="&s46="; 
      write.Data +=s; 
  }
  void  Write47(int id, float v, int s=0){
      write.Data +="&id47=";
      write.Data +=id;  
      write.Data +="&v47="; 
      write.Data +=v;  
      write.Data +="&s47="; 
      write.Data +=s; 
  }
  void  Write48(int id, float v, int s=0){
      write.Data +="&id48=";
      write.Data +=id;  
      write.Data +="&v48="; 
      write.Data +=v;  
      write.Data +="&s48="; 
      write.Data +=s; 
  }
  void  Write49(int id, float v, int s=0){
      write.Data +="&id49=";
      write.Data +=id;  
      write.Data +="&v49="; 
      write.Data +=v; 
      write.Data +="&s49="; 
      write.Data +=s;  
  }
  void  Write50(int id, float v, int s=0){
      write.Data +="&id50=";
      write.Data +=id;  
      write.Data +="&v50="; 
      write.Data +=v;  
      write.Data +="&s50="; 
      write.Data +=s; 
  }

  /* ----------------------------------------------------Read----------------------------------------------*/
   void  Read1(int id){
      read_value.Data +="&id1=";
      read_value.Data +=id;
    }
   void  Read2(int id){
      read_value.Data +="&id2=";
      read_value.Data +=id;
   }
   void  Read3(int id){
      read_value.Data +="&id3=";
      read_value.Data +=id;
   }
   void  Read4(int id){
      read_value.Data +="&id4=";
      read_value.Data +=id;
   }
   void  Read5(int id){
      read_value.Data +="&id5=";
      read_value.Data +=id;
   }
   void  Read6(int id){
      read_value.Data +="&id6=";
      read_value.Data +=id;
   }
   void  Read7(int id){
      read_value.Data +="&id7=";
      read_value.Data +=id;
   }
   void  Read8(int id){
      read_value.Data +="&id8=";
      read_value.Data +=id;
   }
   void  Read9(int id){
      read_value.Data +="&id9=";
      read_value.Data +=id;
   }
   void  Read10(int id){
      read_value.Data +="&id10=";
      read_value.Data +=id;
   }
   void  Read11(int id){
      read_value.Data +="&id11=";
      read_value.Data +=id;
   }
   void  Read12(int id){
      read_value.Data +="&id12=";
      read_value.Data +=id;
   }
   void  Read13(int id){
      read_value.Data +="&id13=";
      read_value.Data +=id;
   }
   void  Read14(int id){
      read_value.Data +="&id14=";
      read_value.Data +=id;
   }
   void  Read15(int id){
      read_value.Data +="&id15=";
      read_value.Data +=id;
   }
   void  Read16(int id){
      read_value.Data +="&id16=";
      read_value.Data +=id;
   }
   void  Read17(int id){
      read_value.Data +="&id17=";
      read_value.Data +=id;
   }
   void  Read18(int id){
      read_value.Data +="&id18=";
      read_value.Data +=id;
   }
   void  Read19(int id){
      read_value.Data +="&id19=";
      read_value.Data +=id;
   }
   void  Read20(int id){
      read_value.Data +="&id20=";
      read_value.Data +=id;
   }
   void  Read21(int id){
      read_value.Data +="&id21=";
      read_value.Data +=id;
   }
   void  Read22(int id){
      read_value.Data +="&id22=";
      read_value.Data +=id;
   }
   void  Read23(int id){
      read_value.Data +="&id23=";
      read_value.Data +=id;
   }
   void  Read24(int id){
      read_value.Data +="&id24=";
      read_value.Data +=id;
   }
   void  Read25(int id){
      read_value.Data +="&id25=";
      read_value.Data +=id;
   }
   void  Read26(int id){
      read_value.Data +="&id26=";
      read_value.Data +=id;
   }
   void  Read27(int id){
      read_value.Data +="&id27=";
      read_value.Data +=id;
   }
   void  Read28(int id){
      read_value.Data +="&id28=";
      read_value.Data +=id;
   }
   void  Read29(int id){
      read_value.Data +="&id29=";
      read_value.Data +=id;
   }
   void  Read30(int id){
      read_value.Data +="&id30=";
      read_value.Data +=id;
   }
   void  Read31(int id){
      read_value.Data +="&id31=";
      read_value.Data +=id;
   }
   void  Read32(int id){
      read_value.Data +="&id32=";
      read_value.Data +=id;
   }
   void  Read33(int id){
      read_value.Data +="&id33=";
      read_value.Data +=id;
   }
   void  Read34(int id){
      read_value.Data +="&id34=";
      read_value.Data +=id;
   }
   void  Read35(int id){
      read_value.Data +="&id35=";
      read_value.Data +=id;
   }
   void  Read36(int id){
      read_value.Data +="&id36=";
      read_value.Data +=id;
   }
   void  Read37(int id){
      read_value.Data +="&id37=";
      read_value.Data +=id;
   }
   void  Read38(int id){
      read_value.Data +="&id38=";
      read_value.Data +=id;
   }
   void  Read39(int id){
      read_value.Data +="&id39=";
      read_value.Data +=id;
   }
   void  Read40(int id){
      read_value.Data +="&id40=";
      read_value.Data +=id;
   }
   void  Read41(int id){
      read_value.Data +="&id41=";
      read_value.Data +=id;
   }
   void  Read42(int id){
      read_value.Data +="&id42=";
      read_value.Data +=id;
   }
   void  Read43(int id){
      read_value.Data +="&id43=";
      read_value.Data +=id;
   }
   void  Read44(int id){
      read_value.Data +="&id44=";
      read_value.Data +=id;
   }
   void  Read45(int id){
      read_value.Data +="&id45=";
      read_value.Data +=id;
   }
   void  Read46(int id){
      read_value.Data +="&id46=";
      read_value.Data +=id;
   }
   void  Read47(int id){
      read_value.Data +="&id47=";
      read_value.Data +=id;
   }
   void  Read48(int id){
      read_value.Data +="&id48=";
      read_value.Data +=id;
   }
   void  Read49(int id){
      read_value.Data +="&id49=";
      read_value.Data +=id;
   }
   void  Read50(int id){
      read_value.Data +="&id50=";
      read_value.Data +=id;
   }
   void Read(){
   HTTPClient http; 
   http.begin(read_value.Data);
   http.GET();
   String payload = http.getString();
   JSONVar myObject = JSON.parse(payload);
   } 
    void  Send(){
    try { 
      HTTPClient http; 
      Serial.println(write.Data);
      Serial.println(" ");
      http.begin(write.Data.c_str());
         int httpResponseCode = http.GET();
          if (httpResponseCode > 0) {
        Serial.print("HTTP Response code: ");
        Serial.println(httpResponseCode);
        String payload = http.getString();
        Serial.println(payload);
          }
          else{
         Serial.print("Error send data:");
         Serial.println(httpResponseCode);
          }
      http.end();  //Close connection
      } 
    catch (const std::exception& ex){
    Serial.println(" ");
    Serial.println("Erorr HTTPClient");
    } 
    }
 };
//  iotellme iotellme;
