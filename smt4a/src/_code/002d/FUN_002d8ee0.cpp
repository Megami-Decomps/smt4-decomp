/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8ee0` (_code @ 0x2d8ee0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00581274; /* 0x581274 */


int FUN_002d8ee0(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00581274 != 0) {
    temp_v0 = (int)*(char *)(DAT_00581274 + 0x40);
  }
  return temp_v0;
}

} /* extern "C" */
