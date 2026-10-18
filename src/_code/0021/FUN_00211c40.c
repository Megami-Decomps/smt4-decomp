/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211c40` (_code @ 0x211c40, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433260; /* 0x433260 */


void FUN_00211c40(unsigned int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_00433260;
  temp_v1 = *param_1;
  temp_v2 = param_1[1];
  *(unsigned int *)(DAT_00433260 + 0x510) = param_1[2];
  *(unsigned int *)(temp_v0 + 0x508) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x50c) = temp_v2;
  return;
}
