/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028cad4` (_code @ 0x28cad4, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned char FUN_0028cad4(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044e190 != 0) {
    temp_v0 = *(int *)(DAT_0044e190 + 0x400);
  }
  return DAT_0044e190 == 0 || temp_v0 == 0;
}

} /* extern "C" */
