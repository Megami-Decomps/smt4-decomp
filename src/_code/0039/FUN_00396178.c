/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00396178` (_code @ 0x396178, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421f64; /* 0x421f64 */


void FUN_00396178(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = (unsigned int)&DAT_00421f64;
  param_1[1] = param_2;
  param_1[9] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(unsigned char *)(param_1 + 2) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  return;
}
