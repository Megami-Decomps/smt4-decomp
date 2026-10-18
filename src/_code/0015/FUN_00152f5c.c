/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152f5c` (_code @ 0x152f5c, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00464af8; /* 0x464af8 */


void FUN_00152f5c(unsigned int param_1)

{
  DAT_00464af8 = DAT_00464af8 & ~param_1;
  return;
}
