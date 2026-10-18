/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026e88c` (_code @ 0x26e88c, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0026e88c(int param_1,unsigned int param_2)

{
  *(unsigned short *)(param_1 + 0x44) = *(unsigned short *)(param_1 + 0x44) | (unsigned short)(1 << (param_2 & 0xff));
  return;
}
