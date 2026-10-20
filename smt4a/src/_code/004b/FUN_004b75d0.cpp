/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b75d0` (_code @ 0x4b75d0, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

typedef struct fn_004b75d0_arg0 fn_004b75d0_arg0;
struct fn_004b75d0_arg0 {
    unsigned char pad_0x0[0x20];
    uint field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x34];
    float field_0x58; /* +0x58 */
    float field_0x5c; /* +0x5c */
    float field_0x60; /* +0x60 */
    float field_0x64; /* +0x64 */
    float field_0x68; /* +0x68 */
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    float field_0x78; /* +0x78 */
    float field_0x7c; /* +0x7c */
    float field_0x80; /* +0x80 */
    float field_0x84; /* +0x84 */
    int field_0x88; /* +0x88 */
    int field_0x8c; /* +0x8c */
};

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_004b75d0(fn_004b75d0_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  
  temp_v2 = param_1->field_0x20;
  if ((temp_v2 & 0x1000) != 0) {
    temp_v1 = param_1->field_0x8c;
    temp_v0 = param_1->field_0x88 + 1;
    if (temp_v0 == temp_v1) {
      temp_v2 = temp_v2 & 0xffffefff;
    }
    param_1->field_0x88 = temp_v0;
    if (temp_v0 == temp_v1) {
      param_1->field_0x20 = temp_v2;
    }
    temp_v5 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_1->field_0x70 =
         ((param_1->field_0x80 - param_1->field_0x78) * temp_v7) / temp_v10 + param_1->field_0x78;
    param_1->field_0x74 =
         ((param_1->field_0x84 - param_1->field_0x7c) * temp_v8) / temp_v4 + param_1->field_0x7c;
    param_1->field_0x58 =
         ((param_1->field_0x68 - param_1->field_0x60) * temp_v5) / temp_v9 + param_1->field_0x60;
    param_1->field_0x5c =
         ((param_1->field_0x6c - param_1->field_0x64) * temp_v6) / temp_v3 + param_1->field_0x64;
  }
  return;
}

} /* extern "C" */
