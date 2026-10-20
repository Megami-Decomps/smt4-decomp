#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dd20; /* 0x43dd20 */


void FUN_002cf570(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043dd20 + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0043dd20 + 0x4)) + 0x7ec) = param_1;
  *(unsigned int *)(temp_v0 + 0x7f0) = param_2;
  return;
}

} /* extern "C" */
