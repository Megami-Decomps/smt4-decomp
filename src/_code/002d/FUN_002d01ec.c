/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d01ec` (_code @ 0x2d01ec, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_002d01ec(int param_1)

{
  return *(int *)(param_1 + 0x2180) != 4;
}
