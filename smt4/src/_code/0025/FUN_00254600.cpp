/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254600` (_code @ 0x254600, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


void FUN_00254600(unsigned short param_1)

{
  *(unsigned short *)((*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x24bac) = param_1;
  return;
}

} /* extern "C" */
