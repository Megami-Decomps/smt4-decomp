/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033413c` (_code @ 0x33413c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


int FUN_0033413c(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) != 0) {
    temp_v0 = (int)*(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x137c);
  }
  return temp_v0;
}

} /* extern "C" */
