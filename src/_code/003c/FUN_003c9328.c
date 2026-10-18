/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c9328` (_code @ 0x3c9328, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003c9328(int param_1,unsigned char param_2,unsigned short *param_3)

{
  *(unsigned char *)(param_1 + 0x132) = param_2;
  if (param_3 != (unsigned short *)0x0) {
    *(unsigned short *)(param_1 + 0x134) = *param_3;
  }
  return;
}
