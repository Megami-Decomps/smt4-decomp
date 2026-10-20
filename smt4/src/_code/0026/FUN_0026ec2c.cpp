/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ec2c` (_code @ 0x26ec2c, 0x164 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;


unsigned int FUN_0026ec2c(float *param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  float in_s0;
  float in_s1;
  float temp_v3;
  float in_s2;
  float temp_v4;
  float temp_v5;
  float in_s3;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v8 = 120.0f;
  temp_v9 = 0.0f;
  temp_v2 = 0;
  temp_v3 = in_s2;
  temp_v4 = in_s2;
  temp_v6 = temp_v9;
  temp_v7 = in_s1;
  if ((param_2 != 0) && (temp_v3 = temp_v9, temp_v4 = in_s1, temp_v6 = in_s0, temp_v7 = in_s0, param_2 == 1))
  {
    temp_v8 = 50.0f;
    in_s1 = temp_v9;
    temp_v3 = in_s2;
    temp_v4 = in_s2;
  }
  temp_v0 = 0;
  temp_v9 = in_s3;
  if (0 < param_3) {
    do {
      temp_v1 = param_4 + temp_v0 * 0xc;
      temp_v5 = (temp_v6 * *(float *)(temp_v1 + 0x1c) + in_s1 * *(float *)(temp_v1 + 0x20) +
              temp_v3 * *(float *)(temp_v1 + 0x24)) - *(float *)(param_4 + temp_v0 * 4 + 0x4c);
      if ((temp_v5 + in_s3 < 0.0f) ||
         ((param_3 == 3 &&
          ((((temp_v7 < *(float *)(param_4 + 0x98) - in_s3 ||
             (temp_v4 < *(float *)(param_4 + 0x9c) - in_s3)) ||
            (*(float *)(param_4 + 0xa0) + in_s3 < temp_v7)) ||
           (*(float *)(param_4 + 0xa4) + in_s3 < temp_v4)))))) {
        *param_1 = -1.0f;
        return 0xffffffff;
      }
      if (temp_v5 < 0.0f) {
        if (param_2 == 1) {
          temp_v5 = temp_v5 + temp_v8 * 0.5f;
        }
        temp_v2 = 1;
        temp_v9 = temp_v5;
        if (param_2 != 1) {
          temp_v9 = in_s3 + temp_v5;
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < param_3);
  }
  if ((int)temp_v9 < 0x3a83126f) {
    temp_v9 = -1.0f;
  }
  *param_1 = temp_v9;
  return temp_v2;
}

} /* extern "C" */
