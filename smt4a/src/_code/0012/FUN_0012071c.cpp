#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055ad9c; /* 0x55ad9c */

extern int FUN_002e9f64(unsigned int *);


int FUN_0012071c(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ad9c;
  temp_v0 = FUN_002e9f64(param_1 + 2);
  return temp_v0 - 8;
}

} /* extern "C" */
