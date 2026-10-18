/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024bd24` (_code @ 0x24bd24, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea28; /* 0x44ea28 */


unsigned char FUN_0024bd24(int param_1)

{
  return *(int *)(DAT_0044ea28 + param_1 * 0x18) != 0;
}
