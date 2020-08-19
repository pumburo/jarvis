#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5;

const int led1 = 7;
const int led2 = 8;
const int led3 = 9;
const int led4 = 10;
const int led5 = 11;

const int buton1= 12;
const int buton2 = 13;

const int pot1 = A0;
const int pot2 = A1;
const int pot3 = A2;
const int pot4 = A3;
const int pot5 = A4;

int buton1d = 0;
int buton2d = 0;

int pot1d;
int pot1a;
int pot2d;
int pot2a;
int pot3d;
int pot3a;
int pot4d;
int pot4a;
int pot5d;
int pot5a;

int servo1poz[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int servo2poz[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int servo3poz[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int servo4poz[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int servo5poz[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

int x = 0;

void setup(){

  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  pinMode(buton1, INPUT);
  pinMode(buton2, INPUT);
  
  pinMode(pot1, INPUT);
  pinMode(pot2, INPUT);
  pinMode(pot3, INPUT);
  pinMode(pot4, INPUT);
  pinMode(pot5, INPUT);
 
     Serial.begin(9600);
   
  }
   
    void loop(){
   
    pot1d = analogRead(pot1);
    pot1a = map(pot1d, 0, 1023, 0, 180);
    pot2d = analogRead(pot2);
    pot2a = map(pot2d, 0, 1023, 0, 180);
    pot3d = analogRead(pot3);
    pot3a = map(pot3d, 0, 1023, 0, 180);
    pot4d = analogRead(pot4);
    pot4a = map(pot4d, 0, 1023, 0, 180);
    pot5d = analogRead(pot5);
    pot5a = map(pot5d, 0, 1023, 0, 180);
    
    servo1.write(pot1a);
    servo2.write(pot2a);
    servo3.write(pot3a);
    servo4.write(pot4a);
    servo5.write(pot5a);

         Serial.println("buton2d");
         Serial.println(buton2d);
         

          
      if(digitalRead(buton1) == HIGH && digitalRead(buton2) == LOW){
      
        buton1d++;
        delay(300);
          
           switch(buton1d){
         
           case 1:
             servo1poz[0] = pot1a;             
             servo2poz[0] = pot2a;             
             servo3poz[0] = pot3a;             
             servo4poz[0] = pot4a;             
             servo5poz[0] = pot5a;             
             digitalWrite(led2, HIGH);
             break;
           case 2:
             servo1poz[1] = pot1a;             
             servo2poz[1] = pot2a;             
             servo3poz[1] = pot3a;               
             servo4poz[1] = pot4a;                   
             servo5poz[1] = pot5a;                  
             digitalWrite(led3, HIGH);
             digitalWrite(led2, LOW);             
             break;
           case 3:
             servo1poz[2] = pot1a;             
             servo2poz[2] = pot2a;              
             servo3poz[2] = pot3a;             
             servo4poz[2] = pot4a;             
             servo5poz[2] = pot5a;             
             digitalWrite(led4, HIGH);
             digitalWrite(led3, LOW);
             break;
           case 4:
             servo1poz[3] = pot1a;            
             servo2poz[3] = pot2a;             
             servo3poz[3] = pot3a;             
             servo4poz[3] = pot4a;             
             servo5poz[3] = pot5a;
             digitalWrite(led5, HIGH);       
             digitalWrite(led4, LOW);      
             break;
           case 5:
             servo1poz[4] = pot1a;
             servo2poz[4] = pot2a;
             servo3poz[4] = pot3a;  
             servo4poz[4] = pot4a;
             servo5poz[4] = pot5a;
             digitalWrite(led2, HIGH);  
             digitalWrite(led5, LOW);
             digitalWrite(led3, HIGH);           
             break;
           case 6:
             servo1poz[5] = pot1a;
             servo2poz[5] = pot2a;
             servo3poz[5] = pot3a;  
             servo4poz[5] = pot4a;
             servo5poz[5] = pot5a;
             digitalWrite(led4, HIGH);  
             digitalWrite(led3, LOW);           
             break;
           case 7:
             servo1poz[6] = pot1a;
             servo2poz[6] = pot2a;
             servo3poz[6] = pot3a;  
             servo4poz[6] = pot4a;
             servo5poz[6] = pot5a;
             digitalWrite(led5, HIGH);  
             digitalWrite(led4, LOW);           
             break;
           case 8:
             servo1poz[7] = pot1a;
             servo2poz[7] = pot2a;
             servo3poz[7] = pot3a;  
             servo4poz[7] = pot4a;
             servo5poz[7] = pot5a;
             digitalWrite(led4, HIGH);  
             digitalWrite(led2, HIGH);
             digitalWrite(led5, LOW); 
             digitalWrite(led3, HIGH);          
             break;
           case 9:
             servo1poz[8] = pot1a;
             servo2poz[8] = pot2a;
             servo3poz[8] = pot3a;  
             servo4poz[8] = pot4a;
             servo5poz[8] = pot5a;
             digitalWrite(led2, HIGH);
             digitalWrite(led3, HIGH);
             digitalWrite(led4, LOW);
             digitalWrite(led5, HIGH);
             break;   
           case 10:
             servo1poz[9] = pot1a;
             servo2poz[9] = pot2a;
             servo3poz[9] = pot3a;  
             servo4poz[9] = pot4a;
             servo5poz[9] = pot5a;
             digitalWrite(led2, HIGH);
             digitalWrite(led3, HIGH);
             digitalWrite(led4, HIGH);
             digitalWrite(led5, HIGH);
             delay(300);
             digitalWrite(led2, LOW);
             digitalWrite(led3, LOW);
             digitalWrite(led4, LOW);
             digitalWrite(led5, LOW);
             delay(300);
             digitalWrite(led2, HIGH);
             digitalWrite(led3, HIGH);
             digitalWrite(led4, HIGH);
             digitalWrite(led5, HIGH);
             break;
           case 11:
             servo1poz[10] = pot1a;
             servo2poz[10] = pot2a;
             servo3poz[10] = pot3a;  
             servo4poz[10] = pot4a;
             servo5poz[10] = pot5a;
             digitalWrite(led3, LOW);
             digitalWrite(led4, LOW);
             digitalWrite(led5, LOW);
             break;           
           case 12:
             servo1poz[11] = pot1a;
             servo2poz[11] = pot2a;
             servo3poz[11] = pot3a;  
             servo4poz[11] = pot4a;
             servo5poz[11] = pot5a;
             digitalWrite(led3, HIGH);
             digitalWrite(led2, LOW);
             break;
           case 13:
             servo1poz[12] = pot1a;
             servo2poz[12] = pot2a;
             servo3poz[12] = pot3a;  
             servo4poz[12] = pot4a;
             servo5poz[12] = pot5a;
             digitalWrite(led4, HIGH);
             digitalWrite(led3, LOW);
             break;
           case 14:
             servo1poz[13] = pot1a;
             servo2poz[13] = pot2a;
             servo3poz[13] = pot3a;  
             servo4poz[13] = pot4a;
             servo5poz[13] = pot5a;
             digitalWrite(led5, HIGH);
             digitalWrite(led4, LOW);
             break;           
           case 15:
             servo1poz[14] = pot1a;
             servo2poz[14] = pot2a;
             servo3poz[14] = pot3a;  
             servo4poz[14] = pot4a;
             servo5poz[14] = pot5a;
             digitalWrite(led4, HIGH);
             digitalWrite(led3, HIGH);
             digitalWrite(led2, HIGH);
             break;
           case 16:
             servo1poz[15] = pot1a;
             servo2poz[15] = pot2a;
             servo3poz[15] = pot3a;  
             servo4poz[15] = pot4a;
             servo5poz[15] = pot5a;
             digitalWrite(led5, LOW);
             digitalWrite(led4, LOW);
             digitalWrite(led3, LOW);
             break;
           case 17:
             servo1poz[16] = pot1a;
             servo2poz[16] = pot2a;
             servo3poz[16] = pot3a;  
             servo4poz[16] = pot4a;
             servo5poz[16] = pot5a;
             digitalWrite(led2, LOW);
             digitalWrite(led3, HIGH);
             break;           
           case 18:
             servo1poz[17] = pot1a;
             servo2poz[17] = pot2a;
             servo3poz[17] = pot3a;  
             servo4poz[17] = pot4a;
             servo5poz[17] = pot5a;
             digitalWrite(led3, LOW);
             digitalWrite(led4, HIGH);
             break;
           case 19:
             servo1poz[18] = pot1a;
             servo2poz[18] = pot2a;
             servo3poz[18] = pot3a;  
             servo4poz[18] = pot4a;
             servo5poz[18] = pot5a;
             digitalWrite(led4, LOW);
             digitalWrite(led5, HIGH);
             break;
           case 20:
             servo1poz[19] = pot1a;
             servo2poz[19] = pot2a;
             servo3poz[19] = pot3a;  
             servo4poz[19] = pot4a;
             servo5poz[19] = pot5a;
             digitalWrite(led5, LOW);
             digitalWrite(led2, HIGH);
             delay(300); 
             digitalWrite(led3, HIGH);
             delay(300);
             digitalWrite(led4, HIGH);
             delay(300);
             digitalWrite(led5, HIGH);
             break;
           case 21:
             servo1poz[20] = pot1a;
             servo2poz[20] = pot2a;
             servo3poz[20] = pot3a;  
             servo4poz[20] = pot4a;
             servo5poz[20] = pot5a;
             digitalWrite(led5, LOW);
             digitalWrite(led4, LOW);
             digitalWrite(led3, LOW);
             break;
           case 22:
             servo1poz[21] = pot1a;
             servo2poz[21] = pot2a;
             servo3poz[21] = pot3a;  
             servo4poz[21] = pot4a;
             servo5poz[21] = pot5a;
             digitalWrite(led3, HIGH);
             break;
           case 23:
             servo1poz[22] = pot1a;
             servo2poz[22] = pot2a;
             servo3poz[22] = pot3a;  
             servo4poz[22] = pot4a;
             servo5poz[22] = pot5a;
             digitalWrite(led4, HIGH);
             break;
           case 24:
             servo1poz[23] = pot1a;
             servo2poz[23] = pot2a;
             servo3poz[23] = pot3a;  
             servo4poz[23] = pot4a;
             servo5poz[23] = pot5a;
             digitalWrite(led5, HIGH);
             break;
           case 25:
             servo1poz[24] = pot1a;
             servo2poz[24] = pot2a;
             servo3poz[24] = pot3a;  
             servo4poz[24] = pot4a;
             servo5poz[24] = pot5a;
             digitalWrite(led4, LOW);
             digitalWrite(led3, LOW);
             delay(300);
             digitalWrite(led3, HIGH);
             digitalWrite(led4, HIGH);
             digitalWrite(led2, LOW);
             digitalWrite(led5, LOW);
             delay(300);
             digitalWrite(led5, HIGH);
             digitalWrite(led2, HIGH);
             digitalWrite(led3, LOW);
             digitalWrite(led4, LOW);
             delay(300);
             digitalWrite(led3, HIGH);
             digitalWrite(led4, HIGH);
             digitalWrite(led5, LOW);
             digitalWrite(led2, LOW);
             delay(300);
             digitalWrite(led4, LOW);
             digitalWrite(led3, LOW);
             delay(300);
             digitalWrite(led3, HIGH);
             digitalWrite(led4, HIGH);
             digitalWrite(led2, LOW);
             digitalWrite(led5, LOW);
             delay(300);
             digitalWrite(led5, HIGH);
             digitalWrite(led2, HIGH);
             digitalWrite(led3, LOW);
             digitalWrite(led4, LOW);
             delay(300);
             digitalWrite(led3, HIGH);
             digitalWrite(led4, HIGH);
             digitalWrite(led5, LOW);
             digitalWrite(led2, LOW);
             delay(300);
           break;
            
         }
        
      }
      
      if(digitalRead(buton2) == HIGH && digitalRead(buton1) == LOW) {
      
        buton2d++;
               
      Serial.println("buton2'ye basildi");
        Serial.println(buton2d);
      }
      
     if(buton2d > 0 ) {
      
      for(x = 0; x < buton1d ; x++){
      
        if (buton1d > 25){
        
          buton1d = 25;
          
                }
        
      
        servo1.write(servo1poz[x]);
        delay(500);
        servo2.write(servo2poz[x]);
        delay(500);
        servo3.write(servo3poz[x]);
        delay(500);
        servo4.write(servo4poz[x]);
        delay(500);
        servo5.write(servo5poz[x]);
        delay(500);
        
         }
        }
      if (digitalRead(buton1) == HIGH && digitalRead(buton2) == HIGH ) {
        
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        
        servo1.write(pot1a);
        servo2.write(pot2a);
        servo3.write(pot3a);
        servo4.write(pot4a);
        servo5.write(pot5a);
        
        x = 0;
        
        buton1d = 0;
        buton2d = 0;
        }
        
     
       
     delay(100);       
     }
