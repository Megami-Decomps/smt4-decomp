/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ebac` (_code @ 0x29ebac, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char FUN_0029ebac(int param_1,unsigned int param_2)

{
  return ((unsigned int)*(unsigned short *)(param_1 + 0x44) & (1 << (param_2 & 0xff))) != 0;
}

} /* extern "C" */
