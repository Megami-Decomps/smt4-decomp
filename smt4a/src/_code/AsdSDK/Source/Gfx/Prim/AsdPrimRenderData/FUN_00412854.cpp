/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00412854` (_code @ 0x412854, 0x254 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int FUN_0019d4d8(int, int, int, undefined4, int, int);

typedef struct fn_00412854_arg0 fn_00412854_arg0;
struct fn_00412854_arg0 {
    unsigned char pad_0x0[0x4];
    uint field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x10];
    int field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
    int field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
    int field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0x8];
    undefined4 field_0x48; /* +0x48 */
};

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_0019d4d8. */


void FUN_00412854(fn_00412854_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned int in_s0;
  
  temp_v0 = param_1->field_0x4;
  temp_v3 = 0;
  if ((temp_v0 & 1) != 0) {
    temp_v3 = param_1->field_0xc * 0xc;
  }
  temp_v7 = 0;
  if ((temp_v0 & 2) != 0) {
    temp_v7 = param_1->field_0xc << 4;
  }
  temp_v8 = 0;
  if ((temp_v0 & 0x20) != 0) {
    temp_v8 = param_1->field_0xc << 2;
  }
  temp_v4 = 0;
  if ((temp_v0 & 4) != 0) {
    temp_v4 = param_1->field_0xc << 3;
  }
  temp_v5 = 0;
  if ((temp_v0 & 8) != 0) {
    temp_v5 = param_1->field_0xc * 0xc;
  }
  temp_v1 = 0;
  if ((temp_v0 & 0x10) != 0) {
    temp_v1 = param_1->field_0xc * 0xc;
  }
  temp_v2 = 0x10000;
  FUN_00167ab4(0x10000,0x100,0,temp_v5 + temp_v7 + temp_v3 + temp_v8 + temp_v4 + temp_v1,0x10,1);
  param_1->field_0x2c = temp_v2;
  temp_v3 = 0;
  if ((param_1->field_0x4 & 1) != 0) {
    param_1->field_0x30 = temp_v2;
    temp_v3 = param_1->field_0xc * 0xc;
  }
  if ((param_1->field_0x4 & 2) != 0) {
    param_1->field_0x34 = temp_v2 + temp_v3;
    temp_v0 = param_1->field_0xc;
    temp_v3 = temp_v3 + temp_v0 * 0x10;
    if ((temp_v0 & 0x3fffffff) != 0) {
      temp_v7 = 0;
      temp_v9 = (temp_v0 & 0x3fffffff) != 0;
      if (temp_v9) {
        in_s0 = 0x3f800000;
      }
      temp_v0 = 0;
      if (temp_v9) {
        do {
          temp_v0 = temp_v0 + 2;
          temp_v8 = temp_v7 + 1;
          *(unsigned int *)(param_1->field_0x34 + temp_v7 * 4) = in_s0;
          temp_v7 = temp_v7 + 2;
          *(unsigned int *)(param_1->field_0x34 + temp_v8 * 4) = in_s0;
        } while (temp_v0 < (unsigned int)(param_1->field_0xc << 2));
      }
    }
  }
  if ((param_1->field_0x4 & 0x20) != 0) {
    param_1->field_0x38 = param_1->field_0x2c + temp_v3;
    temp_v0 = param_1->field_0xc;
    temp_v3 = temp_v3 + temp_v0 * 4;
    if ((temp_v0 & 0x3fffffff) != 0) {
      temp_v7 = 0;
      temp_v6 = 0;
      if ((temp_v0 & 0x3fffffff) != 0) {
        do {
          temp_v6 = temp_v6 + 2;
          *(unsigned char *)(param_1->field_0x38 + temp_v7) = 0xff;
          *(unsigned char *)(param_1->field_0x38 + temp_v7 + 1) = 0xff;
          temp_v7 = temp_v7 + 2;
        } while (temp_v6 < (unsigned int)(param_1->field_0xc << 2));
      }
    }
  }
  if ((param_1->field_0x4 & 4) != 0) {
    param_1->field_0x3c = temp_v3 + param_1->field_0x2c;
  }
  puVar5 = (unsigned short *)0x10000;
  FUN_0019d4d8(0x10000,0x100,0,param_1->field_0x18 << 1,0x10,1);
  param_1->field_0x48 = (undefined4)puVar5;
  if (param_1->field_0x18 != 0) {
    temp_v0 = param_1->field_0x18 & 1;
    if (temp_v0 == 1) {
      *puVar5 = 0;
    }
    temp_v6 = (unsigned int)(temp_v0 == 1);
    if (temp_v0 < (unsigned int)param_1->field_0x18) {
      do {
        temp_v0 = temp_v0 + 2;
        temp_v3 = temp_v6 + 1;
        *(unsigned short *)(param_1->field_0x48 + temp_v6 * 2) = 0;
        temp_v6 = temp_v6 + 2;
        *(unsigned short *)(param_1->field_0x48 + temp_v3 * 2) = 0;
      } while (temp_v0 < (unsigned int)param_1->field_0x18);
    }
  }
  return;
}

} /* extern "C" */
