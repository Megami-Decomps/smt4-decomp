/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_AnimBlendOpTransform_PostBlend` (_code @ 0x3e3fec, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00236288. */
extern unsigned int FUN_0036a33c(int);
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateRotateFlags. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateTranslateFlags. */


unsigned int nw_gfx_AnimBlendOpTransform_PostBlend(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_2 + 8;
  temp_v0 = FUN_0036a33c(temp_v2);
  if ((~*(unsigned int *)(param_2 + 0x44) & 8) != 0) {
    temp_v1 = *(unsigned int *)(param_2 + 0x44) & 0xfffff9ff;
    *(unsigned int *)(param_2 + 0x44) = temp_v1;
    if (((*(float *)(param_2 + 0x38) == *(float *)(param_2 + 0x3c)) &&
        (*(float *)(param_2 + 0x38) == *(float *)(param_2 + 0x40))) &&
       (*(unsigned int *)(param_2 + 0x44) = temp_v1 | 0x400, *(int *)(param_2 + 0x38) == 0x3f800000)) {
      *(unsigned int *)(param_2 + 0x44) = temp_v1 | 0x600;
    }
  }
  nw_gfx_CalculatedTransform_UpdateRotateFlags();
  nw_gfx_CalculatedTransform_UpdateTranslateFlags(temp_v2);
  FUN_00236288(temp_v2);
  *(unsigned int *)(param_2 + 0x44) = *(unsigned int *)(param_2 + 0x44) | 0x801;
  return temp_v0;
}
