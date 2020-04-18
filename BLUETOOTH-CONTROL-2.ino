int m1a = 8;
int m1b = 9;
int m2a = 10;
int m2b = 11;
char val;


void setup() 

{

  pinMode(m1a,OUTPUT);              // Initialize Pin 8 as Output Pin for Motor Output 2

  pinMode(m1b,OUTPUT);              // Initialize Pin 9 as Output Pin for Motor Output 2

  pinMode(m2a,OUTPUT);            // Initialize Pin 10 as Output Pin for Motor Output 1

  pinMode(m2b,OUTPUT);            // Initialize Pin 11 as Output Pin for Motor Output 1

  Serial.begin(9600);

}

void loop() 

{

  while(Serial.available()>0)
  {
    val = Serial.read();      // put your main code here, to run repeatedly
    Serial.println(val);
  }

    if(val == 'F')
  {                                                                                 // Forward Movement

    digitalWrite(m1a,HIGH);           // Pin 8 is High for Motor Output 2

    digitalWrite(m1b,LOW);            // Pin 9 is Low

    digitalWrite(m2a,HIGH);         // Pin 10 is High for Motor Output 1

    digitalWrite(m2b,LOW);          // Pin 11 is Low

  }


   else if (val == 'B')
  {                               // Right Movement

    digitalWrite(m1a,LOW);           // Pin 8 is High for Motor Output 2

    digitalWrite(m1b,HIGH);            // Pin 9 is Low

    digitalWrite(m2a,LOW);         // Pin 10 is High for Motor Output 1

    digitalWrite(m2b,HIGH);   // Pin 11 is Low

  }

 

  else if(val == 'L')
  {                                  // Left Movement

   digitalWrite(m1a,LOW);           // Pin 8 is High for Motor Output 2

    digitalWrite(m1b,LOW);            // Pin 9 is Low

    digitalWrite(m2a,HIGH);         // Pin 10 is High for Motor Output 1

    digitalWrite(m2b,LOW);      // Pin 11 is Low

  }

    else if(val == 'R')
   {           // Stop

    digitalWrite(m1a,HIGH);           // Pin 8 is Low

    digitalWrite(m1b,LOW);           // Pin 9 is Low

    digitalWrite(m2a,LOW);         // Pin 10 is Low

    digitalWrite(m2b,LOW);         // Pin 11 is Low
  }
   else if(val == 'I')
   {           // Stop

    digitalWrite(m1a,HIGH);           // Pin 8 is Low

    digitalWrite(m1b,LOW);           // Pin 9 is Low

    digitalWrite(m2a,LOW);         // Pin 10 is Low

    digitalWrite(m2b,LOW);
   }
    else if(val == 'S')
   {           // Stop

    digitalWrite(m1a,LOW);           // Pin 8 is Low

    digitalWrite(m1b,LOW);           // Pin 9 is Low

    digitalWrite(m2a,LOW);         // Pin 10 is Low

    digitalWrite(m2b,LOW);
   }
    
else if(val == 'G')
   {           // Stop

    digitalWrite(m1a,LOW);           // Pin 8 is Low

    digitalWrite(m1b,LOW);           // Pin 9 is Low

    digitalWrite(m2a,HIGH);         // Pin 10 is Low

    digitalWrite(m2b,LOW);
   }
   else if(val == 'H')
   {           // Stop

    digitalWrite(m1a,LOW);           // Pin 8 is Low

    digitalWrite(m1b,LOW);           // Pin 9 is Low

    digitalWrite(m2a,LOW);         // Pin 10 is Low

    digitalWrite(m2b,HIGH);
   }
}
