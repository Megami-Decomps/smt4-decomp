/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1a34` (_code @ 0x1d1a34, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001d1a34(int param_1,short param_2)

{
  *(unsigned short *)(*(int *)(param_1 + 0x68) + 0x1e) =
       (*(unsigned short *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xffef) | (param_2 << 4);
  return;
}

} /* extern "C" */
