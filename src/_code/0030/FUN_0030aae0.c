/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030aae0` (_code @ 0x30aae0, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


unsigned char FUN_0030aae0(void)

{
  return *(int *)(DAT_0044e190 + 0x400) == 10;
}
