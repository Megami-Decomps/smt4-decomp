/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138f14` (_code @ 0x138f14, 0x3e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bbb2c(void);
int FUN_002c38fc(int);
int nn_fs_GetPriority(void);

typedef int romwright_code(...);
/* stack frame of param_7: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_7_stack;

/* Supplied declaration required: FUN_002bbb2c. */
/* Supplied declaration required: FUN_002c38fc. */
extern void nn_fnd_UnitHeapBase_Initialize(unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: nn_fs_GetPriority. */


int FUN_00138f14(int param_1,unsigned int *param_2,int param_3,int param_4,unsigned int param_5,unsigned int param_6,
                int param_7)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char temp_v9 [4];
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned char temp_v19 [8];
  int temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  
  temp_v1 = (**(romwright_code **)*param_2)(param_2,&temp_v8,0,0,temp_v9,0x28);
  if (temp_v1 < 0) {
    return temp_v1;
  }
  if (temp_v8 != 0x28) {
    return -0x375fbaac;
  }
  temp_v1 = 0;
  temp_v0 = param_3 * 0x20;
  if (param_7 != 0) {
    temp_v1 = (**(romwright_code **)*param_2)(param_2,&temp_v7,0,0,temp_v19,0x28);
    temp_v2 = 0xffffffff;
    if (((temp_v1 >= 0) && (temp_v7 == 0x28)) &&
       (temp_v1 = temp_v22 + temp_v23 + temp_v20 + temp_v21, temp_v1 >= 0)) {
      temp_v2 = temp_v0 + param_4 * 0x18 + temp_v1;
    }
  }
  else {
    temp_v2 = temp_v0 + param_4 * 0x18 + temp_v1;
  }
  if (param_6 < temp_v2) {
    return -0x279fb9a7;
  }
  if (param_7 != 0) {
    temp_v1 = (**(romwright_code **)*param_2)(param_2,&temp_v8,0x28,0,param_5,temp_v11);
    if (temp_v1 < 0) {
      return temp_v1;
    }
    temp_v7 = param_5;
    temp_v5 = temp_v11 + param_5;
    temp_v3 = temp_v8 + 0x28;
    temp_v1 = (**(romwright_code **)*param_2)(param_2,&temp_v8,temp_v3,temp_v3 >> 0x1f,temp_v5,temp_v13);
    if (temp_v1 < 0) {
      return temp_v1;
    }
    temp_v4 = temp_v13 + temp_v5;
    temp_v3 = temp_v3 + temp_v8;
    temp_v1 = (**(romwright_code **)*param_2)(param_2,&temp_v8,temp_v3,temp_v3 >> 0x1f,temp_v4,temp_v15);
    if (temp_v1 < 0) {
      return temp_v1;
    }
    temp_v6 = temp_v15 + temp_v4;
    temp_v1 = (**(romwright_code **)*param_2)
                      (param_2,&temp_v8,temp_v3 + temp_v8,(temp_v3 + temp_v8) >> 0x1f,temp_v6,temp_v17)
    ;
    if (temp_v1 < 0) {
      return temp_v1;
    }
    param_5 = temp_v17 + temp_v6;
    *(unsigned int *)(param_1 + 0x78) = 0;
    *(unsigned int *)(param_1 + 0x70) = temp_v7;
    *(unsigned int *)(param_1 + 0x74) = temp_v11;
    *(int *)(param_1 + 0x7c) = param_1;
    *(unsigned int *)(param_1 + 0x88) = 0;
    *(int *)(param_1 + 0x84) = temp_v13;
    *(int *)(param_1 + 0x80) = temp_v5;
    *(int *)(param_1 + 0x8c) = param_1;
    *(unsigned int *)(param_1 + 0x98) = 0;
    *(unsigned int *)(param_1 + 0x94) = temp_v15;
    *(int *)(param_1 + 0x90) = temp_v4;
    *(int *)(param_1 + 0x9c) = param_1;
    *(unsigned int *)(param_1 + 0xa8) = 0;
    *(int *)(param_1 + 0xa4) = temp_v17;
    *(int *)(param_1 + 0xa0) = temp_v6;
    *(int *)(param_1 + 0xac) = param_1;
  }
  else {
    *(unsigned int *)(param_1 + 0x7c) = temp_v10;
    *(unsigned int *)(param_1 + 0x70) = 0;
    *(unsigned int *)(param_1 + 0x74) = temp_v11;
    *(int *)(param_1 + 0x78) = param_1;
    *(unsigned int *)(param_1 + 0x8c) = temp_v12;
    *(unsigned int *)(param_1 + 0x80) = 0;
    *(int *)(param_1 + 0x84) = temp_v13;
    *(int *)(param_1 + 0x88) = param_1;
    *(unsigned int *)(param_1 + 0x9c) = temp_v14;
    *(unsigned int *)(param_1 + 0x90) = 0;
    *(unsigned int *)(param_1 + 0x94) = temp_v15;
    *(int *)(param_1 + 0x98) = param_1;
    *(unsigned int *)(param_1 + 0xac) = temp_v16;
    *(unsigned int *)(param_1 + 0xa0) = 0;
    *(int *)(param_1 + 0xa4) = temp_v17;
    *(int *)(param_1 + 0xa8) = param_1;
  }
  *(int *)(param_1 + 0x2c) = param_1 + 0x70;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x28) = temp_v11 >> 2;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x3c) = param_1 + 0x80;
  *(int *)(param_1 + 0x38) = temp_v13;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x54) = param_1 + 0x90;
  *(int *)(param_1 + 100) = param_1 + 0xa0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(unsigned int *)(param_1 + 0x50) = temp_v15 >> 2;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x60) = temp_v17;
  nn_fnd_UnitHeapBase_Initialize(param_1 + 0xb8,0x20,param_5,temp_v0,4,0);
  FUN_002c38fc(param_1 + 0xe8);
  nn_fnd_UnitHeapBase_Initialize(param_1 + 0xf4,0x18,param_5 + temp_v0,param_4 * 0x18,4,0);
  FUN_002c38fc(param_1 + 0x124);
  *(unsigned int *)(param_1 + 0xb0) = temp_v18;
  temp_v1 = param_1 + 4;
  nn_fs_GetPriority();
  if (temp_v1 < 0) {
    FUN_002bbb2c();
  }
  temp_v3 = *(int *)(param_1 + 4);
  temp_v1 = temp_v3;
  if (temp_v3 == 0) {
    temp_v1 = 2;
  }
  if (temp_v3 < 0) {
    if (temp_v1 < -8) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = 1;
    }
  }
  else if (0 < temp_v3) {
    if (temp_v1 < 9) {
      temp_v1 = 3;
    }
    else {
      temp_v1 = 4;
    }
  }
  *(unsigned int **)(param_1 + temp_v1 * 4 + 0xc) = param_2;
  *(unsigned int **)(param_1 + 8) = param_2;
  return 0;
}

} /* extern "C" */
