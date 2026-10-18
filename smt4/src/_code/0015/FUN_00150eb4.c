/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150eb4` (_code @ 0x150eb4, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421c98; /* 0x421c98 */


void FUN_00150eb4(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_00421c98;
  *(unsigned short *)(param_1 + 0x82) = 0;
  *(unsigned char *)((int)param_1 + 0x20a) = 0;
  return;
}
