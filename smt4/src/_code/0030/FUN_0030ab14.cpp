/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ab14` (_code @ 0x30ab14, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned char FUN_0030ab14(void)

{
  return *(int *)(DAT_0044e190 + 0x400) == 10;
}

} /* extern "C" */
