/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184ed0` (_code @ 0x184ed0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f260; /* 0x57f260 */


int FUN_00184ed0(void)

{
  int temp_v0;
  
  if (DAT_0057f260 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(int *)(DAT_0057f260 + 0x32c);
    if (temp_v0 != *(int *)(DAT_0057f260 + 0x328)) {
      temp_v0 = *(int *)(DAT_0057f260 + 0x2f4);
    }
  }
  return temp_v0;
}

} /* extern "C" */
