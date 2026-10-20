/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f01c4` (_code @ 0x2f01c4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_002f01c4(unsigned short param_1)

{
  if (DAT_00588fe8 != 0) {
    *(unsigned short *)(DAT_00588fe8 + 0x598) = param_1;
  }
  return;
}

} /* extern "C" */
