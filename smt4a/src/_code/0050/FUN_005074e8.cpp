/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005074e8` (_code @ 0x5074e8, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00193c08(int, unsigned char *);
int FUN_00199f84(int, unsigned int *);
int FUN_0045b4d0(int *, int *, unsigned int, int);

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_5_stack;

/* Supplied declaration required: FUN_00193c08. */
/* Supplied declaration required: FUN_00199f84. */
/* Supplied declaration required: FUN_0045b4d0. */


void FUN_005074e8(int *param_1,int param_2,unsigned char *param_3,int param_4,int param_5)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  unsigned int *puVar7;
  unsigned short *puVar8;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int uStack_5c;
  int temp_v8;
  unsigned int uStack_54;
  int *temp_v9;
  int iStack_30;
  unsigned char *pbStack_2c;
  int iStack_28;
  
  temp_v6 = *(int *)(param_5 + 8) + param_4;
  temp_v5 = param_4;
  temp_v9 = param_1;
  iStack_30 = param_2;
  pbStack_2c = param_3;
  iStack_28 = param_4;
  FUN_0045b4d0(&temp_v8,&temp_v5,*(unsigned int *)(param_5 + 0x2c),4);
  *(unsigned int *)(param_3 + 4) = temp_v8;
  *(unsigned int *)(param_3 + 8) = uStack_54 >> 1;
  for (temp_v2 = 0; temp_v2 < uStack_54 >> 1; temp_v2 = temp_v2 + 1) {
  }
  FUN_0045b4d0(&temp_v8,&temp_v5,*(unsigned int *)(param_5 + 0x34),4);
  temp_v2 = uStack_54 >> 6;
  *(unsigned int *)(param_3 + 0xc) = temp_v8;
  *(unsigned int *)(param_3 + 0x10) = temp_v2;
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  FUN_0045b4d0(&temp_v8,&temp_v5,*(unsigned int *)(param_5 + 0x3c),4);
  *(unsigned int *)(param_3 + 0x14) = temp_v8;
  *(unsigned int *)(param_3 + 0x18) = uStack_54 / 0x30;
  for (temp_v2 = 0; temp_v2 < uStack_54 / 0x30; temp_v2 = temp_v2 + 1) {
  }
  if (*(char *)(param_2 + 1) == '\x02') {
    FUN_0045b4d0(&temp_v7,&temp_v5,*(unsigned int *)(param_5 + 0x44),4);
    *(unsigned int *)(param_3 + 0x1c) = temp_v7;
    *(unsigned int *)(param_3 + 0x20) = uStack_5c / 0xc;
    for (temp_v2 = 0; temp_v2 < uStack_5c / 0xc; temp_v2 = temp_v2 + 1) {
    }
  }
  puVar5 = *(unsigned short **)(param_3 + 4);
  temp_v4 = 0;
  temp_v0 = 0;
  puVar8 = puVar5 + *(int *)(param_3 + 8);
  while (puVar5 != puVar8) {
    puVar7 = (unsigned int *)(*(int *)(param_2 + 0x70) + temp_v4 * 100);
    *puVar5 = (short)puVar7[1];
    FUN_00199f84(*(int *)(param_3 + 0x14) + temp_v4 * 0x30,puVar7 + 0xb);
    puVar5 = puVar5 + 1;
    temp_v4 = temp_v4 + 1;
    if ((*puVar7 & 0x70000) != 0) {
      temp_v0 = 1;
    }
  }
  FUN_00193c08(param_2,param_3);
  param_3[1] = *(unsigned char *)(param_2 + 1);
  if (temp_v0) {
    temp_v1 = *param_3 | 1;
  }
  else {
    temp_v1 = *param_3 & 0xfe;
  }
  *param_3 = temp_v1;
  *temp_v9 = temp_v5;
  temp_v9[1] = 0;
  return;
}

} /* extern "C" */
