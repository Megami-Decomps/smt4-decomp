/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235744` (_code @ 0x235744, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e190; /* 0x43e190 */


void FUN_00235744(unsigned char param_1)

{
  *(unsigned char *)(DAT_0043e190 + 0x33) = param_1;
  return;
}
