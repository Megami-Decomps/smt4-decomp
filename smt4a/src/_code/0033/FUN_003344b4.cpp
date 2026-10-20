#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


void FUN_003344b4(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x201c) = param_1;
  *(unsigned int *)(temp_v0 + 0x2020) = param_2;
  return;
}

} /* extern "C" */
