/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131420` (_code @ 0x131420, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421ce4; /* 0x421ce4 */


void FUN_00131420(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_00421ce4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned short *)(param_1 + 5) = 0;
  *(unsigned short *)((int)param_1 + 0x16) = 0xffff;
  param_1[4] = 6;
  return;
}
