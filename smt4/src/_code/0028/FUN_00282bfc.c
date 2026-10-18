/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282bfc` (_code @ 0x282bfc, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004d975c; /* 0x4d975c */
extern unsigned char DAT_004d9768; /* 0x4d9768 */


void FUN_00282bfc(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = param_1 * 0x14;
  *(unsigned int *)(temp_v0 + 0x4d9764) = param_2;
  (&DAT_004d975c)[param_1 * 5] = 0;
  (&DAT_004d9768)[temp_v0] = 3;
  *(unsigned int *)(temp_v0 + 0x4d9758) = 0x3f800000;
  return;
}
