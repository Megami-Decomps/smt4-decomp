/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029d65c` (_code @ 0x29d65c, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043dcb4; /* 0x43dcb4 */


unsigned char FUN_0029d65c(int param_1)

{
  unsigned char temp_v0;
  
  if (*(short *)(DAT_0043dcb4 + 0x64e) == param_1) {
    temp_v0 = *(unsigned char *)(DAT_0043dcb4 + 8);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
