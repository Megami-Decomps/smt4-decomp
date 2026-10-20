/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c3a0` (_code @ 0x26c3a0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fd4; /* 0x588fd4 */


unsigned char FUN_0026c3a0(void)

{
  return *(int *)(DAT_00588fd4 + 0x1368) == 4;
}

} /* extern "C" */
