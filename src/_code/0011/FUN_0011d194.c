/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d194` (_code @ 0x11d194, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044e398; /* 0x44e398 */


unsigned char FUN_0011d194(void)

{
  return (DAT_0044e398 & 7) == 6;
}
