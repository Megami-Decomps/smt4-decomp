/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b65c` (_code @ 0x18b65c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005891f0; /* 0x5891f0 */


unsigned char FUN_0018b65c(void)

{
  return (DAT_005891f0 & 7) == 2;
}

} /* extern "C" */
