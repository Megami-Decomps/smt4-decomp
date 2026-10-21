/* NON_MATCHING: romwright 0.5.0 decompilation of `textureCalcSrtMatrix` (_code @ 0x457160, 0x27c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a924(float *, float [9]);
int mtx44Copy(float *, float *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_005c4c30; /* 0x5c4c30 */
extern float DAT_0064c084; /* 0x64c084 */
extern float DAT_0064c088; /* 0x64c088 */
extern float DAT_0064c08c; /* 0x64c08c */
extern float DAT_0064c090; /* 0x64c090 */
extern float DAT_0064c094; /* 0x64c094 */
extern float DAT_0064c098; /* 0x64c098 */
extern float DAT_0064c09c; /* 0x64c09c */
extern float DAT_0064c0a0; /* 0x64c0a0 */
extern float DAT_0064c0a4; /* 0x64c0a4 */
extern float DAT_0064c0a8; /* 0x64c0a8 */
extern float DAT_0064c0ac; /* 0x64c0ac */
extern float DAT_0064c0b0; /* 0x64c0b0 */
extern float DAT_0064c0b4; /* 0x64c0b4 */
extern float DAT_0064c0b8; /* 0x64c0b8 */
extern float DAT_0064c0bc; /* 0x64c0bc */
extern float DAT_0064c0c0; /* 0x64c0c0 */

/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: mtx44Copy. */
extern int __cxa_guard_acquire(unsigned int *);


float * textureCalcSrtMatrix(float *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s3, in_s4; 2 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float in_s1;
  float in_s3;
  float in_s4;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5 [9];
  
  temp_v3 = 0.5f;
  temp_v1 = 0.0f;
  temp_v2 = 1.0f;
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        if (((DAT_005c4c30 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c4c30), temp_v0 != 0)) {
          DAT_0064c084 = temp_v2;
          DAT_0064c088 = temp_v1;
          DAT_0064c08c = temp_v1;
          DAT_0064c090 = temp_v1;
          DAT_0064c094 = temp_v1;
          DAT_0064c098 = temp_v2;
          DAT_0064c09c = temp_v1;
          DAT_0064c0a0 = temp_v1;
          DAT_0064c0a4 = temp_v1;
          DAT_0064c0a8 = temp_v1;
          DAT_0064c0ac = temp_v2;
          DAT_0064c0b0 = temp_v1;
          DAT_0064c0b4 = temp_v1;
          DAT_0064c0b8 = temp_v1;
          DAT_0064c0bc = temp_v1;
          DAT_0064c0c0 = temp_v2;
        }
        mtx44Copy(param_1,&DAT_0064c084);
      }
      else {
        FUN_0018a924(&temp_v4,temp_v5);
        param_1[0xe] = temp_v1;
        param_1[0xf] = temp_v2;
        param_1[0xd] = temp_v1;
        param_1[0xc] = temp_v1;
        param_1[0xb] = temp_v1;
        param_1[9] = temp_v1;
        param_1[8] = temp_v1;
        param_1[6] = temp_v1;
        param_1[2] = temp_v1;
        param_1[10] = temp_v2;
        param_1[1] = -(in_s0 * temp_v4);
        *param_1 = in_s0 * temp_v5[0];
        param_1[4] = in_s1 * temp_v4;
        param_1[5] = in_s1 * temp_v5[0];
        param_1[3] = (in_s0 * temp_v5[0] * (-in_s3 - temp_v3) - in_s0 * temp_v4 * (in_s4 - temp_v3)) +
                     temp_v3;
        param_1[7] = in_s1 * temp_v4 * (-in_s3 - temp_v3) + in_s1 * temp_v5[0] * (in_s4 - temp_v3) +
                     temp_v3;
      }
    }
    else {
      FUN_0018a924(&temp_v4,temp_v5);
      *param_1 = in_s0 * temp_v5[0];
      param_1[5] = in_s1 * temp_v5[0];
      param_1[0xe] = temp_v1;
      param_1[0xf] = temp_v2;
      param_1[0xd] = temp_v1;
      param_1[0xc] = temp_v1;
      param_1[0xb] = temp_v1;
      param_1[9] = temp_v1;
      param_1[8] = temp_v1;
      param_1[6] = temp_v1;
      param_1[2] = temp_v1;
      param_1[10] = temp_v2;
      param_1[1] = in_s0 * temp_v4;
      param_1[4] = -(in_s1 * temp_v4);
      param_1[3] = (-(temp_v5[0] * in_s3) - temp_v4 * in_s4) * in_s0;
      param_1[7] = (temp_v4 * in_s3 - temp_v5[0] * in_s4) * in_s1;
    }
  }
  else {
    FUN_0018a924(&temp_v4,temp_v5);
    *param_1 = in_s0 * temp_v5[0];
    param_1[5] = in_s1 * temp_v5[0];
    param_1[0xe] = temp_v1;
    param_1[0xf] = temp_v2;
    param_1[0xd] = temp_v1;
    param_1[0xc] = temp_v1;
    param_1[0xb] = temp_v1;
    param_1[9] = temp_v1;
    param_1[8] = temp_v1;
    param_1[6] = temp_v1;
    param_1[2] = temp_v1;
    param_1[10] = temp_v2;
    param_1[1] = -(in_s0 * temp_v4);
    param_1[4] = in_s1 * temp_v4;
    param_1[3] = (((temp_v4 * temp_v3 - temp_v5[0] * temp_v3) + temp_v3) - in_s3) * in_s0;
    param_1[7] = (((temp_v4 * -0.5f - temp_v5[0] * temp_v3) + temp_v3) - in_s4) * in_s1;
  }
  return param_1;
}

} /* extern "C" */
