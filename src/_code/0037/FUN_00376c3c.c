/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376c3c` (_code @ 0x376c3c, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */


unsigned int FUN_00376c3c(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_1[9] != 0) {
    if (*param_1 < param_1[9]) {
      return 1;
    }
    temp_v0 = param_1[4];
    if (temp_v0 != 0xe4) {
      temp_v1 = *(int *)(temp_v0 - 0x94) + (unsigned int)*(unsigned char *)(temp_v0 - 0x4c);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      if (temp_v0 <= param_2) {
        return 1;
      }
    }
  }
  return 0;
}
