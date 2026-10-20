#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f27c; /* 0x57f27c */


void FUN_00333be0(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f27c + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f27c + 0x4)) + 0x7ec) = param_1;
  *(unsigned int *)(temp_v0 + 0x7f0) = param_2;
  return;
}

} /* extern "C" */
