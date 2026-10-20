#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


void FUN_0037e1b0(int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  *(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x137f) = (char)param_1;
  if (param_1 < 0) {
    *(unsigned char *)(temp_v0 + 0x1384) = 0;
  }
  else {
    *(unsigned char *)(temp_v0 + 0x1384) = param_2;
  }
  return;
}

} /* extern "C" */
