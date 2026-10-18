/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee7e8` (_code @ 0x2ee7e8, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_002ee7e8(int param_1)

{
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) >> 1;
}
