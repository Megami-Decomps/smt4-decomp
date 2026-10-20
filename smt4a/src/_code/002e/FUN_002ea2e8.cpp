/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea2e8` (_code @ 0x2ea2e8, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558a58; /* 0x558a58 */


void FUN_002ea2e8(unsigned int *param_1)

{
  param_1[1] = (unsigned int)(param_1 + 4);
  param_1[2] = 0x100;
  *param_1 = (unsigned int)&DAT_00558a58;
  param_1[3] = (unsigned int)(param_1 + 4);
  *(unsigned short *)(param_1 + 4) = 0;
  *(unsigned char *)(param_1 + 0x84) = 0;
  *(unsigned char *)((int)param_1 + 0x211) = 1;
  *(unsigned char *)((int)param_1 + 0x212) = 1;
  return;
}

} /* extern "C" */
