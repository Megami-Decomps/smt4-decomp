/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031b934` (_code @ 0x31b934, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005702f8; /* 0x5702f8 */

extern int FUN_002a398c(void);


unsigned int FUN_0031b934(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_005702f8 - param_1) - 1 < 0) || (temp_v0 = FUN_002a398c(), *(int *)(temp_v0 + 0xd8) < 1)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
