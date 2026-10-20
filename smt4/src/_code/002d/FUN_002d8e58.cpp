/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8e58` (_code @ 0x2d8e58, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043dcf0; /* 0x43dcf0 */


unsigned int FUN_002d8e58(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043dcf0 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0043dcf0 + 0x1154);
  }
  return temp_v0;
}

} /* extern "C" */
