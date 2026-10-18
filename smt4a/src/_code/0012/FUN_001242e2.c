/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001242e2` (_code @ 0x1242e2, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_001242e2(int param_1)

{
  return (*(unsigned int *)(param_1 + 4) >> 3) + (*(unsigned int *)(param_1 + 8) & 0xfffffffc);
}
