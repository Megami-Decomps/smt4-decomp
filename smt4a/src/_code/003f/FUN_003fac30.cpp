/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fac30` (_code @ 0x3fac30, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd140(int, unsigned int, float *, unsigned int, unsigned int, int, unsigned int);
int VectorSignedToFloat(int, int);

extern float DAT_00570d5c; /* 0x570d5c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_003fd140. */


void FUN_003fac30(int param_1,unsigned int param_2,float *param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: irregular input(s): in_fpscr, in_s1; 4 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  float in_s1;
  float temp_v1;
  float temp_v2;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  fStack_14 = param_3[2];
  temp_v0 = *(int *)(param_1 + 0x10);
  temp_v1 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v0 + 0x12),(unsigned char)(in_fpscr >> 0x16) & 3);
  fStack_1c = *param_3 + temp_v1 * in_s1;
  temp_v2 = (float)VectorSignedToFloat((int)*(short *)(temp_v0 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (float)VectorSignedToFloat((int)*(short *)(temp_v0 + 0x16),(unsigned char)(in_fpscr >> 0x16) & 3);
  fStack_18 = (param_3[1] - ((-143.0f - temp_v2) + temp_v1) * in_s1) + DAT_00570d5c;
  FUN_003fd140(param_1,param_2,&fStack_1c,param_4,param_5,1,param_6);
  return;
}

} /* extern "C" */
