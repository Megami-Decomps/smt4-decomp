/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_anim_res_ResAnim_IsFullBakedAnim` (_code @ 0x155948, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int nw_anim_res_ResAnim_IsFullBakedAnim(int *param_1)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*(int *)(*param_1 + 0x18) != 0) {
    piVar1 = (int *)(*param_1 + 0x1c);
    temp_v1 = *piVar1;
    if (temp_v1 == 0) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = (int)piVar1 + temp_v1;
    }
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v1 + 0x28);
      if (temp_v2 != 0) {
        temp_v0 = temp_v2 + temp_v1 + 0x28;
      }
    }
    if (*(int *)(temp_v0 + 8) == 9) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
