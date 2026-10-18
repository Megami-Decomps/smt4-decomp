/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005051d8` (_code @ 0x5051d8, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0044b92c. */
extern unsigned int FUN_0044b9bc(int);
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateRotateFlags. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateTranslateFlags. */


unsigned int FUN_005051d8(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float temp_v3;
  
  temp_v2 = param_2 + 8;
  temp_v0 = FUN_0044b9bc(temp_v2);
  if ((~*(unsigned int *)(param_2 + 0x44) & 8) != 0) {
    temp_v1 = *(unsigned int *)(param_2 + 0x44) & 0xfffff9ff;
    *(unsigned int *)(param_2 + 0x44) = temp_v1;
    temp_v3 = *(float *)(param_2 + 0x38);
    if (((temp_v3 == *(float *)(param_2 + 0x3c)) && (temp_v3 == *(float *)(param_2 + 0x40))) &&
       (*(unsigned int *)(param_2 + 0x44) = temp_v1 | 0x400, *(float *)(param_2 + 0x38) == 1.0f)) {
      *(unsigned int *)(param_2 + 0x44) = temp_v1 | 0x600;
    }
  }
  nw_gfx_CalculatedTransform_UpdateRotateFlags();
  nw_gfx_CalculatedTransform_UpdateTranslateFlags(temp_v2);
  FUN_0044b92c(temp_v2);
  *(unsigned int *)(param_2 + 0x44) = *(unsigned int *)(param_2 + 0x44) | 0x801;
  return temp_v0;
}
