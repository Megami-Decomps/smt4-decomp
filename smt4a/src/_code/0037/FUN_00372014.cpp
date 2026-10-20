/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372014` (_code @ 0x372014, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fd4; /* 0x588fd4 */


unsigned char FUN_00372014(void)

{
  if (DAT_00588fd4 != 0) {
    return *(short *)(DAT_00588fd4 + 0x132c) == 0xf;
  }
  return 0;
}

} /* extern "C" */
