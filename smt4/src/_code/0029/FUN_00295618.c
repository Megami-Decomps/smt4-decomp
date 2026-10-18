/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295618` (_code @ 0x295618, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


unsigned char FUN_00295618(void)

{
  return *(int *)(DAT_0044e144 + 0x12dc) == 3;
}
