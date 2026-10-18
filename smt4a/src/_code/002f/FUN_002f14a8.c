/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f14a8` (_code @ 0x2f14a8, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_002f14a8(int param_1,unsigned char param_2)

{
  return (*(unsigned char *)(param_1 + 0x1c) & param_2) != 0;
}
