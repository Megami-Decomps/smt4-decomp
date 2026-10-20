/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00272e0c` (_code @ 0x272e0c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005f0ca8; /* 0x5f0ca8 */
extern unsigned int DAT_005f0ce4; /* 0x5f0ce4 */

extern int gameFlagIsSet(unsigned int);


void FUN_00272e0c(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = gameFlagIsSet(0x4d0);
  if (temp_v0 != 0) {
    DAT_005f0ce4 = 0;
    DAT_005f0ca8 = param_1;
  }
  return;
}

} /* extern "C" */
