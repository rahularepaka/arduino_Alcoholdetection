int limit= 420;                      
float alc;
const int buzzer=2;

                                        
void setup() { 
  Serial.begin(9600);                   
  pinMode(13,OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(buzzer,OUTPUT);
                   
}

void loop() { 
  alc=analogRead(A0);
  Serial.println(alc);       
  float percentage=(alc/10000);  
  Serial.println(percentage);            
  Serial.println(' ');    
  
  if(alc > limit)
  {   
        Serial.println("THE ALCOHOL CONTENT IS OVER THE LIMIT"); 
          Serial.println("ENGINE IS SWITCHED OFF");            
       digitalWrite(13, HIGH); 
       digitalWrite(8, HIGH); 
       digitalWrite(7, LOW);    
       digitalWrite(6, HIGH);
       tone(buzzer, 660,250);
       tone(buzzer, 700,250);
       tone(buzzer, 800,250);       
     
   }
   else{   
      Serial.println("THE ALCOHOL CONTENT IS UNDER THE LIMIT"); 
      Serial.println("ENGINE IS SWITCHED ON");                                 
      digitalWrite(13, LOW);
      digitalWrite(7,HIGH);
      digitalWrite(10,HIGH);
 
   } 
 delay(500);                       
}
