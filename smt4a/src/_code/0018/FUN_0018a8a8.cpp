/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018a8a8` (_code @ 0x18a8a8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0018a8a8(int param_1,unsigned short param_2)

{
  *(unsigned short *)(*(int *)(param_1 + 0x68) + 0x1e) =
       (param_2 & 3) | (*(unsigned short *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xfffc);
  return;
}

} /* extern "C" */
