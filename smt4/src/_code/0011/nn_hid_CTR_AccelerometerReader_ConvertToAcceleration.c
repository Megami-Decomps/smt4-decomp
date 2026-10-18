/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_hid_CTR_AccelerometerReader_ConvertToAcceleration` (_code @ 0x11c5a8, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void nn_hid_CTR_AccelerometerReader_ConvertToAcceleration
               (unsigned int param_1,float *param_2,int param_3,short *param_4)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  short *psVar4;
  unsigned int in_fpscr;
  float temp_v0;
  
  if (param_3 < 1) {
    return;
  }
  pfVar2 = param_2 + 1;
  pfVar3 = param_2 + 2;
  psVar1 = param_4 + 2;
  psVar4 = param_4 + 1;
  do {
    param_3 = param_3 - 1;
    temp_v0 = (float)VectorSignedToFloat((int)*param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    *param_2 = temp_v0 * 0.001953125f;
    param_2 = param_2 + 3;
    temp_v0 = (float)VectorSignedToFloat((int)*psVar4,(unsigned char)(in_fpscr >> 0x16) & 3);
    *pfVar2 = temp_v0 * 0.001953125f;
    pfVar2 = pfVar2 + 3;
    temp_v0 = (float)VectorSignedToFloat((int)*psVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *pfVar3 = temp_v0 * 0.001953125f;
    pfVar3 = pfVar3 + 3;
    psVar1 = psVar1 + 3;
    param_4 = param_4 + 3;
    psVar4 = psVar4 + 3;
  } while (param_3 != 0);
  return;
}
