#include "SWPWM.h"

void SWPWM_init(uint32_t frequency_kh, uint8_t dutyCycle){
    DIO_init(0, A, OUT);

}
void SWPWM_start(void){

}
void SWPWM_changeDutyCycle(uint8_t newDutyCycle){

}
void SWPWM_stop(void){
    
}
