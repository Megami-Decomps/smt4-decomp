/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a784` (_code @ 0x23a784, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */


unsigned long long FUN_0023a784(unsigned int param_1)

{
  if ((-1 < (int)param_1) && (param_1 < DAT_0044d10c)) {
    return *(unsigned long long *)(DAT_0044d100 + param_1 * 0x70 + 0x60);
  }
  return 0;
}
