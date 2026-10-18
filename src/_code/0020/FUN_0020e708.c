/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020e708` (_code @ 0x20e708, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00448c58; /* 0x448c58 */


unsigned int FUN_0020e708(int param_1)

{
  return *(unsigned int *)(DAT_00448c58 + param_1 * 8 + 0x780);
}
