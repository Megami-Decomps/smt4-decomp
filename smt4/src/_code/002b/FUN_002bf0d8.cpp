/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf0d8` (_code @ 0x2bf0d8, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0044e328; /* 0x44e328 */


unsigned int FUN_002bf0d8(void)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_0044e328;
  DAT_0044e328 = 0;
  return temp_v0;
}

} /* extern "C" */
