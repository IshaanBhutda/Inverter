
#define B1  9
#define B2  10
#define sw 8  // power on switch
#define batteryVoltage 3  // A3

#define fv 1  // A1



int ton,toff,fb,bv;
void setup() {                

  pinMode(B1, OUTPUT); 
  pinMode(B2, OUTPUT);  

  pinMode(sw, INPUT); //  switch

}

void loop() {
 bv= analogRead(batteryVoltage);
    bv= map(bv, 0, 1023, 0, 40);

    
   digitalWrite(B1, LOW);
   digitalWrite(B2, LOW);


     

    while ((digitalRead(sw) == 0) & (bv > 9))   {
       
// read battery voltage:
       bv= analogRead(batteryVoltage);
    bv= map(bv, 0, 1023, 0, 40);
    
  // read feedback value:
 fb = analogRead(fv);
   fb = map(fb, 0, 1023, 1297, 0);
   fb =fb -115;
   if(fb>900){
    fb=900;
    }
  if(fb<110){
    fb=110;
    }
ton=1000-fb;
toff=1000-ton;

      
      digitalWrite(B1, HIGH);   // B1 on
      delayMicroseconds(ton*10);
      digitalWrite(B1, LOW);  // B1 off
delayMicroseconds(toff*10);
      digitalWrite(B2, HIGH);   // B2 on
    delayMicroseconds(ton*10);
      
      digitalWrite(B2, LOW);  // B2 off
delayMicroseconds(toff*10);


      } 

   

} 
