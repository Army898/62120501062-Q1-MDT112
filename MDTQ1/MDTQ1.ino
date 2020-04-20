void setup(){
    pinMode(2, INPUT_PULLUP);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);    
    tone(8,200,500);
    delay(250);
    tone(8,400,100);
    Serial.begin(9600);
}
int count = 0 ;
int light = 3;
void loop()
{   
    if (count == 0);
    {            
        for (light = 3 ; light <= 13 ; light++)
        {
            if(light == 8)
            {
                digitalWrite(light,0);
                continue;
            }
            digitalWrite(light, 1);
            delay(100);
            digitalWrite(light, 0);
            if (digitalRead(2)==0)
                {           
                    count++;
                    Serial.println(count);  
                    delay(500);     
                }        
        }
        for (light = 13 ; light >= 3 ; light--)
        {
            if(light == 8)
            {
                digitalWrite(light,0);
                continue;
            }
            digitalWrite(light, 1);
            delay(100);
            digitalWrite(light, 0);
            if (digitalRead(2)==0)
                {           
                    count++;
                    Serial.println(count);
                    delay(500);       
                }       
        }
    } 
    if (count == 1)
    {
        for (light = 3 ; light <= 13 ; light++)
            {
                if(light == 8)
                {
                    digitalWrite(light,0);
                    continue;
                }
                
                digitalWrite(light, 1);
                delay(50);
                digitalWrite(light, 0);
                if (digitalRead(2)==0)
                {           
                    count++;
                    Serial.println(count);
                    delay(500);       
                }        
            }
        for (light = 13 ; light >= 3 ; light--)
            {
                if(light == 8)
                {
                    digitalWrite(light,0);
                    continue;
                }
                digitalWrite(light, 1);
                delay(50);
                digitalWrite(light, 0);
                if (digitalRead(2)==0)
                {           
                    count++;
                    Serial.println(count);
                    delay(500);       
                }
            }
        Serial.println("Faster X 2 (Current Speed : X" + String(pow(2, count)) + ")");
        tone(8,400,100);
    }     
    if (count == 2)
    {
        for (light = 3 ; light <= 13 ; light++)
            {
                if(light == 8)
                {
                    digitalWrite(light,0);
                    continue;
                }
                digitalWrite(light, 1);
                delay(25);
                digitalWrite(light, 0);
                if (digitalRead(2)==0)
                {           
                    count++;
                    Serial.println(count);
                    delay(500);       
                }        
            }
        for (light = 13 ; light >= 3 ; light--)
            {
                if(light == 8)
                {
                    digitalWrite(light,0);
                    continue;
                }
                digitalWrite(light, 1);
                delay(25);
                digitalWrite(light, 0);
                if (digitalRead(2)==0)
                {   
                            
                    count++;
                    Serial.println(count);
                    delay(500);       
                }
            }
        Serial.println("Faster X 2 (Current Speed : X" + String(pow(2, count)) + ")");
        tone(8,400,100);
    }     
    if (count == 3)
    {
        for (light = 3 ; light <= 13 ; light++)
            {
                if(light == 8)
                {
                    digitalWrite(light,0);
                    continue;
                }
                digitalWrite(light, 1);
                delay(12.5);
                digitalWrite(light, 0);
                if (digitalRead(2)==0)
                {           
                    count++;
                    Serial.println(count);
                    delay(500);       
                }        
            }
        for (light = 13 ; light >= 3 ; light--)
            {
                if(light == 8)
                {
                    digitalWrite(light,0);
                    continue;
                }
                digitalWrite(light, 1);
                delay(12.5);
                digitalWrite(light, 0);
                if (digitalRead(2)==0)
                {           
                    count++;
                    Serial.println(count);
                    delay(500);       
                }
            }
        Serial.println("Faster X 2 (Current Speed : X" + String(pow(2, count)) + ")");
        tone(8,400,100);
    }     
    if (count > 3)
    {
       int hran = count;
        for (light = 3 ; light <= 13 ; light++)
            {
                if(light == 8)
                {
                    digitalWrite(light,0);
                    continue;
                }
                digitalWrite(light, 1);
                delay(100 / pow(2,hran));
                digitalWrite(light, 0);
                if (digitalRead(2)==0)
                {           
                    count++;
                    Serial.println(count);
                    delay(500);       
                }        
            }
        for (light = 13 ; light >= 3 ; light--)
            {
                if(light == 8)
                {
                    digitalWrite(light,0);
                    continue;
                }
                digitalWrite(light, 1);
                delay(100 / pow(2,hran));
                digitalWrite(light, 0);
                if (digitalRead(2)==0)
                {           
                    count++;
                    Serial.println(count);
                    delay(500);       
                }
            }
        Serial.println("Faster X 2 (Current Speed : X" + String(pow(2, count)) + ")");
        tone(8,400,100);
    }     
}  
    