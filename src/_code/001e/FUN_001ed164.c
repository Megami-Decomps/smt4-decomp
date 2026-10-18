/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed164` (_code @ 0x1ed164, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00478000; /* 0x478000 */


unsigned char * FUN_001ed164(int param_1)

{
  return &DAT_00478000 + param_1 * 0x148;
}
