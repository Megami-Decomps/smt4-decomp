/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003409f8` (_code @ 0x3409f8, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);

typedef struct fn_003409f8_arg0 fn_003409f8_arg0;
struct fn_003409f8_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    byte field_0x1c; /* +0x1c */
};

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_003409f8(fn_003409f8_arg0 *param_1,float *param_2,float *param_3)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v3 = 0.0f;
  if (param_1->field_0x1c != 0) {
    *param_2 = 1.0f;
    param_2[1] = 1.0f;
    *param_3 = 0.0f;
  }
  else {
    temp_v1 = *(int *)((int)param_1->field_0x8 + 0xc);
    temp_v0 = *(int *)((int)param_1->field_0x4 + 0x10);
    temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (float)VectorUnsignedToFloat
                             ((unsigned int)*(unsigned short *)(temp_v0 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorUnsignedToFloat
                             ((unsigned int)*(unsigned short *)(temp_v0 + 0x26),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = temp_v2 + romwright_fabs_4(param_1->field_0x10) * 2.0f;
    temp_v4 = temp_v4 + romwright_fabs_4(param_1->field_0x14) * 2.0f;
    if (temp_v2 <= temp_v4) {
      temp_v2 = temp_v4;
    }
    *param_2 = temp_v2 / temp_v5;
    param_2[1] = temp_v2 / temp_v3;
    *param_3 = 0.0f;
    param_3[1] = 0.0f;
    if (param_1->field_0x10 != 0.0f) {
      *param_3 = param_1->field_0x10 / temp_v5;
    }
    if (param_1->field_0x14 == 0.0f) {
      return;
    }
    temp_v3 = param_1->field_0x14 / temp_v3;
  }
  param_3[1] = temp_v3;
  return;
}

} /* extern "C" */
