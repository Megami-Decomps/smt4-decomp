/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00414e28` (_code @ 0x414e28, 0x368 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d3de0(float *, float *, float *);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int aeabi_idivmod(undefined4);

typedef struct fn_00414e28_arg0 fn_00414e28_arg0;
struct fn_00414e28_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    undefined4 *field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    float field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
    float field_0x2c; /* +0x2c */
    float field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    float field_0x38; /* +0x38 */
    float field_0x3c; /* +0x3c */
    float field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    float field_0x58; /* +0x58 */
    float field_0x5c; /* +0x5c */
    void *field_0x60; /* +0x60 */
};

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001d3de0. */
/* Supplied declaration required: aeabi_idivmod. */


/* WARNING: Removing unreachable block (ram,0x004150b0) */
/* WARNING: Removing unreachable block (ram,0x004150b8) */

void FUN_00414e28(fn_00414e28_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  void *pvVar3;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned int uStack_28;
  
  (**(romwright_code **)(*param_1->field_0x14 + 8))();
  temp_v14 = 360.0f;
  temp_v13 = 0.0f;
  *(float *)((int)param_1->field_0x4 + 0xc) =
       *(float *)((int)param_1->field_0x4 + 0xc) + *(float *)((int)param_1->field_0x60 + 0x20);
  *(float *)((int)param_1->field_0x4 + 0x10) =
       *(float *)((int)param_1->field_0x4 + 0x10) + *(float *)((int)param_1->field_0x60 + 0x24);
  *(float *)((int)param_1->field_0x4 + 0x20) =
       *(float *)((int)param_1->field_0x4 + 0x20) + *(float *)((int)param_1->field_0x60 + 0x20);
  *(float *)((int)param_1->field_0x4 + 0x24) =
       *(float *)((int)param_1->field_0x4 + 0x24) + *(float *)((int)param_1->field_0x60 + 0x24);
  *(float *)((int)param_1->field_0x4 + 0x34) =
       *(float *)((int)param_1->field_0x4 + 0x34) + *(float *)((int)param_1->field_0x60 + 0x20);
  *(float *)((int)param_1->field_0x4 + 0x38) =
       *(float *)((int)param_1->field_0x4 + 0x38) + *(float *)((int)param_1->field_0x60 + 0x24);
  *(float *)((int)param_1->field_0x4 + 0x48) =
       *(float *)((int)param_1->field_0x4 + 0x48) + *(float *)((int)param_1->field_0x60 + 0x20);
  *(float *)((int)param_1->field_0x4 + 0x4c) =
       *(float *)((int)param_1->field_0x4 + 0x4c) + *(float *)((int)param_1->field_0x60 + 0x24);
  pvVar3 = param_1->field_0x60;
  if (*(int *)((int)pvVar3 + 0x30) != 0) {
    aeabi_idivmod(param_1->field_0x14[1]);
    if (temp_v2 == 0) {
      temp_v5 = param_1->field_0x58 + *(float *)((int)pvVar3 + 0x28);
      param_1->field_0x58 = temp_v5;
      if (0x43b3ffff >= (int)temp_v5) {
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 <= temp_v5) << 0x1d);
        temp_v1 = (unsigned char)(in_fpscr >> 0x18);
        if (!(unsigned char)(temp_v1 >> 5)) {
          temp_v5 = temp_v5 + temp_v14;
          param_1->field_0x58 = temp_v5;
        }
      }
      else {
        temp_v5 = temp_v5 - temp_v14;
        param_1->field_0x58 = temp_v5;
      }
    }
  }
  else {
    temp_v5 = param_1->field_0x58 + *(float *)((int)pvVar3 + 0x28);
    param_1->field_0x58 = temp_v5;
    if ((int)temp_v5 >= 0x43b40000) {
      temp_v5 = temp_v5 - temp_v14;
      param_1->field_0x58 = temp_v5;
    }
    else {
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v5) << 0x1d);
      temp_v1 = (unsigned char)(in_fpscr >> 0x18);
      if (!(unsigned char)(temp_v1 >> 5)) {
        temp_v5 = temp_v5 + temp_v14;
        param_1->field_0x58 = temp_v5;
      }
    }
  }
  temp_v14 = param_1->field_0x58 * 0.7111111f;
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 <= temp_v14) << 0x1d);
  for (temp_v14 = romwright_fabs_4(temp_v14); (int)temp_v14 >= 0x47800000; temp_v14 = temp_v14 - 65536.0f) {
  }
  temp_v7 = VectorFloatToUnsigned(temp_v13,3);
  temp_v8 = VectorFloatToUnsigned(temp_v13,3);
  temp_v3 = temp_v7;
  temp_v9 = VectorFloatToUnsigned(temp_v14,3);
  temp_v4 = temp_v9;
  temp_v5 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v7 = temp_v8 & 0xff;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v10 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v6 = (float)(&DAT_00536d14)[temp_v3 * 4] + (temp_v13 - temp_v5) * (float)(&DAT_00536d1c)[temp_v3 * 4];
  temp_v12 = (float)(&DAT_00536d18)[temp_v3 * 4] + (temp_v13 - temp_v5) * (float)(&DAT_00536d20)[temp_v3 * 4];
  temp_v5 = (float)(&DAT_00536d14)[temp_v7 * 4] + (temp_v13 - temp_v11) * (float)(&DAT_00536d1c)[temp_v7 * 4];
  temp_v13 = (float)(&DAT_00536d18)[temp_v7 * 4] + (temp_v13 - temp_v11) * (float)(&DAT_00536d20)[temp_v7 * 4]
  ;
  temp_v11 = (float)(&DAT_00536d14)[temp_v4 * 4] + (temp_v14 - temp_v10) * (float)(&DAT_00536d1c)[temp_v4 * 4]
  ;
  temp_v14 = (float)(&DAT_00536d18)[temp_v4 * 4] + (temp_v14 - temp_v10) * (float)(&DAT_00536d20)[temp_v4 * 4]
  ;
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v11 = -temp_v11;
  }
  param_1->field_0x18 = temp_v14 * temp_v13;
  param_1->field_0x28 = temp_v11 * temp_v13;
  param_1->field_0x3c = temp_v6 * temp_v13;
  param_1->field_0x40 = temp_v12 * temp_v13;
  param_1->field_0x1c = temp_v6 * temp_v14 * temp_v5 - temp_v12 * temp_v11;
  param_1->field_0x30 = temp_v12 * temp_v11 * temp_v5 - temp_v6 * temp_v14;
  param_1->field_0x20 = temp_v6 * temp_v11 + temp_v12 * temp_v14 * temp_v5;
  param_1->field_0x2c = temp_v12 * temp_v14 + temp_v6 * temp_v11 * temp_v5;
  param_1->field_0x38 = -temp_v5;
  param_1->field_0x24 = 0;
  param_1->field_0x34 = 0;
  param_1->field_0x44 = 0;
  param_1->field_0x48 = 0;
  param_1->field_0x4c = 0;
  param_1->field_0x50 = 0;
  param_1->field_0x54 = 0x3f800000;
  temp_v15 = param_1->field_0x5c + *(float *)((int)param_1->field_0x60 + 0x2c);
  param_1->field_0x5c = temp_v15;
  temp_v15 = temp_v15 * (*(float *)((int)param_1->field_0x60 + 0x2c) + 1.0f);
  param_1->field_0x5c = temp_v15;
  uStack_28 = 0x3f800000;
  temp_v16 = temp_v15;
  FUN_001d3de0(&param_1->field_0x18,&param_1->field_0x18,&temp_v15);
  return;
}

} /* extern "C" */
