/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00502374` (_code @ 0x502374, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00647634; /* 0x647634 */

extern unsigned int FUN_0043b338(unsigned int, int, int, int);


unsigned int FUN_00502374(int param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  
  if (param_2 == 0 || param_3 == 0) {
    temp_v0 = 0xd8e0a002;
  }
  else if (*(int *)(param_1 + 4) < 1) {
    temp_v0 = 0xd8a0a064;
  }
  else {
    if (DAT_00647634 != '\0') {
      temp_v0 = FUN_0043b338(0x64765c,*(int *)(param_1 + 4),param_2,param_3);
      return temp_v0;
    }
    temp_v0 = 0xd8a0a3f8;
  }
  return temp_v0;
}
