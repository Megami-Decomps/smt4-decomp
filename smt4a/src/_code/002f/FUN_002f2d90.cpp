/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2d90` (_code @ 0x2f2d90, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0062d830; /* 0x62d830 */


void FUN_002f2d90(int param_1)

{
  *(int *)(&DAT_0062d830 + param_1 * 4) = *(int *)(&DAT_0062d830 + param_1 * 4) + 1;
  return;
}

} /* extern "C" */
