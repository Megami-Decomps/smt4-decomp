/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd3ec` (_code @ 0x4bd3ec, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_004bd3ec(int param_1,unsigned int param_2)

{
  *(unsigned short *)(param_1 + 0x60) = *(unsigned short *)(param_1 + 0x60) | (unsigned short)(1 << (param_2 & 0xff));
  return;
}

} /* extern "C" */
