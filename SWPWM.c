#include "SWPWM.h"

void SWPWM_init(uint32_t frequency_kh, uint8_t dutyCycle){
    /* 
    Initialize timer connected to pin 0 port A registers to pwm mode
    with relavant clock prescalar and top value to reach required 
    frequency. Also set compare register with adequate value to reach
    required duty cycle.
    */

    DIO_init(0, A, OUT);

}
void SWPWM_start(void){
    /* 
    Set timer enable bit in relavent register.
    */

}
void SWPWM_changeDutyCycle(uint8_t newDutyCycle){
    /* 
    Change value in compare register connected to the timer.
    */

}
void SWPWM_stop(void){
    /* 
    Reset timer enable bit in relavent register.
    */

}
