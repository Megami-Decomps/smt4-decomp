/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341940` (_code @ 0x341940, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0059dbb8; /* 0x59dbb8 */


unsigned char FUN_00341940(int param_1)

{
  return *(int *)(DAT_0059dbb8 + param_1 * 0x18) != 0;
}
