/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004671a4` (_code @ 0x4671a4, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00467840(void);
int VectorFloatToUnsigned(double, int);
int mathlib_ceilf(void);

typedef int romwright_code(...);
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00467840. */
/* Supplied declaration required: mathlib_ceilf. */


unsigned int FUN_004671a4(float *param_1)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  float temp_v0;
  int temp_v1;
  float in_s0;
  unsigned int temp_v2;
  
  FUN_00467840();
  temp_v0 = param_1[3];
  if (((unsigned int)temp_v0 & 1) != 0) {
    temp_v2 = ((unsigned int)temp_v0 & 2) >> 1;
  }
  else {
    if (((unsigned int)temp_v0 & 4) == 0) {
      temp_v1 = (**(romwright_code **)((((unsigned int)temp_v0 & 0x38) >> 3) * 4 + 0x5c1cac))(param_1 + 4);
      return (unsigned int)(temp_v1 != 0);
    }
    temp_v0 = in_s0 - *param_1;
    if (param_1[1] == in_s0) {
      mathlib_ceilf();
    }
    temp_v2 = VectorFloatToUnsigned(temp_v0,3);
    temp_v2 = *(unsigned char *)((int)param_1 + (temp_v2 >> 3) + 0x10) >> (temp_v2 & 7) & 1;
  }
  return temp_v2;
}

} /* extern "C" */
