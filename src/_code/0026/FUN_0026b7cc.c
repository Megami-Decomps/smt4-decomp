/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b7cc` (_code @ 0x26b7cc, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */


unsigned char FUN_0026b7cc(void)

{
  return *(int *)(DAT_0043da2c + 0x10) != 3;
}
