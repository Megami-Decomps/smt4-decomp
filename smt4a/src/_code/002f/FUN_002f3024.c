/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3024` (_code @ 0x2f3024, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005586e8; /* 0x5586e8 */
extern unsigned char DAT_0055b07c; /* 0x55b07c */


void FUN_002f3024(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_005586e8;
  param_1[1] = (unsigned int)&DAT_0055b07c;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}
