char incoming = 0;                
void setup() 
{
  Serial.begin(9600);         
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);        
}
void loop()
{
  if(Serial.available() > 0)  
  {
    incoming = Serial.read();     
    Serial.print(incoming);        
    Serial.print("\n");      
    if(incoming == '1')            
      {
        digitalWrite(8, LOW); 
      }
    else if(incoming == '2')  
    {     
      digitalWrite(8, HIGH);   
  }
  else  if(incoming == '3')            
      {
        digitalWrite(9, LOW);
      }
    else if(incoming == '4')  
    {     
      digitalWrite(9, HIGH);   
  }
    else if(incoming == '5')            
      {
        digitalWrite(10, LOW); 
      }
    else if(incoming == '6')  
    {     
      digitalWrite(10, HIGH);   
  }
    else if(incoming == '7')            
      {
        digitalWrite(11,LOW); 
      }
    else if (incoming == '8')  
    {     
      digitalWrite(11, HIGH);   
  }
  
  else
  {
  /*  digitalWrite(8,HIGH);
     digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
       digitalWrite(11,HIGH); */

    return;
    }

  }
  }

