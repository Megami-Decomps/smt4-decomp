/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b688` (_code @ 0x38b688, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */


void FUN_0038b688(unsigned int *param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_00588fd4;
  *(unsigned int *)(DAT_00588fd4 + 0x2000) = *param_1;
  *(unsigned int *)(temp_v0 + 0x2004) = param_1[1];
  *(unsigned int *)(temp_v0 + 0x2008) = param_1[2];
  *(unsigned short *)(temp_v0 + 0x200c) = *(unsigned short *)(param_1 + 3);
  return;
}
