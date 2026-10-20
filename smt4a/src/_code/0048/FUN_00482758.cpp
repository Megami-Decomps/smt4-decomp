/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00482758` (_code @ 0x482758, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c824; /* 0x55c824 */


void FUN_00482758(unsigned int *param_1,unsigned int param_2)

{
  param_1[2] = param_2;
  param_1[10] = 0;
  *param_1 = (unsigned int)&DAT_0055c824;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(unsigned char *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  *(unsigned char *)(param_1 + 0x25) = 0;
  return;
}

} /* extern "C" */
