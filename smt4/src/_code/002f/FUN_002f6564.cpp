/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6564` (_code @ 0x2f6564, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned int FUN_002f6564(void)

{
  unsigned int temp_v0;
  
  if ((DAT_0044e190 == 0) || (*(int *)(DAT_0044e190 + 0x400) != 7)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
