#include <card.h>
#fuses INTRC_IO,NOWDT,NOPUT,NOPROTECT,NOCPD,NOMCLR
#use delay(clock=4000000)
#define GP0 PIN_A0
#define GP1 PIN_A1
#define GP2 PIN_A2
#define GP3 PIN_A3
#define GP4 PIN_A4
#define GP5 PIN_A5
#INT_TIMER0
/*void Timer0_isr(void){
  output_high(PIN_A5);
  set_timer1(1000);                              // Timer1 preload value
  clear_interrupt(INT_TIMER0);                   // Clear Timer1 overflow bit
}
*/


 
void init()
{
set_tris_a( 0b00000001 ); // set GP1 output, all other inputs
setup_comparator( NC_NC_NC_NC ); // disable comparators
setup_adc_ports( NO_ANALOGS ); // disable analog inputs
setup_adc( ADC_OFF ); // disable A2D
}


   



main()
{
int last2=1;

//setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1|RTCC_8_bit);  
init();
                    // Set the internal oscillator to 4MHz
 // clear_interrupt(INT_TIMER0);                   // Clear Timer1 overflow bit
  //enable_interrupts(INT_TIMER0);                 // Enable Timer1 interrupt
  //enable_interrupts(GLOBAL);                     // Enable global interrupts
        // Timer1 configuration: internal clock source + 8 prescaler
                         // Timer1 preload value
     
while ( TRUE ) // blink LED
{output_low(PIN_A1);
loop:

long int timer =1800;
int timer2=30;
int time=1;

  while(input_state(PIN_A0) == 0){
          delay_ms(250);
           if(input_state(PIN_A0) ==0){
           while(timer)             //Countdown 50 seconds
    {output_high(PIN_A1);
       //Display timer
       
       if(input_state(PIN_A0)==1){
       
    while(timer2){
        output_toggle(PIN_A1);
        delay_ms(1000);
        timer2--; 
       if(input_state(PIN_A0)==0){goto loop;}
        }
     
     
       
       break;
       }
    delay_ms(1000);   //Wait 1 second
    timer--;              //Decrease timer                          
   output_low(PIN_A1);
    }
   
   
  /*while(timer2){
        output_low(PIN_A1);
        delay_ms(1000);
        timer2--;
        }
   */
 //&&&&&&&&&&&&&&&&&&&

  /*  while(timer2){
        output_low(PIN_A1);
        delay_ms(1000);
        timer2--;
        }
   
   */
           
   //     while( GET_TIMER0()<time){ output_low(PIN_A5);time++; }
       
         
       
       
       
       
       
        }
       
       
           
           
         
       
         
  }}}
   


   

//if(input_state(GP1==1)){
//output_high( GP5 ); // turn LED on
//delay_ms( 250 ); // wait 250ms
//output_low( GP5 ); // turn LED off
//delay_ms( 250 ); // wait 250ms

