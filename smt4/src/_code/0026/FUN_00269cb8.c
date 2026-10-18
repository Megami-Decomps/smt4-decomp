/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00269cb8` (_code @ 0x269cb8, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043daa8; /* 0x43daa8 */


void FUN_00269cb8(unsigned int param_1)

{
  if (DAT_0043daa8 != 0) {
    *(unsigned int *)(DAT_0043daa8 + 0xd34) = param_1;
  }
  return;
}
