/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba1f8` (_code @ 0x3ba1f8, 0x1f0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003ba1f8_arg0 fn_003ba1f8_arg0;
struct fn_003ba1f8_arg0 {
    unsigned char pad_0x0[0x20];
    uint field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x4];
    undefined4 field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0xc];
    ushort field_0x3c; /* +0x3c */
    unsigned char pad_0x3e[0x2];
    ushort field_0x40; /* +0x40 */
};

/* stack frame of param_1: 10 slot(s), 22 byte(s) */
typedef struct {
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned char sp3D; /* 0x3d: local_3d */
    unsigned char sp3E; /* 0x3e: local_3e */
    unsigned char sp3F; /* 0x3f: local_3f */
    unsigned char sp40; /* 0x40: local_40 */
} param_1_stack;

extern int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_0049f970; /* 0x49f970 */
extern int DAT_0049fd14; /* 0x49fd14 */
extern unsigned int DAT_0049fd18; /* 0x49fd18 */
extern unsigned int DAT_0049fd1c; /* 0x49fd1c */

/* Supplied declaration required: FUN_0022b130. */
/* Supplied declaration required: FUN_0022b1f8. */
/* Supplied declaration required: FUN_0022b818. */
/* Supplied declaration required: FUN_00273bdc. */
extern int FUN_00273bfc(int);
/* Supplied declaration required: FUN_00276488. */
/* Supplied declaration required: FUN_00289770. */
/* Supplied declaration required: FUN_0028d908. */
/* Supplied declaration required: FUN_00291a08. */
/* Supplied declaration required: FUN_002bd9ec. */


void FUN_003ba1f8(fn_003ba1f8_arg0 *param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  
  if (param_1->field_0x2c != 0) {
    if (param_1->field_0x2c != 1) {
      return;
    }
    temp_v0 = FUN_00273bfc(DAT_00432fc8 + 0xa8);
    if (temp_v0 != 0) {
      FUN_00291a08(DAT_00432fc8 + 0xa8);
      if (DAT_0049fd14 >= 0) {
        temp_v5 = 0;
        temp_v6 = 0;
        temp_v7 = 0;
        temp_v8 = 0;
        temp_v2 = 3;
        temp_v3 = (unsigned char)param_1->field_0x3c;
        temp_v4 = (unsigned char)param_1->field_0x40;
        FUN_00273bdc(&temp_v2);
        FUN_00276488();
        temp_v9 = (unsigned short)DAT_0049fd14;
        temp_v10 = (unsigned short)DAT_0049fd18;
        temp_v11 = (unsigned short)DAT_0049fd1c;
        FUN_002bd9ec((unsigned char *)((int)param_1 + 0x42),&temp_v9);
        temp_v1 = param_1->field_0x20;
        param_1->field_0x20 = temp_v1 | 0x10;
        if (DAT_0049fd14 < 200) {
          param_1->field_0x20 = temp_v1 | 0x100110;
        }
        param_1->field_0x2c = 0;
        param_1->field_0x28 = 5;
      }
      else if (DAT_0049f970 != 0) {
        temp_v5 = 0;
        temp_v6 = 0;
        temp_v7 = 0;
        temp_v8 = 0;
        temp_v2 = 3;
        temp_v3 = (unsigned char)param_1->field_0x3c;
        temp_v4 = (unsigned char)param_1->field_0x40;
        FUN_00273bdc(&temp_v2);
        FUN_00276488();
        FUN_0022b818(param_1);
        param_1->field_0x20 = param_1->field_0x20 | 0x40100;
        param_1->field_0x2c = 0;
        param_1->field_0x28 = 5;
      }
      else {
        FUN_00289770();
        FUN_0022b130(1);
        FUN_0022b1f8(param_1);
        param_1->field_0x2c = 0;
        param_1->field_0x28 = 5;
      }
      if (temp_v0 == 2) {
        param_1->field_0x28 = 0xf;
        param_1->field_0x2c = 0;
        return;
      }
    }
    temp_v1 = *(unsigned int *)(DAT_00432fc8 + 0x754);
    *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v1 & 0xffffff8f;
    if ((temp_v1 & 0x10) != 0) {
      param_1->field_0x28 = 0xf;
      param_1->field_0x2c = 0;
      return;
    }
  }
  else {
    FUN_0022b130(0);
    FUN_0028d908(DAT_00432fc8 + 0xa8,1);
    param_1->field_0x2c = 1;
  }
  return;
}
