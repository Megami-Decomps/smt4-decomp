/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c2f4` (_code @ 0x37c2f4, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0037c2f4(int param_1,unsigned int param_2)

{
  if (*(unsigned char *)(param_1 + 0x2d) != param_2) {
    *(char *)(param_1 + 0x2d) = (char)param_2;
    *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) | 8;
  }
  return;
}
