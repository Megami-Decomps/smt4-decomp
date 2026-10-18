/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110298` (_code @ 0x110298, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559320; /* 0x559320 */
extern unsigned char DAT_0064bed0; /* 0x64bed0 */


void FUN_00110298(unsigned int *param_1,int param_2)

{
  param_1[1] = param_2;
  *param_1 = (unsigned int)&DAT_00559320;
  if (param_2 == 0) {
    param_1[1] = (unsigned int)&DAT_0064bed0;
  }
  return;
}
