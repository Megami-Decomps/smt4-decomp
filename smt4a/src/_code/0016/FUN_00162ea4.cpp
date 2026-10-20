/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00162ea4` (_code @ 0x162ea4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern signed char DAT_0057f560; /* 0x57f560 */
extern int DAT_0057f564; /* 0x57f564 */


int FUN_00162ea4(void)

{
  int temp_v0;
  
  if (DAT_0057f564 < 0) {
    temp_v0 = (int)DAT_0057f560;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
