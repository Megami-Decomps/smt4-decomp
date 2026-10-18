/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294a24` (_code @ 0x294a24, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058103c; /* 0x58103c */


unsigned char FUN_00294a24(void)

{
  return *(int *)(DAT_0058103c + 0x40) != 0xff;
}
