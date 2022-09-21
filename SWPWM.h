#ifndef SWPWM_H_
#define SWPWM_H_

#include <stdint.h>
#include "GPIO.h"

void SWPWM_init(uint32_t frequency_kh, uint8_t dutyCycle);
void SWPWM_start(void);
void SWPWM_changeDutyCycle(uint8_t newDutyCycle);
void SWPWM_stop(void);

#endif