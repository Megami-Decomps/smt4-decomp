/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00401d18` (_code @ 0x401d18, 0x514 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015d8e0(int, unsigned int, int);
int asdMemoryAlloc(int, int, int, int, int);
int FUN_00341224(int, int, unsigned int, int, int, int, unsigned int);
int FUN_00401798(int, int);

/* stack frame of param_4: 9 slot(s), 30 byte(s) */
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
} param_4_stack;

/* Supplied declaration required: FUN_0015d8e0. */
/* Supplied declaration required: asdMemoryAlloc. */
extern unsigned int asdMemoryGetAllocatorA(void);
/* Supplied declaration required: FUN_00341224. */
/* Supplied declaration required: FUN_00401798. */
extern unsigned int FUN_00450f58(unsigned int *, unsigned int);


void FUN_00401d18(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int uStack_34;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned char *)(param_1 + 0x28) = 0;
  *(unsigned char *)(param_1 + 0x29) = 0;
  temp_v8 = 8;
  temp_v2 = 8;
  temp_v7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  temp_v0 = 3;
  do {
    if ((int)(unsigned int)*(unsigned short *)(temp_v7 + 0x24) < 1 << (temp_v0 & 0xff)) {
      temp_v8 = 1 << (temp_v0 & 0xff);
      break;
    }
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 0xb);
  temp_v0 = 3;
  do {
    if ((int)(unsigned int)*(unsigned short *)(temp_v7 + 0x26) < 1 << (temp_v0 & 0xff)) {
      temp_v2 = 1 << (temp_v0 & 0xff);
      if (temp_v2 >= 0x201) {
        temp_v2 = 0x200;
      }
      break;
    }
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 0xb);
  if (temp_v8 >= 0x201) {
    temp_v8 = 0x200;
  }
  if (param_4 != 0) {
    if (*(short *)(param_4 + 4) == 0xf) {
      temp_v2 = 0x200;
      temp_v8 = 0x200;
      *(unsigned char *)(param_1 + 0x28) = 1;
    }
    if ((*(short *)(param_4 + 4) == 0x10) && (*(char *)(param_4 + 0x98) != '\0')) {
      *(unsigned char *)(param_1 + 0x29) = 1;
    }
  }
  FUN_00341224(temp_v8,temp_v2,param_2,0x1908,0x8033,0x81a5,param_3);
  *(int *)(param_1 + 8) = temp_v8;
  temp_v1 = asdMemoryGetAllocatorA();
  uStack_34 = 1;
  temp_v11 = 0x2020000;
  temp_v14 = 0;
  temp_v15 = 1;
  temp_v12 = *(unsigned int *)(*(int *)(param_1 + 8) + 8);
  temp_v13 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x34);
  temp_v10 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x14);
  temp_v9 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x18);
  temp_v1 = FUN_00450f58((unsigned int *)&temp_v9,temp_v1);
  *(unsigned int *)(param_1 + 0xc) = temp_v1;
  temp_v1 = asdMemoryGetAllocatorA();
  FUN_0015d8e0(param_1 + 0xc,temp_v1,0);
  FUN_00401798(param_1,param_4);
  temp_v2 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  temp_v0 = *(unsigned int *)(temp_v2 + 0x34) & 0xff;
  puVar3 = (unsigned int *)0x10000;
  asdMemoryAlloc(0x10000,0x100,0,0x30,1);
  *(unsigned int **)(param_1 + 0x10) = puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar4 = *(unsigned int **)(param_1 + 0x10);
  *puVar4 = *(unsigned int *)(temp_v2 + 0x18) | (*(int *)(temp_v2 + 0x14) << 0x10);
  puVar4[1] = 0xf0082;
  temp_v8 = *(int *)(temp_v2 + 0x3c);
  if ((temp_v8 == 3 || temp_v8 == 4) || (temp_v8 == 5)) {
    temp_v7 = 1;
  }
  else {
    temp_v7 = 0;
  }
  if (temp_v0 == 0xc) {
    temp_v4 = 2;
  }
  else {
    temp_v4 = 0;
  }
  puVar4[2] = (temp_v7 << 2) | (*(int *)(temp_v2 + 0x40) << 1) | (temp_v4 << 4) |
              ((unsigned int)(temp_v8 == 2 || temp_v8 == 5) << 0x18) | (*(int *)(temp_v2 + 0x20) << 0x1c);
  puVar4[3] = 0xf0083;
  puVar4[5] = 0x40084;
  puVar4[4] = 0;
  puVar4[6] = *(unsigned int *)(temp_v2 + 0x30) >> 3;
  puVar4[7] = 0xf0085;
  puVar4[8] = temp_v0;
  puVar4[9] = 0xf008e;
  puVar4[10] = 1;
  puVar4[0xb] = 0xf023d;
  puVar3 = (unsigned int *)0x10000;
  asdMemoryAlloc(0x10000,0x100,0,0x30,1);
  *(unsigned int **)(param_1 + 0x14) = puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar4 = *(unsigned int **)(param_1 + 0x14);
  *puVar4 = *(unsigned int *)(temp_v2 + 0x18) | (*(int *)(temp_v2 + 0x14) << 0x10);
  puVar4[1] = 0xf0092;
  temp_v8 = *(int *)(temp_v2 + 0x3c);
  if ((temp_v8 == 3 || temp_v8 == 4) || (temp_v8 == 5)) {
    temp_v7 = 1;
  }
  else {
    temp_v7 = 0;
  }
  if (temp_v0 == 0xc) {
    temp_v4 = 2;
  }
  else {
    temp_v4 = 0;
  }
  puVar4[2] = (temp_v7 << 2) | (*(int *)(temp_v2 + 0x40) << 1) | (temp_v4 << 4) |
              ((unsigned int)(temp_v8 == 2 || temp_v8 == 5) << 0x18) | (*(int *)(temp_v2 + 0x20) << 0x1c);
  puVar4[3] = 0xf0093;
  puVar4[5] = 0x40094;
  puVar4[4] = 0;
  puVar4[6] = *(unsigned int *)(temp_v2 + 0x30) >> 3;
  puVar4[7] = 0xf0095;
  puVar4[8] = temp_v0;
  puVar4[9] = 0xf0096;
  puVar4[10] = 1;
  puVar4[0xb] = 0xf023d;
  puVar3 = (unsigned int *)0x10000;
  asdMemoryAlloc(0x10000,0x100,0,0x30,1);
  *(unsigned int **)(param_1 + 0x18) = puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar4 = *(unsigned int **)(param_1 + 0x18);
  *puVar4 = *(unsigned int *)(temp_v2 + 0x18) | (*(int *)(temp_v2 + 0x14) << 0x10);
  puVar4[1] = 0xf009a;
  temp_v8 = *(int *)(temp_v2 + 0x3c);
  if ((temp_v8 == 3 || temp_v8 == 4) || (temp_v8 == 5)) {
    temp_v7 = 1;
  }
  else {
    temp_v7 = 0;
  }
  temp_v4 = *(int *)(temp_v2 + 0x40);
  if (temp_v0 == 0xc) {
    temp_v5 = 2;
  }
  else {
    temp_v5 = 0;
  }
  temp_v6 = *(int *)(temp_v2 + 0x20);
  puVar4[3] = 0xf009b;
  puVar4[2] = (temp_v7 << 2) | (temp_v4 << 1) | (temp_v5 << 4) |
              ((unsigned int)(temp_v8 == 2 || temp_v8 == 5) << 0x18) | (temp_v6 << 0x1c);
  puVar4[5] = 0x4009c;
  puVar4[4] = 0;
  temp_v3 = *(unsigned int *)(temp_v2 + 0x30);
  puVar4[7] = 0xf009d;
  puVar4[6] = temp_v3 >> 3;
  puVar4[8] = temp_v0;
  puVar4[9] = 0xf009e;
  puVar4[10] = 1;
  puVar4[0xb] = 0xf023d;
  return;
}

} /* extern "C" */
