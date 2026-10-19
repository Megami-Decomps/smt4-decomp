/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017314c` (_code @ 0x17314c, 0x3d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 6 slot(s), 18 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
extern unsigned int **FUN_0017250c(int *);
extern unsigned int **FUN_0017261c(int *);
extern unsigned int *FUN_001a1e28(void);
extern int *FUN_001a46c0(int, int *, unsigned int *, int);


int * FUN_0017314c(int param_1,int *param_2)

{
  unsigned char temp_v0;
  unsigned int **ppuVar2;
  int *piVar3;
  unsigned int *puVar4;
  int *piVar5;
  unsigned int *puVar6;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int **temp_v9;
  unsigned int **temp_v10;
  unsigned int uStack_40;
  unsigned int *temp_v11;
  char temp_v12;
  unsigned int *temp_v13;
  char temp_v14;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar6 = (unsigned int *)(param_1 + 0x10);
    ppuVar2 = (unsigned int **)FUN_0017250c(param_2);
    temp_v10 = (unsigned int **)romwright_piece_3_1((((unsigned int)(temp_v10) >> 8) & 0xffffffU),1);
    temp_v9 = ppuVar2;
    if ((unsigned int ***)puVar6 != &temp_v9) {
      temp_v9 = (unsigned int **)*puVar6;
      temp_v10 = (unsigned int **)romwright_piece_3_1((((unsigned int)(temp_v10) >> 8) & 0xffffffU),*(unsigned char *)(param_1 + 0x14));
      *(unsigned char *)(param_1 + 0x14) = 1;
      *puVar6 = (unsigned int)ppuVar2;
    }
    ppuVar2 = temp_v9;
    if ((temp_v9 != (unsigned int **)0x0) && ((char)temp_v10 != '\0')) {
      (*(romwright_code *)**temp_v9)(temp_v9);
      piVar3 = (int *)ppuVar2[1];
      (**(romwright_code **)(*piVar3 + 0xc))(piVar3,ppuVar2);
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar6 = (unsigned int *)(param_1 + 0x18);
    ppuVar2 = (unsigned int **)FUN_0017261c(param_2);
    temp_v10 = (unsigned int **)romwright_piece_3_1((((unsigned int)(temp_v10) >> 8) & 0xffffffU),1);
    temp_v9 = ppuVar2;
    if ((unsigned int ***)puVar6 != &temp_v9) {
      temp_v9 = (unsigned int **)*puVar6;
      temp_v10 = (unsigned int **)romwright_piece_3_1((((unsigned int)(temp_v10) >> 8) & 0xffffffU),*(unsigned char *)(param_1 + 0x1c));
      *(unsigned char *)(param_1 + 0x1c) = 1;
      *puVar6 = (unsigned int)ppuVar2;
    }
    ppuVar2 = temp_v9;
    if ((temp_v9 != (unsigned int **)0x0) && ((char)temp_v10 != '\0')) {
      (*(romwright_code *)**temp_v9)(temp_v9);
      piVar3 = (int *)ppuVar2[1];
      (**(romwright_code **)(*piVar3 + 0xc))(piVar3,ppuVar2);
    }
  }
  temp_v1 = 200;
  puVar4 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,200,4);
  puVar6 = puVar4;
  do {
    temp_v1 = temp_v1 - 1;
    *(unsigned char *)puVar6 = 0;
    puVar6 = (unsigned int *)((int)puVar6 + 1);
  } while (temp_v1 != 0);
  piVar3 = (int *)(puVar4 + 0x2f);
  temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x10) + 0x10))();
  if (temp_v1 != 0) {
    *piVar3 = temp_v1 - (int)piVar3;
  }
  else {
    *piVar3 = 0;
  }
  piVar3 = (int *)(puVar4 + 0x30);
  temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x18) + 0x10))();
  if (temp_v1 != 0) {
    *piVar3 = temp_v1 - (int)piVar3;
  }
  else {
    *piVar3 = 0;
  }
  piVar3 = (int *)(**(romwright_code **)(**(int **)(param_1 + 0x10) + 0x10))();
  temp_v1 = *piVar3;
  if (temp_v1 == -0x80000000) {
    puVar4[0x2d] = 0;
  }
  else if (temp_v1 == 0x20000000) {
    puVar4[0x2d] = 2;
  }
  else if (temp_v1 == 0x40000000) {
    puVar4[0x2d] = 1;
  }
  piVar3 = (int *)(**(romwright_code **)(**(int **)(param_1 + 0x18) + 0x10))();
  temp_v1 = *piVar3;
  if (temp_v1 == -0x80000000) {
    puVar4[0x2e] = 1;
  }
  else if (temp_v1 == 0x20000000) {
    puVar4[0x2e] = 0;
  }
  else if (temp_v1 == 0x40000000) {
    puVar4[0x2e] = 2;
  }
  puVar4[2] = 0x7010000;
  puVar4[1] = 0x4e465443;
  *puVar4 = 0x4000000a;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[3] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0x3f800000;
  puVar4[0xd] = 0x3f800000;
  puVar4[0xe] = 0x3f800000;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar6 = (unsigned int *)FUN_001a1e28();
  temp_v2 = puVar6[1];
  temp_v3 = puVar6[2];
  temp_v4 = puVar6[3];
  temp_v5 = puVar6[4];
  temp_v6 = puVar6[5];
  temp_v7 = puVar6[6];
  temp_v8 = puVar6[7];
  puVar4[0x21] = *puVar6;
  puVar4[0x22] = temp_v2;
  puVar4[0x23] = temp_v3;
  puVar4[0x24] = temp_v4;
  puVar4[0x25] = temp_v5;
  puVar4[0x26] = temp_v6;
  puVar4[0x27] = temp_v7;
  puVar4[0x28] = temp_v8;
  temp_v2 = puVar6[8];
  temp_v3 = puVar6[9];
  temp_v4 = puVar6[10];
  puVar4[0x2c] = puVar6[0xb];
  puVar4[0x29] = temp_v2;
  puVar4[0x2a] = temp_v3;
  puVar4[0x2b] = temp_v4;
  puVar4[6] = puVar4[6] | 1;
  temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,0x29c,4);
  temp_v0 = 0;
  if (temp_v1 == 0) {
    puVar6 = (unsigned int *)0x0;
    piVar3 = (int *)0x0;
  }
  else {
    temp_v11 = *(unsigned int **)(param_1 + 0x18);
    temp_v9 = &temp_v13;
    temp_v12 = *(char *)(param_1 + 0x1c);
    temp_v0 = 1;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v13 = *(unsigned int **)(param_1 + 0x10);
    temp_v14 = *(char *)(param_1 + 0x14);
    *(unsigned int *)(param_1 + 0x10) = 0;
    temp_v10 = &temp_v11;
    uStack_40 = 1;
    piVar3 = (int *)FUN_001a46c0(temp_v1,param_2,puVar4,param_1);
    puVar4 = temp_v13;
    puVar6 = (unsigned int *)0x0;
    if ((temp_v13 != (unsigned int *)0x0) && (puVar6 = (unsigned int *)0x0, temp_v14 != '\0')) {
      (**(romwright_code **)*temp_v13)(temp_v13);
      piVar5 = (int *)puVar4[1];
      puVar6 = (unsigned int *)(**(romwright_code **)(*piVar5 + 0xc))(piVar5,puVar4);
    }
  }
  puVar4 = temp_v11;
  if (temp_v0) {
    puVar6 = temp_v11;
  }
  if ((temp_v0 && puVar6 != (unsigned int *)0x0) && (temp_v12 != '\0')) {
    (**(romwright_code **)*temp_v11)(temp_v11);
    piVar5 = (int *)puVar4[1];
    (**(romwright_code **)(*piVar5 + 0xc))(piVar5,puVar4);
  }
  (**(romwright_code **)(*piVar3 + 0x24))(piVar3,param_2);
  return piVar3;
}
