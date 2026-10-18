/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020b6d4` (_code @ 0x20b6d4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */

extern int FUN_002adc20(void);


void FUN_0020b6d4(int param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_00588fd4;
  *(unsigned int *)(DAT_00588fd4 + 0x10) = 0;
  temp_v2 = *(unsigned int *)(temp_v0 + 0x1368);
  *(int *)(temp_v0 + 0x1368) = param_1;
  *(unsigned int *)(temp_v0 + 0x1370) = temp_v2;
  if ((param_1 == 4) && (temp_v1 = FUN_002adc20(), temp_v1 == 0)) {
    *(unsigned int *)(temp_v0 + 0x1368) = 0xb;
  }
  return;
}
