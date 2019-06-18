int IN1 = 4; 
int IN2 = 7; 
int EN1 = 6; 
int EN2 = 5; 

void setup () 
{ 
Serial.begin (9600); 
pinMode (IN1, OUTPUT); 
pinMode (IN2, OUTPUT); 
pinMode (EN1, OUTPUT); 
pinMode (EN2, OUTPUT);
pinMode (13, OUTPUT);

} 
void loop () 
{ 
if (Serial.available ()){ 
    val = Serial.read (); 

    // if O is pressed, turn on the LED
    if(val == 'O'){
      
      digitalWrite(13, HIGH);  
    }

    // if F is pressed, turn off the LED
    if(val == 'F'){

      digitalWrite(13, LOW);
    }
    
    // Set forward motion 
    // Pressing the “W” key 
    if (val == 'W'){ 
      // Conclusions are configured according to Motor Shield's work 
      // Motors spin forward 
      digitalWrite (EN1, HIGH); 
      digitalWrite (EN2, HIGH); 
      digitalWrite (IN1, HIGH);
      digitalWrite (IN2, HIGH); 
    } 
    
    // Set backward motion 
    if (val == 'S') { 
      digitalWrite (EN1, HIGH); 
      digitalWrite (EN2, HIGH); 
      digitalWrite (IN1, LOW); 
      digitalWrite (IN2, LOW); 
     } 
    
    // Set the movement to the right 
    if (val == 'D'){ 
      digitalWrite (EN1, HIGH); 
      digitalWrite (EN2, HIGH); 
      digitalWrite (IN1, HIGH); 
      digitalWrite (IN2, LOW); 
    } 
    
    // Set left motion 
    if (val == 'A'){ 
      digitalWrite (EN1, HIGH); 
      digitalWrite (EN2, HIGH); 
      digitalWrite (IN1, LOW); 
      digitalWrite (IN2, HIGH); 
    } 
    
    // Stop mode
    // When the keys are released in the program, “T” is sent to the port 
    // When the “T” key is pressed
    if (val == 'T'){ 
      // ENABLE findings are attracted to a minus, the motors do not work 
      digitalWrite (EN1, LOW); 
      digitalWrite (EN2, LOW); 
    } 
  } 
}
