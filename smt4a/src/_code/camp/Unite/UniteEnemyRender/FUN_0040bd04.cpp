/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040bd04` (_code @ 0x40bd04, 0x48c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015d8e0(int, unsigned int, int);
int FUN_001630d4(int, int, int, int, int);
int FUN_00341224(unsigned int, unsigned int, unsigned int, int, int, int, unsigned int);

/* stack frame of param_5: 9 slot(s), 30 byte(s) */
typedef struct {
    unsigned char sp23; /* 0x23: local_23 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

/* Supplied declaration required: FUN_0015d8e0. */
/* Supplied declaration required: FUN_001630d4. */
extern unsigned int FUN_001ad6fc(void);
/* Supplied declaration required: FUN_00341224. */
extern unsigned int FUN_00450f58(unsigned int *, unsigned int);


void FUN_0040bd04(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int uStack_34;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  
  FUN_00341224(param_4,param_5,param_2,0x1908,0x8033,0x81a5,param_3);
  *(unsigned int *)(param_1 + 8) = param_4;
  temp_v0 = FUN_001ad6fc();
  uStack_34 = 1;
  temp_v11 = 0x2020000;
  temp_v14 = 0;
  temp_v15 = 1;
  temp_v12 = *(unsigned int *)(*(int *)(param_1 + 8) + 8);
  temp_v13 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x34);
  temp_v10 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x14);
  temp_v9 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x18);
  temp_v0 = FUN_00450f58((unsigned int *)&temp_v9,temp_v0);
  *(unsigned int *)(param_1 + 0xc) = temp_v0;
  temp_v0 = FUN_001ad6fc();
  FUN_0015d8e0(param_1 + 0xc,temp_v0,0);
  temp_v7 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  temp_v8 = *(unsigned int *)(temp_v7 + 0x34);
  puVar2 = (unsigned int *)0x10000;
  FUN_001630d4(0x10000,0x100,0,0x30,1);
  *(unsigned int **)(param_1 + 0x10) = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar3 = *(unsigned int **)(param_1 + 0x10);
  *puVar3 = *(unsigned int *)(temp_v7 + 0x18) | (*(int *)(temp_v7 + 0x14) << 0x10);
  puVar3[1] = 0xf0082;
  temp_v1 = *(int *)(temp_v7 + 0x3c);
  if ((temp_v1 == 3 || temp_v1 == 4) || (temp_v1 == 5)) {
    temp_v3 = 1;
  }
  else {
    temp_v3 = 0;
  }
  if (temp_v8 == 0xc) {
    temp_v4 = 2;
  }
  else {
    temp_v4 = 0;
  }
  puVar3[2] = (temp_v3 << 2) | (*(int *)(temp_v7 + 0x40) << 1) | (temp_v4 << 4) |
              ((unsigned int)(temp_v1 == 2 || temp_v1 == 5) << 0x18) | (*(int *)(temp_v7 + 0x20) << 0x1c);
  puVar3[3] = 0xf0083;
  puVar3[5] = 0x40084;
  puVar3[4] = 0;
  puVar3[6] = *(unsigned int *)(temp_v7 + 0x30) >> 3;
  puVar3[7] = 0xf0085;
  puVar3[8] = temp_v8;
  puVar3[9] = 0xf008e;
  puVar3[10] = 1;
  puVar3[0xb] = 0xf023d;
  puVar2 = (unsigned int *)0x10000;
  FUN_001630d4(0x10000,0x100,0,0x30,1);
  *(unsigned int **)(param_1 + 0x14) = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar3 = *(unsigned int **)(param_1 + 0x14);
  *puVar3 = *(unsigned int *)(temp_v7 + 0x18) | (*(int *)(temp_v7 + 0x14) << 0x10);
  puVar3[1] = 0xf0092;
  temp_v1 = *(int *)(temp_v7 + 0x3c);
  if ((temp_v1 == 3 || temp_v1 == 4) || (temp_v1 == 5)) {
    temp_v3 = 1;
  }
  else {
    temp_v3 = 0;
  }
  if (temp_v8 == 0xc) {
    temp_v4 = 2;
  }
  else {
    temp_v4 = 0;
  }
  puVar3[2] = (temp_v3 << 2) | (*(int *)(temp_v7 + 0x40) << 1) | (temp_v4 << 4) |
              ((unsigned int)(temp_v1 == 2 || temp_v1 == 5) << 0x18) | (*(int *)(temp_v7 + 0x20) << 0x1c);
  puVar3[3] = 0xf0093;
  puVar3[5] = 0x40094;
  puVar3[4] = 0;
  puVar3[6] = *(unsigned int *)(temp_v7 + 0x30) >> 3;
  puVar3[7] = 0xf0095;
  puVar3[8] = temp_v8;
  puVar3[9] = 0xf0096;
  puVar3[10] = 1;
  puVar3[0xb] = 0xf023d;
  puVar2 = (unsigned int *)0x10000;
  FUN_001630d4(0x10000,0x100,0,0x30,1);
  *(unsigned int **)(param_1 + 0x18) = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar3 = *(unsigned int **)(param_1 + 0x18);
  *puVar3 = *(unsigned int *)(temp_v7 + 0x18) | (*(int *)(temp_v7 + 0x14) << 0x10);
  puVar3[1] = 0xf009a;
  temp_v1 = *(int *)(temp_v7 + 0x3c);
  if ((temp_v1 == 3 || temp_v1 == 4) || (temp_v1 == 5)) {
    temp_v3 = 1;
  }
  else {
    temp_v3 = 0;
  }
  temp_v4 = *(int *)(temp_v7 + 0x40);
  if (temp_v8 == 0xc) {
    temp_v5 = 2;
  }
  else {
    temp_v5 = 0;
  }
  temp_v6 = *(int *)(temp_v7 + 0x20);
  puVar3[3] = 0xf009b;
  puVar3[2] = (temp_v3 << 2) | (temp_v4 << 1) | (temp_v5 << 4) |
              ((unsigned int)(temp_v1 == 2 || temp_v1 == 5) << 0x18) | (temp_v6 << 0x1c);
  puVar3[5] = 0x4009c;
  puVar3[4] = 0;
  temp_v2 = *(unsigned int *)(temp_v7 + 0x30);
  puVar3[7] = 0xf009d;
  puVar3[6] = temp_v2 >> 3;
  puVar3[8] = temp_v8;
  puVar3[9] = 0xf009e;
  puVar3[10] = 1;
  puVar3[0xb] = 0xf023d;
  return;
}

} /* extern "C" */
