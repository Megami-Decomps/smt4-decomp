/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273a78` (_code @ 0x273a78, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a78; /* 0x447a78 */


unsigned char FUN_00273a78(void)

{
  return *(int *)(DAT_00447a78 + 0x34) != 0xff;
}
