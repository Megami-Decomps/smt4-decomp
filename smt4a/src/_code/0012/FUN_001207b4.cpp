#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055adc0; /* 0x55adc0 */

extern int FUN_002e9318(unsigned int *);


int FUN_001207b4(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055adc0;
  temp_v0 = FUN_002e9318(param_1 + 2);
  return temp_v0 - 8;
}

} /* extern "C" */
