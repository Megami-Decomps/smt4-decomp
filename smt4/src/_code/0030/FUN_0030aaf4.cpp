/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030aaf4` (_code @ 0x30aaf4, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned char FUN_0030aaf4(void)

{
  return *(int *)(DAT_0044e190 + 0x400) == 0xf;
}

} /* extern "C" */
