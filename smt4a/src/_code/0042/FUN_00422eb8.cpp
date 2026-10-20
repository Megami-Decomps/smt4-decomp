/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00422eb8` (_code @ 0x422eb8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */


unsigned long long FUN_00422eb8(unsigned int param_1)

{
  if ((-1 < (int)param_1) && (param_1 < DAT_005880e4)) {
    return *(unsigned long long *)(DAT_005880d8 + param_1 * 0x70 + 0x58);
  }
  return 0;
}

} /* extern "C" */
