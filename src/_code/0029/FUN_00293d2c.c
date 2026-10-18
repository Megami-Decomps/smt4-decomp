/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293d2c` (_code @ 0x293d2c, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


unsigned char FUN_00293d2c(void)

{
  return *(int *)(DAT_0044e190 + 0x400) != 0x12 && *(int *)(DAT_0044e190 + 0x400) != 0x14;
}
