/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024bb4c` (_code @ 0x24bb4c, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0024bb4c(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s9; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float in_s0;
  float in_s1;
  float temp_v2;
  float in_s2;
  float temp_v3;
  float in_s3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float in_s9;
  
  temp_v6 = 0.0f;
  temp_v2 = in_s1;
  temp_v3 = in_s2;
  temp_v4 = temp_v6;
  temp_v5 = in_s1;
  if ((param_1 != 0) && (temp_v2 = temp_v6, temp_v4 = in_s0, temp_v5 = in_s0, param_1 != 1)) {
    in_s2 = in_s1;
    temp_v2 = in_s1;
    temp_v3 = temp_v6;
  }
  if (0 < param_2) {
    in_s9 = temp_v5;
  }
  temp_v0 = 0;
  if (temp_v0 < param_2) {
    do {
      temp_v1 = param_3 + temp_v0 * 0xc;
      if ((((temp_v4 * *(float *)(temp_v1 + 0x1c) + temp_v2 * *(float *)(temp_v1 + 0x20) +
            temp_v3 * *(float *)(temp_v1 + 0x24)) - *(float *)(param_3 + temp_v0 * 4 + 0x4c)) + in_s3 <
           0.0f) || ((param_2 == 3 &&
                    ((((in_s9 < *(float *)(param_3 + 0x98) - in_s3 ||
                       (in_s2 < *(float *)(param_3 + 0x9c) - in_s3)) ||
                      (*(float *)(param_3 + 0xa0) + in_s3 < in_s9)) ||
                     (*(float *)(param_3 + 0xa4) + in_s3 < in_s2)))))) {
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < param_2);
  }
  return;
}
