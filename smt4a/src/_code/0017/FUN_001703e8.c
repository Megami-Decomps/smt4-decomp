/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001703e8` (_code @ 0x1703e8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005891f0; /* 0x5891f0 */


unsigned char FUN_001703e8(void)

{
  return (DAT_005891f0 & 7) == 0;
}
