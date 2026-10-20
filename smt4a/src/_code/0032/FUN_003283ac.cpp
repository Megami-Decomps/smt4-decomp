#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588e3c; /* 0x588e3c */


void FUN_003283ac(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588e3c + 0x20));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_00588e3c + 0x20)) + 0x3b) = 0;
  *(unsigned int *)(temp_v0 + 0xa8) = param_1;
  return;
}

} /* extern "C" */
