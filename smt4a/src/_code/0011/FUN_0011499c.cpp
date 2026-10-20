/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011499c` (_code @ 0x11499c, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00594b28; /* 0x594b28 */


unsigned int FUN_0011499c(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00594b28 != 0) {
    temp_v0 = *(unsigned int *)(DAT_00594b28 + 8);
  }
  return temp_v0;
}

} /* extern "C" */
