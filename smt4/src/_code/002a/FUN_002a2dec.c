/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2dec` (_code @ 0x2a2dec, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_002a2dec(int param_1)

{
  return *(unsigned char *)(param_1 + 0x10) & 1;
}
