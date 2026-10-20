/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d0044` (_code @ 0x2d0044, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005f0c84; /* 0x5f0c84 */

extern int FUN_0018719c(unsigned int);


unsigned int FUN_002d0044(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0018719c(0x4d0);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v1 = 1, DAT_005f0c84 != 1)) {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
