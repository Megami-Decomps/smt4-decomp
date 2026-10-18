/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b4a4` (_code @ 0x23b4a4, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0057f598; /* 0x57f598 */


unsigned int FUN_0023b4a4(int param_1)

{
  return *(unsigned int *)(&DAT_0057f598 + param_1 * 4);
}
