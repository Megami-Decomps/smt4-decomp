#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043da28; /* 0x43da28 */


void FUN_00253fe8(unsigned int param_1,unsigned char param_2,unsigned char param_3,unsigned char param_4)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043da28 + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x550) = param_1;
  *(unsigned char *)(temp_v0 + 0x554) = param_2;
  *(unsigned char *)(temp_v0 + 0x555) = param_3;
  *(unsigned char *)(temp_v0 + 0x556) = param_4;
  return;
}

} /* extern "C" */
