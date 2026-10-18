/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341f54` (_code @ 0x341f54, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f0c8; /* 0x57f0c8 */


unsigned short FUN_00341f54(unsigned int param_1)

{
  if ((DAT_0057f0c8 != 0) && (param_1 < 6)) {
    return *(unsigned short *)(DAT_0057f0c8 + param_1 * 4 + 0x5ae);
  }
  return 0;
}
