/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e1a4` (_code @ 0x15e1a4, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0015e1a4_arg0 fn_0015e1a4_arg0;
struct fn_0015e1a4_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    float field_0xc; /* +0xc */
    unsigned char pad_0x10[0x18];
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    int field_0x30; /* +0x30 */
    int field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
    uint field_0x3c; /* +0x3c */
    int field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x8];
    int field_0x4c; /* +0x4c */
    int field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x8];
    int field_0x5c; /* +0x5c */
    int field_0x60; /* +0x60 */
    int field_0x64; /* +0x64 */
    int field_0x68; /* +0x68 */
    unsigned char pad_0x6c[0x10];
    int field_0x7c; /* +0x7c */
    int field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x6c];
    int field_0xf0; /* +0xf0 */
    float field_0xf4; /* +0xf4 */
    int field_0xf8; /* +0xf8 */
    int field_0xfc; /* +0xfc */
    int field_0x100; /* +0x100 */
    undefined1 field_0x104; /* +0x104 */
};

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0015eb60. */


void FUN_0015e1a4(fn_0015e1a4_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  int temp_v4;
  int temp_v5;
  float temp_v6;
  int temp_v7;
  
  temp_v2 = param_1->field_0xc;
  temp_v1 = param_1->field_0x4;
  temp_v5 = VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = temp_v5;
  if (temp_v5 >= 0x409c6a80) {
    temp_v7 = temp_v1;
  }
  param_1->field_0xf0 = temp_v1;
  param_1->field_0xf4 = temp_v2;
  param_1->field_0xf8 = param_1->field_0x30;
  param_1->field_0xfc = param_1->field_0x34;
  param_1->field_0x100 = param_1->field_0x38;
  temp_v1 = param_1->field_0x30 * 4;
  temp_v0 = param_1->field_0x34 * 4;
  temp_v6 = 4.888f;
  if (temp_v5 >= 0x409c6a80) {
    temp_v6 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v7 = VectorFloatToUnsigned(temp_v6 * 0.20458265f,3);
  temp_v5 = VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = 4.888f;
  if (temp_v5 >= 0x409c6a80) {
    temp_v6 = temp_v2;
  }
  temp_v3 = (param_1->field_0x28 + 0x1fU) & 0xffffffe0;
  if (temp_v5 >= 0x409c6a80) {
    temp_v6 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  param_1->field_0x3c = temp_v3;
  temp_v5 = temp_v3 + temp_v7 * 0x280;
  param_1->field_0x4c = temp_v5;
  temp_v4 = VectorFloatToUnsigned(temp_v6 * 0.20458265f,3);
  temp_v5 = temp_v5 + temp_v4 * 0x280;
  param_1->field_0x5c = temp_v5;
  temp_v5 = temp_v5 + temp_v1;
  param_1->field_0x60 = temp_v5;
  temp_v5 = temp_v5 + temp_v0;
  param_1->field_0x7c = temp_v5;
  temp_v5 = temp_v5 + param_1->field_0x38 * 4;
  temp_v7 = temp_v7 * 0x280 + temp_v5;
  param_1->field_0x40 = temp_v5;
  param_1->field_0x50 = temp_v7;
  temp_v7 = temp_v7 + temp_v4 * 0x280;
  param_1->field_0x64 = temp_v7;
  temp_v7 = temp_v7 + temp_v1;
  param_1->field_0x68 = temp_v7;
  param_1->field_0x80 = temp_v7 + temp_v0;
  FUN_0015eb60(param_1);
  param_1->field_0x104 = 1;
  return;
}
