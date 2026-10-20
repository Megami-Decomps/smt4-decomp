/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032169c` (_code @ 0x32169c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005710dc; /* 0x5710dc */


int FUN_0032169c(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_005710dc != 0) {
    temp_v0 = (int)*(char *)(DAT_005710dc + 0x2f4);
  }
  return temp_v0;
}

} /* extern "C" */
