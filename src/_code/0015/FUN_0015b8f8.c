/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015b8f8` (_code @ 0x15b8f8, 0x290 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0015b8f8_arg0 fn_0015b8f8_arg0;
typedef struct fn_0015b8f8_arg1 fn_0015b8f8_arg1;
struct fn_0015b8f8_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    uint field_0x10; /* +0x10 */
    uint field_0x14; /* +0x14 */
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    uint field_0x1c; /* +0x1c */
    uint field_0x20; /* +0x20 */
    uint field_0x24; /* +0x24 */
    uint field_0x28; /* +0x28 */
    uint field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x4];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x3];
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x3];
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    unsigned char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x3];
    uint field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
};
struct fn_0015b8f8_arg1 {
    unsigned char pad_0x0[0xc];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    uint field_0x18; /* +0x18 */
    uint field_0x1c; /* +0x1c */
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x3];
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x7];
    uint field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
    byte field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    float field_0x40; /* +0x40 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0015d888. */
extern unsigned int FUN_002bc300(int);


void FUN_0015b8f8(fn_0015b8f8_arg0 *param_1,fn_0015b8f8_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  unsigned int *temp_v6;
  
  param_1->field_0x48 = 0x38;
  param_1->field_0x10 = param_1->field_0x10 & 0xfffffff0;
  temp_v3 = 0;
  param_1->field_0x1c = param_1->field_0x1c & 0xf00fffff;
  param_1->field_0x20 = param_1->field_0x20 & 0xf800f800;
  param_1->field_0x24 = param_1->field_0x24 & 0x8fffffcf;
  param_1->field_0x28 = param_1->field_0x28 & 0xfff0ffff;
  param_1->field_0x2c = param_1->field_0x2c & 0xf0000000;
  param_1->field_0x44 = 0;
  if (param_2->field_0x38 != 0) {
    temp_v0 = (int)&param_2->field_0x38 + param_2->field_0x38;
  }
  else {
    temp_v0 = 0;
  }
  temp_v4 = *(int *)(temp_v0 + 0x18);
  if (temp_v4 == 0) {
    temp_v4 = *(int *)(temp_v0 + 0xc);
    if (temp_v4 != 0) {
      temp_v4 = temp_v4 + temp_v0 + 0xc;
    }
    else {
      temp_v4 = 0;
    }
  }
  param_1->field_0x10 = (param_2->field_0x34 & 0xf) | param_1->field_0x10;
  param_1->field_0x1c = param_1->field_0x1c | 0xa00000;
  param_1->field_0x14 = param_1->field_0x14 | 0xf0000;
  temp_v1 = (param_2->field_0x18 & 0x7ff) | param_1->field_0x20;
  param_1->field_0x20 = temp_v1;
  param_1->field_0x20 = temp_v1 | ((param_2->field_0x1c & 0xffff07ff) << 0x10);
  temp_v1 = param_1->field_0x24;
  param_1->field_0x24 = temp_v1 | 0x20000000;
  temp_v0 = param_1->field_0xc;
  if (temp_v0 != 0) {
    temp_v6 = (unsigned int *)(temp_v0 + (int)&param_1->field_0xc);
  }
  else {
    temp_v6 = (unsigned int *)0x0;
  }
  if ((temp_v6 != (unsigned int *)0x0) && ((*temp_v6 & 0x80000000) == 0)) {
    temp_v6 = (unsigned int *)0x0;
  }
  param_1->field_0x24 = temp_v1 | 0x20100000;
  temp_v6[2] = 1;
  temp_v1 = temp_v6[1];
  if (temp_v1 != 0) {
    temp_v0 = (int)(temp_v6 + 1) + temp_v1;
  }
  else {
    temp_v0 = 0;
  }
  temp_v1 = *(unsigned int *)(temp_v0 + 0x24);
  *(unsigned int *)(temp_v0 + 0x24) = (temp_v1 & 0xfffffffb) | 4;
  *(unsigned int *)(temp_v0 + 0x24) = (temp_v1 & 0xfefffffb) | 4;
  FUN_0015d888(&temp_v6);
  temp_v1 = temp_v6[1];
  if (temp_v1 != 0) {
    temp_v0 = (int)(temp_v6 + 1) + temp_v1;
  }
  else {
    temp_v0 = 0;
  }
  *(unsigned int *)(temp_v0 + 0x24) = *(unsigned int *)(temp_v0 + 0x24) | 2;
  temp_v1 = temp_v6[1];
  if (temp_v1 != 0) {
    temp_v0 = (int)(temp_v6 + 1) + temp_v1;
  }
  else {
    temp_v0 = 0;
  }
  *(unsigned int *)(temp_v0 + 0x24) = (*(unsigned int *)(temp_v0 + 0x24) & 0xffff8fff) | 0x1000;
  temp_v1 = temp_v6[1];
  if (temp_v1 != 0) {
    temp_v3 = temp_v1 + (int)(temp_v6 + 1);
  }
  *(unsigned int *)(temp_v3 + 0x24) = (*(unsigned int *)(temp_v3 + 0x24) & 0xfffff8ff) | 0x100;
  temp_v1 = FUN_002bc300(temp_v4);
  param_1->field_0x2c = param_1->field_0x2c | ((temp_v1 & 0x7fffffff) >> 3);
  temp_v1 = param_1->field_0x44 | (unsigned int)(param_2->field_0x3c == 0);
  param_1->field_0x44 = temp_v1;
  temp_v5 = param_2->field_0x40;
  if ((temp_v5 <= 0.0f) || ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17 == 0xff)) {
    temp_v2 = 0;
  }
  else if ((int)(temp_v5 * 16777216.0f) < 0x4b800000) {
    temp_v2 = VectorFloatToUnsigned(temp_v5 * 16777216.0f,3);
  }
  else {
    temp_v2 = 0xffffff;
  }
  param_1->field_0x44 = (temp_v2 & 0xfffffe) | temp_v1;
  return;
}
