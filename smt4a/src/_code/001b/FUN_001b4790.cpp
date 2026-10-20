/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4790` (_code @ 0x1b4790, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b3780(void);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001b3780. */


void FUN_001b4790(float *param_1,float *param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  float *pfVar1;
  float *pfVar2;
  float temp_v0;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v1;
  float temp_v2;
  
  FUN_001b3780();
  in_s0 = in_s0 - *param_1;
  temp_v1 = VectorFloatToUnsigned(in_s0,3);
  temp_v2 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = in_s0 - temp_v2;
  if (temp_v2 == 0.0f) {
    pfVar1 = (float *)((int)param_1[3] + temp_v1 * 0xc);
    temp_v2 = *pfVar1;
    temp_v0 = pfVar1[1];
    param_2[2] = pfVar1[2];
    *param_2 = temp_v2;
    param_2[1] = temp_v0;
    return;
  }
  temp_v0 = param_1[3];
  if (param_1[1] == in_s0) {
    pfVar1 = (float *)(temp_v1 * 0xc + 0xc + (int)temp_v0);
    temp_v2 = *pfVar1;
    temp_v0 = pfVar1[1];
    param_2[2] = pfVar1[2];
    *param_2 = temp_v2;
    param_2[1] = temp_v0;
    return;
  }
  pfVar1 = (float *)((int)temp_v0 + temp_v1 * 0xc);
  pfVar2 = (float *)(temp_v1 * 0xc + 0xc + (int)temp_v0);
  *param_2 = *pfVar1 + temp_v2 * (*pfVar2 - *pfVar1);
  param_2[1] = pfVar1[1] + temp_v2 * (pfVar2[1] - pfVar1[1]);
  param_2[2] = pfVar1[2] + temp_v2 * (pfVar2[2] - pfVar1[2]);
  return;
}

} /* extern "C" */
