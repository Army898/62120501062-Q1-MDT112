void setup(){
    Serial.begin(9600);
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
}
int count = 0 ;
int light = 3;
int time = 100;
void loop()
{             
    for (light = 3 ; light <= 13 ; light++)
    {
        if(light == 8)
        {
            digitalWrite(light,0);
            continue;
        }
        digitalWrite(light, 1);
        while (digitalRead(2)==0)
        {   
            delay(200);
            if (digitalRead(2)==1)
            {               
                count++;
                tone(8,400,100);        
                Serial.println("Faster X 2 (Current Speed : X" + String(pow(2, count)) + ")");                                
                time = time/2;
            }
                   
        }     
        delay(time);
        digitalWrite(light, 0);               
    }
    for (light = 13 ; light >= 3 ; light--)
        {
        if(light == 8)
        {
            digitalWrite(light,0);
            continue;
        }
        digitalWrite(light, 1);
        while (digitalRead(2)==0)
        {   
            delay(200);
            if (digitalRead(2)==1)
            {               
                count++;
                tone(8,400,100);        
                Serial.println("Faster X 2 (Current Speed : X" + String(pow(2, count)) + ")");                                
                time = time/2;
            }
                       
        }     
        delay(time);
        digitalWrite(light, 0);         
    }    
}