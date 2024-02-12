#include <Arduino.h>

#define RED_ON  0b00001010  
#define YEL_ON  0b00100010 
#define GRN_ON  0b00101000  
#define RYE_ON  0b00000010  
long startTime = 0;       
unsigned long currentTime = millis();
long elapsedTime = currentTime-startTime;
long cycleTime = 11000; 
	 
void setup()
{
  DDRB = 0xFF;  		
}

void loop()
{
  currentTime = millis();
elapsedTime = currentTime-startTime;

  if(elapsedTime > cycleTime)  
    startTime = currentTime;
	
  if (elapsedTime < 2000)
  PORTB = YEL_ON;

	
  if ( elapsedTime > 2000  && elapsedTime < 6000)
  PORTB = RED_ON;

	
  if ( elapsedTime > 6000  && elapsedTime < 7000)
  PORTB = RYE_ON;

	
  if ( elapsedTime > 7000  && elapsedTime < 11000)
  PORTB = GRN_ON;
}






