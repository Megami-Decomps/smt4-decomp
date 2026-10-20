/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fec60` (_code @ 0x2fec60, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043dd50; /* 0x43dd50 */


unsigned char FUN_002fec60(void)

{
  return *(int *)(DAT_0043dd50 + 4) == 0;
}

} /* extern "C" */
