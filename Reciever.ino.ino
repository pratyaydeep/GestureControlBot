int forward=0;
int backward=0;
int right=0;
int left=0;
void setup() 
{
 pinMode(10,INPUT);
 pinMode(11,INPUT);
 pinMode(12,INPUT);
 pinMode(13,INPUT);
 Serial.begin(9600);

}
void loop() 
{
  forward=digitalRead(10);
  backward=digitalRead(11);
  right=digitalRead(12);
  left=digitalRead(13);
   if(forward==HIGH)
    {
  
     Serial.println("Forward");
    }
   if(backward==HIGH)
    {       
    
     Serial.println("Reverse");
    }
    if(right==HIGH)
     {
      
      Serial.println("RIGHT");
     }
     if(left==HIGH)
      {
 
       Serial.println("LEFT");
      }
   if(left==LOW&&right==LOW&&forward==LOW&&backward==LOW)
   {
      Serial.println("STOP");
   }
   delay(100);
}
