#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


void FUN_0033440c(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) != 0) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x20a8) = param_1;
    *(unsigned char *)(temp_v0 + 0x20ac) = 0;
  }
  return;
}

} /* extern "C" */
