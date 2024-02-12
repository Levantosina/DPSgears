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




/*#include <Arduino.h>
uint32_t uMsCnt, start_time, current_time=0;

#define PWM_100 255
#define PWM_50 128
#define PWM_0 0

#define PIN_GRN PD6
#define PIN_RED PD7
#define TRL_PORT PORTD
#define TRL_DDR DDRD
#define GRN_OFF (1 << PIN_GRN)
#define GRN_ON (~(1 << PIN_GRN))
#define RED_OFF (1 <<PIN_RED)
#define RED_ON (~(1 << PIN_RED))

void setup() {

TRL_DDR |= RED_OFF; 
TRL_DDR |= GRN_OFF; 
TRL_PORT &= (RED_ON);
TRL_PORT &= (GRN_ON);



DDRB |= (1 << PB1); 
TCCR1A = (1 << COM1A1) | (1 << WGM10); 
OCR1A = 0x0040; 
TCCR1B = (1 << CS10); 
uMsCnt = 0; 
start_time = millis(); 

}
void loop() {
//uint32_t current_time = 0;
switch(uMsCnt) { 
case 0:
OCR1A = PWM_100; 
TRL_PORT |= GRN_OFF; 
TRL_PORT &= (RED_ON); 
break;
case 2500:
OCR1A = PWM_50; 
TRL_PORT |= RED_OFF;
TRL_PORT &= (GRN_ON); 
break;
case 7500: 
uMsCnt = 0; 
start_time = millis();
break;
default:
break;
} 

current_time = millis(); 
if (current_time > start_time) { 
uMsCnt += (current_time - start_time);
start_time = current_time; 
}
}
*/



