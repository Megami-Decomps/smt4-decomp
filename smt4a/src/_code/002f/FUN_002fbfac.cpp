/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbfac` (_code @ 0x2fbfac, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00647630; /* 0x647630 */

extern unsigned int FUN_0043b21c(unsigned int);


unsigned int FUN_002fbfac(int param_1)

{
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 4) < 1) {
    temp_v0 = 0xd8a0a064;
  }
  else {
    if ((*(signed char *)((unsigned char *)&DAT_00647630 + 0x4)) != '\0') {
      temp_v0 = FUN_0043b21c(0x64765c);
      return temp_v0;
    }
    temp_v0 = 0xd8a0a3f8;
  }
  return temp_v0;
}

} /* extern "C" */
