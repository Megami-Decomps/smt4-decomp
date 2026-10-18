/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103f8c` (_code @ 0x103f8c, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004daed0; /* 0x4daed0 */


void FUN_00103f8c(void)

{
  DAT_004daed0 = 1 - DAT_004daed0;
  *(unsigned int *)(DAT_004daed0 * 4 + 0x4daec8) = 0;
  return;
}
