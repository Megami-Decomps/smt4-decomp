/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bac0` (_code @ 0x37bac0, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_0037bb14. */


unsigned int FUN_0037bac0(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (param_1[3] != 0) {
    if (*param_1 < param_1[3]) {
      return 1;
    }
    FUN_0037bb14();
    if (param_1 != (int *)0x0) {
      temp_v0 = UnsignedSaturate(param_1[0x14] + (unsigned int)*(unsigned char *)(param_1 + 0x26),7);
      UnsignedDoesSaturate(param_1[0x14] + (unsigned int)*(unsigned char *)(param_1 + 0x26),7);
      if (temp_v0 <= param_2) {
        return 1;
      }
    }
  }
  return 0;
}
