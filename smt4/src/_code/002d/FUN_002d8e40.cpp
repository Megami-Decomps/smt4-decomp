/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8e40` (_code @ 0x2d8e40, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043dcf0; /* 0x43dcf0 */


unsigned char FUN_002d8e40(void)

{
  unsigned char temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043dcf0 != 0) {
    temp_v0 = *(unsigned char *)(DAT_0043dcf0 + 0x66c);
  }
  return temp_v0;
}

} /* extern "C" */
