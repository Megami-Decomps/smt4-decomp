#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

extern int FUN_002adc20(void);


void FUN_0020b6d4(int param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x10) = 0;
  temp_v2 = *(unsigned int *)(temp_v0 + 0x1368);
  *(int *)(temp_v0 + 0x1368) = param_1;
  *(unsigned int *)(temp_v0 + 0x1370) = temp_v2;
  if ((param_1 == 4) && (temp_v1 = FUN_002adc20(), temp_v1 == 0)) {
    *(unsigned int *)(temp_v0 + 0x1368) = 0xb;
  }
  return;
}

} /* extern "C" */
