/* NON_MATCHING: romwright 0.5.0 decompilation of `textureCalcSrtMatrix` (_code @ 0x374050, 0x27c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ad314(float *, float [9]);
int mtx44Copy(float *, float *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_00476638; /* 0x476638 */
extern float DAT_004efd9c; /* 0x4efd9c */
extern float DAT_004efda0; /* 0x4efda0 */
extern float DAT_004efda4; /* 0x4efda4 */
extern float DAT_004efda8; /* 0x4efda8 */
extern float DAT_004efdac; /* 0x4efdac */
extern float DAT_004efdb0; /* 0x4efdb0 */
extern float DAT_004efdb4; /* 0x4efdb4 */
extern float DAT_004efdb8; /* 0x4efdb8 */
extern float DAT_004efdbc; /* 0x4efdbc */
extern float DAT_004efdc0; /* 0x4efdc0 */
extern float DAT_004efdc4; /* 0x4efdc4 */
extern float DAT_004efdc8; /* 0x4efdc8 */
extern float DAT_004efdcc; /* 0x4efdcc */
extern float DAT_004efdd0; /* 0x4efdd0 */
extern float DAT_004efdd4; /* 0x4efdd4 */
extern float DAT_004efdd8; /* 0x4efdd8 */

/* Supplied declaration required: FUN_002ad314. */
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
        if (((DAT_00476638 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_00476638), temp_v0 != 0)) {
          DAT_004efd9c = temp_v2;
          DAT_004efda0 = temp_v1;
          DAT_004efda4 = temp_v1;
          DAT_004efda8 = temp_v1;
          DAT_004efdac = temp_v1;
          DAT_004efdb0 = temp_v2;
          DAT_004efdb4 = temp_v1;
          DAT_004efdb8 = temp_v1;
          DAT_004efdbc = temp_v1;
          DAT_004efdc0 = temp_v1;
          DAT_004efdc4 = temp_v2;
          DAT_004efdc8 = temp_v1;
          DAT_004efdcc = temp_v1;
          DAT_004efdd0 = temp_v1;
          DAT_004efdd4 = temp_v1;
          DAT_004efdd8 = temp_v2;
        }
        mtx44Copy(param_1,&DAT_004efd9c);
      }
      else {
        FUN_002ad314(&temp_v4,temp_v5);
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
      FUN_002ad314(&temp_v4,temp_v5);
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
    FUN_002ad314(&temp_v4,temp_v5);
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
