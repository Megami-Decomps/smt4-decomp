/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2bd0` (_code @ 0x2c2bd0, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004d9768; /* 0x4d9768 */


unsigned char FUN_002c2bd0(int param_1)

{
  return (&DAT_004d9768)[param_1 * 0x14];
}
