/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1cc8` (_code @ 0x2d1cc8, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00447060; /* 0x447060 */


int FUN_002d1cc8(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00447060 != 0) {
    temp_v0 = (int)*(char *)(DAT_00447060 + 0xb);
  }
  return temp_v0;
}

} /* extern "C" */
