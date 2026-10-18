/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003946f0` (_code @ 0x3946f0, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0049f970; /* 0x49f970 */


void FUN_003946f0(int param_1)

{
  *(unsigned char *)(param_1 + 0x1a) = 0;
  *(unsigned short *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x1e) = 0;
  *(unsigned int *)(param_1 + 0x22) = 0;
  *(unsigned int *)(param_1 + 0x26) = 0;
  *(unsigned int *)(param_1 + 0x2a) = 0;
  *(unsigned int *)(param_1 + 0x2e) = 0;
  *(unsigned int *)(param_1 + 0x32) = 0;
  DAT_0049f970 = 0;
  return;
}
