// C++ code

const int ledGreen = 4; 
const int ledRed = 2;
  
unsigned long previousMillisGreen = 0;  
unsigned long previousMillisGreen1 = 0;

unsigned long previousMillisRed = 0;
unsigned long previousMillisRed2 = 0;
  
const long intervalGreen = 1000; 
const long intervalRed = 1000;
  
int greenCounter = 0;
int redCounter = 0; 
  
void setup() {  
  pinMode(ledGreen, OUTPUT);  
  pinMode(ledRed, OUTPUT);  
}  
  
void loop() {  
  unsigned long currentMillis = millis();     //varibel for stor the valiue from function millis  
   
  if (currentMillis - previousMillisGreen >= intervalGreen) {  //maining if time base is in one seconed 
   previousMillisGreen = currentMillis;
   if (greenCounter < 2) {  
    digitalWrite(ledGreen, HIGH);
     
    unsigned long currentMillis1 = millis();
     if (currentMillis1 - previousMillisGreen1 >= intervalGreen)
       digitalWrite(ledGreen, LOW);
     
    greenCounter++;  
   } else {  
    digitalWrite(ledGreen, LOW);  
  
    
   }  
  } 
  
  if (currentMillis - previousMillisRed >= intervalRed) {  
   previousMillisRed = currentMillis;  
   if (redCounter < 4) {  
    digitalWrite(ledRed, HIGH);
     
     unsigned long currentMillis1 = millis();
     if (currentMillis1 - previousMillisGreen1 >= intervalGreen)
         digitalWrite(ledRed, LOW);
          
    redCounter++;  
   } else {  
    redCounter = 0; 
    greenCounter = 0; 
   }  
  }  
}


  // delayMicroseconds(500); // waite for helf seconde 
   // digitalWrite(ledRed, LOW);  


























/*//
int delaytime =1000;
unsigned long millisSave = 0; 
int delaytime2 =1000;
unsigned long millisSave2 = 0; 
int x = 2;
int y = 4;
void setup()
{
  pinMode(x, OUTPUT);
  pinMode(y, OUTPUT);
  
  
 
  
}

void loop()
{
  unsigned long millitime = millis();
  unsigned long t= millitime- millisSave;
  unsigned long t2= millitime- millisSave2;
  
 if(t>=delaytime){
    digitalWrite(x,!digitalRead(x));
    millisSave=millitime;
  }
  if(t>=delaytime2){
      digitalWrite(y,!digitalRead(y));
      millisSave2=millitime;
   }
 
    
  

 for(int i =0;i<4;i++){
    if(i == 0 or i == 1 and t>=delaytime){
      digitalWrite(x,!digitalRead(x));
      digitalWrite(y,!digitalRead(y));
      millisSave=millitime;
      
      
      
      
      
      digitalWrite(y,HIGH);
      digitalWrite(x,HIGH);
      delay(1000);
      digitalWrite(y,LOW);
      digitalWrite(x,LOW);
      delay(500);
    }
    
   if(i == 2 or i == 3 and  t>=delaytime){
       digitalWrite(x,!digitalRead(x));
       millisSave=millitime;
     
      digitalWrite(x,HIGH);
      delay(900);
      digitalWrite(x,LOW);
      delay(500);
   }
  
    }
  
   for(int i =0;i<8;i++){
     if(i == 0 or i == 4){
        if(t>=delaytime){
          digitalWrite(x,!digitalRead(x));
          millisSave=millitime;
        
        }
        
     }
     if(i == 5 or i == 8){
        if(t>=delaytime){
          digitalWrite(x,!digitalRead(x));
          millisSave=millitime;
         }
     }
  }
  // Wait for 1000 millisecond(s)*/
