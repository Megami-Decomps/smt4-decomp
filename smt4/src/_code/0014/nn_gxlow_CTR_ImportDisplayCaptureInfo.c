/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_gxlow_CTR_ImportDisplayCaptureInfo` (_code @ 0x14fd70, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002ad264(void);
extern unsigned int nn_gxlow_CTR_Gpu_ImportDisplayCaptureInfo(unsigned int, unsigned int);


void nn_gxlow_CTR_ImportDisplayCaptureInfo(int *param_1)

{
/* irregular: irregular input(s): in_r2 */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int in_r2;
  unsigned char temp_v2;
  
  temp_v0 = FUN_002ad264();
  nn_gxlow_CTR_Gpu_ImportDisplayCaptureInfo(temp_v0,(unsigned int)param_1);
  temp_v1 = param_1[2];
  if ((temp_v1 & 0x70) == 0) {
    param_1[2] = -1;
  }
  else {
    temp_v2 = (temp_v1 & 0x20) == 0;
    if (temp_v2) {
      in_r2 = *param_1;
    }
    if (temp_v2) {
      param_1[1] = in_r2;
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
