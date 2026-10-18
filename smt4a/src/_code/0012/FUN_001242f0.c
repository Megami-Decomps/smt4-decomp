/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001242f0` (_code @ 0x1242f0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned short FUN_001242f0(int param_1)

{
  return *(unsigned short *)(param_1 + 0x3c) & 0xf;
}
