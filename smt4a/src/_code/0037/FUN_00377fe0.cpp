/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377fe0` (_code @ 0x377fe0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00580ca0; /* 0x580ca0 */


unsigned char FUN_00377fe0(void)

{
  return *(char *)(DAT_00580ca0 + 4) == '\0';
}

} /* extern "C" */
