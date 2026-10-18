/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ee4c` (_code @ 0x29ee4c, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_0029ee4c(int param_1,unsigned int param_2)

{
  return ((unsigned int)*(unsigned short *)(param_1 + 0x44) & (1 << (param_2 & 0xff))) != 0;
}
