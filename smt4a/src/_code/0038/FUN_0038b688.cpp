#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


void FUN_0038b688(unsigned int *param_1)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2000) = *param_1;
  *(unsigned int *)(temp_v0 + 0x2004) = param_1[1];
  *(unsigned int *)(temp_v0 + 0x2008) = param_1[2];
  *(unsigned short *)(temp_v0 + 0x200c) = *(unsigned short *)(param_1 + 3);
  return;
}

} /* extern "C" */
