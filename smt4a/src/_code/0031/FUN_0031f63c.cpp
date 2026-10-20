/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f63c` (_code @ 0x31f63c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned int FUN_0031f63c(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_00588fe8 != 0) && (*(int *)(DAT_00588fe8 + 0x518) == 0x17)) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
