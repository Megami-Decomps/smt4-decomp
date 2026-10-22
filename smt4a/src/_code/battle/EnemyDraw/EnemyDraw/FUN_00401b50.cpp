/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00401b50` (_code @ 0x401b50, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);

typedef struct fn_00401b50_arg0 fn_00401b50_arg0;
struct fn_00401b50_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x10];
    float field_0x1c; /* +0x1c */
    float field_0x20; /* +0x20 */
    short field_0x24; /* +0x24 */
    short field_0x26; /* +0x26 */
    byte field_0x28; /* +0x28 */
    byte field_0x29; /* +0x29 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern float g_spriteDrawYOffset; /* 0x570d5c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */


void FUN_00401b50(fn_00401b50_arg0 *param_1,float *param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v5;
  int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  
  temp_v1 = *(int *)((int)param_1->field_0x4 + 0x10);
  temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x26);
  temp_v5 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 0x16),(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_1->field_0x28 != 0) {
    temp_v2 = *(int *)((int)param_1->field_0x8 + 0xc);
    temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 0x22),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = *(int *)(temp_v2 + 0x18);
    temp_v12 = (float)VectorSignedToFloat((int)param_1->field_0x26,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorSignedToFloat(temp_v3 - temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = temp_v11 + temp_v12 + temp_v10 * 0.5f + temp_v9;
  }
  else {
    temp_v9 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 0x22) + temp_v3,
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorUnsignedToFloat
                             ((unsigned int)*(unsigned short *)(temp_v1 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = temp_v9 + romwright_fabs_4(param_1->field_0x20) * 2.0f;
    temp_v7 = temp_v7 + romwright_fabs_4(param_1->field_0x1c) * 2.0f;
  }
  temp_v2 = 0;
  temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 < temp_v9) << 0x1f) |
          ((unsigned int)(temp_v7 == temp_v9) << 0x1e);
  temp_v0 = (unsigned char)(temp_v3 >> 0x18);
  if (!(unsigned char)((temp_v0 >> 6) & 1) && (unsigned char)(temp_v0 >> 7) == ((temp_v7 != temp_v7) || (temp_v9 != temp_v9))) {
    temp_v2 = (int)((temp_v7 - temp_v9) * 0.5f);
  }
  temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v3 >> 0x16) & 3);
  temp_v5 = ((((temp_v5 + 143.0f) - temp_v8) - temp_v10) - temp_v7) + 0.0f;
  param_2[1] = temp_v5;
  temp_v0 = param_1->field_0x28;
  temp_v4 = temp_v0 == 0;
  if (temp_v4) {
    temp_v0 = param_1->field_0x29;
  }
  if (temp_v4 && temp_v0 == 0) {
    temp_v5 = temp_v5 + param_1->field_0x20 * 2.0f;
    param_2[1] = temp_v5;
  }
  temp_v5 = temp_v5 * in_s0 + g_spriteDrawYOffset;
  *param_2 = 0.0f;
  param_2[1] = temp_v5;
  temp_v0 = param_1->field_0x28;
  temp_v5 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 0x12) -
                                     ((int)*(short *)(temp_v1 + 0x20) +
                                     (unsigned int)(*(unsigned short *)(temp_v1 + 0x24) >> 1)),
                                     (unsigned char)(temp_v3 >> 0x16) & 3);
  temp_v5 = 0.0f - temp_v5;
  *param_2 = temp_v5;
  if (temp_v0 != 0) {
    temp_v8 = (float)VectorSignedToFloat((int)param_1->field_0x24,(unsigned char)(temp_v3 >> 0x16) & 3);
    temp_v5 = temp_v5 + temp_v8;
    *param_2 = temp_v5;
  }
  else {
    temp_v5 = temp_v5 + param_1->field_0x1c;
    *param_2 = temp_v5;
  }
  param_2[2] = 0.0f;
  *param_2 = temp_v5 * in_s0;
  return;
}

} /* extern "C" */
