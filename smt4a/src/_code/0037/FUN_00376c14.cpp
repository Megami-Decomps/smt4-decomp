/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376c14` (_code @ 0x376c14, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00580238; /* 0x580238 */


unsigned char FUN_00376c14(void)

{
  return *(int *)(DAT_00580238 + 200) >= 0x3f000000;
}

} /* extern "C" */
