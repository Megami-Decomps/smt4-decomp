/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371edc` (_code @ 0x371edc, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_00371edc(unsigned char param_1)

{
  if (DAT_00588fe8 != 0) {
    *(unsigned char *)(DAT_00588fe8 + 0x529) = param_1;
  }
  return;
}

} /* extern "C" */
