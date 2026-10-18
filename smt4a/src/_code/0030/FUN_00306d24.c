/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00306d24` (_code @ 0x306d24, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055a790; /* 0x55a790 */


void FUN_00306d24(unsigned int *param_1,unsigned int param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_0055a790;
  param_1[2] = param_2;
  *(unsigned short *)(param_1 + 3) = param_3;
  return;
}
