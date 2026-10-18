/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c9100` (_code @ 0x3c9100, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003c9100(int param_1,unsigned char param_2,unsigned short *param_3)

{
  *(unsigned char *)(param_1 + 0x132) = param_2;
  if (param_3 != (unsigned short *)0x0) {
    *(unsigned short *)(param_1 + 0x134) = *param_3;
  }
  return;
}
