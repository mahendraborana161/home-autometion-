void setup() 
{
Serial.begin(9600);         
pinMode(11, OUTPUT);
pinMode(9,OUTPUT);         
}
void loop()
{
if(Serial.available() > 0)  
{char data;
Serial.print("\nbluetooth connected\n");
data = Serial.read();
 Serial.print("BLUETOOTH VALUE = ");
 Serial.print(data);        
 Serial.print("\n");             
      
if(data == '1') 
{
digitalWrite(11, HIGH);
Serial.print("LOAD 1 ON\n"); 
}
if(data == '0')  
{digitalWrite(11, LOW);
Serial.print("LOAD 1 OFF\n"); 
}
if(data =='2')
{
digitalWrite(9,HIGH);
Serial.print("LOAD 2 ON\n"); 
}
if(data =='9')
{
digitalWrite(9,LOW);
Serial.print("LOAD 2 OFF\n"); 
}  
if(data =='5')
{
digitalWrite(9,LOW);
Serial.print("LOAD 1 OFF\n LOAD 2 OFF"); 
}                            
}
}
