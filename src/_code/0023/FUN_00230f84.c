/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230f84` (_code @ 0x230f84, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e190; /* 0x43e190 */


void FUN_00230f84(unsigned char param_1)

{
  *(unsigned char *)(DAT_0043e190 + 0x32) = param_1;
  return;
}
