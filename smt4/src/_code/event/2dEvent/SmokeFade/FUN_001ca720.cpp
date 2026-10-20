/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ca720` (_code @ 0x1ca720, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043df28; /* 0x43df28 */


unsigned int FUN_001ca720(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_0043df28 != 0) && (*(int *)(DAT_0043df28 + 0xc) == 3)) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
