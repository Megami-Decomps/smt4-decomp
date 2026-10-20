/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d0018` (_code @ 0x2d0018, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005f0ca8; /* 0x5f0ca8 */

extern int FUN_0018719c(void);


unsigned int FUN_002d0018(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0018719c();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if (DAT_005f0ca8 == 9) {
      temp_v1 = 1;
    }
    else {
      temp_v1 = 0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
