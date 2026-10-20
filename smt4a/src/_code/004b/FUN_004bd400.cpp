/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd400` (_code @ 0x4bd400, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_004bd400(int param_1,unsigned short param_2)

{
  *(unsigned short *)(param_1 + 0x60) = *(unsigned short *)(param_1 + 0x60) & ~param_2;
  return;
}

} /* extern "C" */
