#ifndef BASIC_H_
#define BASIC_H_

#define set_bit(register, bit) register |= (1<<bit)
#define reset_bit(register, bit) register &= ~(1<<bit)
#define toggle_bit(register, bit) register ^= (1<<bit)

#endif