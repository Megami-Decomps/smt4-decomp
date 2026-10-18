/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037db9c` (_code @ 0x37db9c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f268; /* 0x57f268 */


unsigned int FUN_0037db9c(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f268 != 0) {
    if (*(short *)(DAT_0057f268 + 0xa04) < 1) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = 1;
    }
  }
  return temp_v0;
}
