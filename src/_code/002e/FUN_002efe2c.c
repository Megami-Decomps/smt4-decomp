/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efe2c` (_code @ 0x2efe2c, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


int FUN_002efe2c(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044e190 != 0) {
    temp_v0 = (int)*(char *)(DAT_0044e190 + 0x2388);
  }
  return temp_v0;
}
