/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ab790` (_code @ 0x2ab790, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f290; /* 0x57f290 */


unsigned int FUN_002ab790(void)

{
  unsigned int temp_v0;
  
  if (DAT_0057f290 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0057f290 + 0x434);
  }
  else {
    temp_v0 = 0xffffffff;
  }
  return temp_v0;
}

} /* extern "C" */
