/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002958e0` (_code @ 0x2958e0, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


unsigned char FUN_002958e0(void)

{
  return *(int *)(DAT_0044e144 + 0x12dc) == 8;
}
