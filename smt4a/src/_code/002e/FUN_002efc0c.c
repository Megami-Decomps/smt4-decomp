/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efc0c` (_code @ 0x2efc0c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0057f560; /* 0x57f560 */
extern unsigned char DAT_0057f561; /* 0x57f561 */
extern unsigned int DAT_0057f564; /* 0x57f564 */


void FUN_002efc0c(int param_1)

{
  if (param_1 != 0) {
    DAT_0057f560 = 0;
    DAT_0057f564 = 0;
    DAT_0057f561 = 1;
    return;
  }
  DAT_0057f560 = 0;
  DAT_0057f564 = 0;
  DAT_0057f561 = 0;
  return;
}
