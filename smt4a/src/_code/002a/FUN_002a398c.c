/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a398c` (_code @ 0x2a398c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005c6000; /* 0x5c6000 */


unsigned char * FUN_002a398c(int param_1)

{
  return &DAT_005c6000 + param_1 * 0x148;
}
