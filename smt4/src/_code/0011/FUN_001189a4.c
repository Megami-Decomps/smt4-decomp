/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001189a4` (_code @ 0x1189a4, 0x27c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001189a4_arg0 fn_001189a4_arg0;
struct fn_001189a4_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    byte field_0x9; /* +0x9 */
    unsigned char pad_0xa[0xe];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    int field_0x20; /* +0x20 */
};

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_00126830. */
/* Supplied declaration required: FUN_002b75ec. */
/* Supplied declaration required: FUN_002bd81c. */
/* Supplied declaration required: FUN_002bedb0. */
/* Supplied declaration required: FUN_002bee04. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
extern unsigned int FUN_002c5d80(unsigned int, unsigned int);


void FUN_001189a4(fn_001189a4_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0; 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  void *pvVar4;
  int temp_v3;
  float in_s0;
  int temp_v4;
  unsigned long long temp_v5;
  unsigned int temp_v6 [11];
  
  if (param_1->field_0x8 != 1 && param_1->field_0x8 != 5) {
    return;
  }
  temp_v0 = FUN_002c5d80(1,0);
  FUN_002bee04(DAT_0044ea00,3,temp_v0);
  temp_v5 = 0x3f80000000000000;
  if (param_1->field_0x9 != 0xb) {
    if (param_1->field_0x9 != 0x13) {
      FUN_002bedb0(DAT_0044ea00,3);
      return;
    }
    temp_v1 = FUN_002bf4f8(0x3a,0x97);
    temp_v3 = 0;
    if (temp_v3 < param_1->field_0x20) {
      do {
        temp_v2 = FUN_002bf4f8(0x3a,temp_v3 + 0x98);
        if (param_1->field_0x18 == temp_v3) {
          FUN_002bf380(2,0x3a,0x12,(int)*(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10),0xb);
          pvVar4 = param_1->field_0x4;
          temp_v0 = 0xf;
        }
        else {
          FUN_002bf380(2,0x3a,0x11,(int)*(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10),0xb);
          pvVar4 = param_1->field_0x4;
          temp_v0 = 0xe;
        }
        *(unsigned int *)((int)pvVar4 + 0xb0) = temp_v0;
        FUN_00126830(param_1->field_0x4,temp_v3);
        temp_v4 = (int)in_s0;
        in_s0 = (float)((unsigned long long)temp_v5 >> 0x20);
        FUN_002b75ec(param_1->field_0x4,
                     ((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) +
                     ((int)**(short **)(temp_v1 + 0xc) >> 1)) - (temp_v4 >> 1),
                     (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10),0x33,6,temp_v3);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < param_1->field_0x20);
    }
  }
  else {
    temp_v3 = 0;
    temp_v0 = 0xb1;
    temp_v6[0] = 0xa8;
    temp_v6[1] = 0xa9;
    temp_v6[2] = 0x9c;
    temp_v6[3] = 0x9d;
    temp_v6[4] = 0x9e;
    temp_v6[5] = 0xb0;
    temp_v6[6] = 0xb1;
    temp_v6[7] = 0xb2;
    temp_v6[8] = 0xb3;
    temp_v1 = param_1->field_0x20;
    if (temp_v1 != 2) {
      if (temp_v1 == 3) {
        temp_v3 = 2;
      }
      else if (temp_v1 == 4) {
        temp_v3 = 5;
      }
    }
    if (0 < temp_v1) {
      temp_v0 = 0x5a5a5aff;
    }
    temp_v2 = 0;
    if (0 < temp_v1) {
      do {
        temp_v1 = FUN_002bf4f8(0xe,temp_v6[temp_v3 + temp_v2]);
        if (param_1->field_0x18 == temp_v2) {
          *(unsigned int *)((int)param_1->field_0x4 + 0xb0) = 10;
          FUN_002bd81c(param_1->field_0x4,0,0xffffffff);
        }
        else {
          *(unsigned int *)((int)param_1->field_0x4 + 0xb0) = 0xb;
          FUN_002bd81c(param_1->field_0x4,0,temp_v0);
        }
        FUN_002b75ec(param_1->field_0x4,(int)*(short *)(temp_v1 + 8),*(short *)(temp_v1 + 10) - 4,0x33,6
                     ,temp_v2);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < param_1->field_0x20);
    }
  }
  *(unsigned int *)((int)param_1->field_0x4 + 0xb0) = 0;
  FUN_002bd81c(param_1->field_0x4,0,0x646464ff);
  FUN_002bedb0(DAT_0044ea00,3);
  return;
}
