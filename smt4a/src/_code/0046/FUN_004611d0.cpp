#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c11c; /* 0x55c11c */


void FUN_004611d0(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_0055c11c;
  param_1[1] = 0;
  return;
}

} /* extern "C" */
