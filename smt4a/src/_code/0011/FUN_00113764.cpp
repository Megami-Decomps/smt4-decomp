#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055959c; /* 0x55959c */

extern unsigned int *FUN_002ec6ec(unsigned int, unsigned int, unsigned int);


void FUN_00113764(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002ec6ec(param_1,6,0x40);
  *puVar1 = (unsigned int)&DAT_0055959c;
  return;
}

} /* extern "C" */
