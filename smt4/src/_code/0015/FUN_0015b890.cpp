/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015b890` (_code @ 0x15b890, 0x158 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0015b890_arg0 fn_0015b890_arg0;
typedef struct fn_0015b890_arg1 fn_0015b890_arg1;
struct fn_0015b890_arg0 {
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
    unsigned char pad_0x39[0xf];
    undefined4 field_0x48; /* +0x48 */
};
struct fn_0015b890_arg1 {
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
    int field_0x28; /* +0x28 */
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x7];
    uint field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
};

extern unsigned int FUN_002bc11c(int);


void FUN_0015b890(fn_0015b890_arg0 *param_1,fn_0015b890_arg1 *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  param_1->field_0x48 = 0x20;
  param_1->field_0x10 = param_1->field_0x10 & 0xfffffff0;
  param_1->field_0x1c = param_1->field_0x1c & 0xf00fffff;
  param_1->field_0x20 = param_1->field_0x20 & 0xf800f800;
  temp_v3 = 0;
  param_1->field_0x24 = param_1->field_0x24 & 0xffffffcf;
  param_1->field_0x28 = param_1->field_0x28 & 0xfff0ffff;
  param_1->field_0x2c = param_1->field_0x2c & 0xf0000000;
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
  temp_v1 = param_2->field_0x34;
  param_1->field_0x10 = param_1->field_0x10 | (temp_v1 & 0xf);
  param_1->field_0x1c = param_1->field_0x1c | 0x400000;
  param_1->field_0x14 = param_1->field_0x14 | 0xf0000;
  temp_v2 = param_1->field_0x20 | (param_2->field_0x18 & 0x7ff);
  param_1->field_0x20 = temp_v2;
  param_1->field_0x20 = temp_v2 | ((param_2->field_0x1c & 0xffff07ff) << 0x10);
  if (temp_v1 == 0xc) {
    param_1->field_0x24 = param_1->field_0x24 | 0x20;
  }
  temp_v0 = param_1->field_0xc;
  if (temp_v0 != 0) {
    temp_v3 = temp_v0 + (int)&param_1->field_0xc;
  }
  temp_v1 = *(unsigned int *)(temp_v3 + 8);
  temp_v5 = (temp_v1 & 0xff) != 0;
  if (temp_v5) {
    temp_v1 = temp_v1 & 0xff;
  }
  if (temp_v5 && temp_v1 != 1) {
    param_1->field_0x28 = param_1->field_0x28 | (((param_2->field_0x28 - 1U) & 0xf) << 0x10);
  }
  temp_v1 = FUN_002bc11c(temp_v4);
  param_1->field_0x2c = param_1->field_0x2c | ((temp_v1 & 0x7fffffff) >> 3);
  return;
}

} /* extern "C" */
