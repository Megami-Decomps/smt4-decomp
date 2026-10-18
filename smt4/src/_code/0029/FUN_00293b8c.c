/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293b8c` (_code @ 0x293b8c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


int FUN_00293b8c(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044e190 != 0) {
    temp_v0 = (int)*(char *)(DAT_0044e190 + 0x481);
  }
  return temp_v0;
}
