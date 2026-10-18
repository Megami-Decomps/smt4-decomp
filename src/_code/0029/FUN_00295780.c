/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295780` (_code @ 0x295780, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434210; /* 0x434210 */


void FUN_00295780(unsigned char param_1)

{
  if (DAT_00434210 != 0) {
    *(unsigned char *)(DAT_00434210 + 0x2f4) = param_1;
  }
  return;
}
