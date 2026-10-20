/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00344c9c` (_code @ 0x344c9c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern short *FUN_002613f0(int);


int FUN_00344c9c(void)

{
  short *psVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = 0;
  do {
    psVar1 = (short *)FUN_002613f0(temp_v0);
    temp_v0 = temp_v0 + 1;
    if (*psVar1 != 0) {
      temp_v1 = temp_v1 + 1;
    }
  } while (temp_v0 < 0x18);
  return temp_v1;
}

} /* extern "C" */
