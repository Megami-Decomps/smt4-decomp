/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a77ac` (_code @ 0x3a77ac, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f268; /* 0x57f268 */


unsigned int FUN_003a77ac(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f268 != 0) {
    if (*(int *)(DAT_0057f268 + 0x1c) == 0x19) {
      temp_v0 = 1;
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
