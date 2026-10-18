/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002345fc` (_code @ 0x2345fc, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned short FUN_002345fc(int param_1)

{
  return *(unsigned short *)(param_1 + 0x4a) & 0xff;
}
