/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_gxlow_CTR_ImportDisplayCaptureInfo` (_code @ 0x1b0234, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001a2a5c(void);
/* Supplied declaration required: nn_gxlow_CTR_Gpu_ImportDisplayCaptureInfo. */


void nn_gxlow_CTR_ImportDisplayCaptureInfo(int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_001a2a5c();
  nn_gxlow_CTR_Gpu_ImportDisplayCaptureInfo(temp_v0,param_1);
  temp_v1 = param_1[2];
  if ((temp_v1 & 0x70) == 0) {
    param_1[2] = -1;
  }
  else {
    temp_v2 = (temp_v1 & 0x20) == 0;
    if (temp_v2) {
      param_3 = *param_1;
    }
    if (temp_v2) {
      param_1[1] = param_3;
    }
    param_1[2] = temp_v1 & 7;
  }
  param_1[6] = param_1[6] & 7;
  if (*param_1 == 0) {
    param_1[2] = -1;
  }
  if (param_1[1] == 0) {
    param_1[2] = -1;
  }
  if (param_1[4] == 0) {
    param_1[6] = -1;
  }
  param_1[5] = param_1[4];
  return;
}
