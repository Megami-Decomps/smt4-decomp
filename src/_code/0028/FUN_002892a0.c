/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002892a0` (_code @ 0x2892a0, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044db8c; /* 0x44db8c */


int FUN_002892a0(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044db8c != 0) {
    temp_v0 = *(int *)(DAT_0044db8c + 0x1c);
  }
  if (DAT_0044db8c == 0 || temp_v0 == 0) {
    temp_v0 = 0;
  }
  return temp_v0;
}
