/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014734c` (_code @ 0x14734c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0014734c(int param_1,unsigned short param_2)

{
  *(unsigned short *)(*(int *)(param_1 + 0x68) + 0x1e) =
       ((param_2 & 3) << 2) | (*(unsigned short *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xfff3);
  return;
}

} /* extern "C" */
