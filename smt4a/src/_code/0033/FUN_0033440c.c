/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033440c` (_code @ 0x33440c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */


void FUN_0033440c(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_00588fd4;
  if (DAT_00588fd4 != 0) {
    *(unsigned int *)(DAT_00588fd4 + 0x20a8) = param_1;
    *(unsigned char *)(temp_v0 + 0x20ac) = 0;
  }
  return;
}
