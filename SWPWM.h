#ifndef SWPWM_H_
#define SWPWM_H_

#include <stdint.h>
#include "BASIC.h"
#include "GPIO.h"

// Timer1 registers 0x40012C00 - 0x40012FFF
#define TIM1_CR1 (*(volatile uint32_t*) 0x40012C00) // Control Register 1
#define TIM1_CR2 (*(volatile uint32_t*) 0x40012C04) // Control Register 2
#define TIM1_SMCR (*(volatile uint32_t*) 0x40012C08)
#define TIM1_DIER (*(volatile uint32_t*) 0x40012C0C)
#define TIM1_SR (*(volatile uint32_t*) 0x40012C10)
#define TIM1_EGR (*(volatile uint32_t*) 0x40012C14)

#define TIM1_CCMR1 (*(volatile uint32_t*) 0x40012C18)
#define TIM1_CCMR2 (*(volatile uint32_t*) 0x40012C1C)
#define TIM1_CCER (*(volatile uint32_t*) 0x40012C20)
#define TIM1_CNT (*(volatile uint32_t*) 0x40012C24) // Counter register
#define TIM1_PSC (*(volatile uint32_t*) 0x40012C28) // Prescalar register (1 - 65536)
#define TIM1_ARR (*(volatile uint32_t*) 0x40012C2C) // Auto-reload register ( Preloaded value here )

#define TIM1_RCR (*(volatile uint32_t*) 0x40012C30) // Repeatition counter register
#define TIM1_CCR1 (*(volatile uint32_t*) 0x40012C34)
#define TIM1_CCR2 (*(volatile uint32_t*) 0x40012C38)
#define TIM1_CCR3 (*(volatile uint32_t*) 0x40012C3C)
#define TIM1_CCR4 (*(volatile uint32_t*) 0x40012C40)
#define TIM1_BDTR (*(volatile uint32_t*) 0x40012C44)

#define TIM1_DCR (*(volatile uint32_t*) 0x40012C48)
#define TIM1_DMAR (*(volatile uint32_t*) 0x40012C4C)

// Timer bits in registers

// TIMx_CR1
#define CKD1 9 // clock division ratio
#define CKD0 8
#define ARPE 7 // Autoreload preload enable
#define CMS1 6 // Center aligned mode selection
#define CMS0 5
#define DIR  4 // Direction of counting (up or down)
#define OPM  3 // One pulse mode
#define URS  2 // Update request source
#define UDIS 1 // Update Disable
#define CEN  0 // Counter enable

// Similarly for the rest of the registers.
// Note that probably there is a libary for arm cortex m3 
// that has all these definitions that I don't know about.



// Functions
void SWPWM_init(uint32_t frequency_kh, uint8_t dutyCycle);
void SWPWM_start(void);
void SWPWM_changeDutyCycle(uint8_t newDutyCycle);
void SWPWM_stop(void);

#endif