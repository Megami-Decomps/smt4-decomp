/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b388` (_code @ 0x11b388, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern char s__0_1_0_0_0_0___1_____00464cb8[48]; /* 0x464cb8 */


void FUN_0011b388(unsigned int *param_1,int param_2)

{
  *(char *)(param_1 + 1) = (char)param_2;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = *(unsigned int *)(s__0_1_0_0_0_0___1_____00464cb8 + param_2 * 4);
  return;
}
