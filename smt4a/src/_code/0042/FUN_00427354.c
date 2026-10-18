/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00427354` (_code @ 0x427354, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned short FUN_00427354(int param_1)

{
  return *(unsigned short *)(param_1 + 0x4a) & 0xff;
}
