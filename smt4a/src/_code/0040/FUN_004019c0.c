/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004019c0` (_code @ 0x4019c0, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004019c0_arg0 fn_004019c0_arg0;
struct fn_004019c0_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x10];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x7];
    byte field_0x28; /* +0x28 */
};

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */


void FUN_004019c0(fn_004019c0_arg0 *param_1,float *param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  float temp_v5;
  
  temp_v3 = *(int *)((int)param_1->field_0x4 + 0x10);
  if (param_1->field_0x28 != 0) {
    temp_v2 = *(int *)((int)param_1->field_0x8 + 0xc);
    temp_v4 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  else {
    temp_v4 = (float)VectorUnsignedToFloat
                             ((unsigned int)*(unsigned short *)(temp_v3 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (float)VectorUnsignedToFloat
                             ((unsigned int)*(unsigned short *)(temp_v3 + 0x26),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = temp_v4 + romwright_fabs_4(*(float *)&param_1->field_0x1c) * 2.0f;
    temp_v5 = temp_v5 + romwright_fabs_4(*(float *)&param_1->field_0x20) * 2.0f;
  }
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v4 < temp_v5) << 0x1f) |
          ((unsigned int)(temp_v4 == temp_v5) << 0x1e);
  temp_v1 = (unsigned char)(temp_v0 >> 0x18);
  if (!((unsigned char)((temp_v1 >> 6) & 1) || (unsigned char)(temp_v1 >> 7) != ((temp_v4 != temp_v4) || (temp_v5 != temp_v5)))) {
    param_2[1] = temp_v4;
    *param_2 = temp_v4;
    temp_v5 = temp_v4;
  }
  else {
    param_2[1] = temp_v5;
    *param_2 = temp_v5;
  }
  *param_2 = temp_v5 * in_s0;
  param_2[1] = temp_v5 * in_s0;
  temp_v5 = (float)VectorUnsignedToFloat((unsigned int)*(unsigned short *)(temp_v3 + 0x24),(unsigned char)(temp_v0 >> 0x16) & 3);
  param_2[2] = temp_v5 * in_s0 * 0.5f;
  return;
}
