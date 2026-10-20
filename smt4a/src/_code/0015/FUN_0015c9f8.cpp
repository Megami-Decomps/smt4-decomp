/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c9f8` (_code @ 0x15c9f8, 0x2d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char DAT_0055b548; /* 0x55b548 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
extern unsigned int *FUN_00172088(unsigned char *);
extern unsigned int *FUN_001720c0(int *);
extern unsigned int *FUN_001723b8(unsigned char *, int *);


unsigned int * FUN_0015c9f8(int *param_1,int *param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *unaff_r5;
  char unaff_r6;
  char unaff_r7;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *temp_v5;
  char temp_v6;
  unsigned int uStack_2b;
  unsigned char temp_v7 [8];
  
  if (*param_1 == 0) {
    puVar2 = (unsigned int *)FUN_00172088(temp_v7);
    (*(unsigned int *)&temp_v6) = romwright_piece_3_1(uStack_2b,1);
    temp_v5 = puVar2;
    if ((unsigned int **)param_1 != &temp_v5) {
      temp_v5 = (unsigned int *)*param_1;
      (*(unsigned int *)&temp_v6) = romwright_piece_3_1(uStack_2b,(char)param_1[1]);
      *(unsigned char *)(param_1 + 1) = 1;
      *param_1 = (int)puVar2;
    }
    puVar2 = temp_v5;
    if ((temp_v5 != (unsigned int *)0x0) && (temp_v6 != '\0')) {
      (**(romwright_code **)*temp_v5)(temp_v5);
      piVar3 = (int *)puVar2[1];
      (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar2);
    }
  }
  if (param_1[2] == 0) {
    piVar3 = param_1 + 2;
    puVar2 = (unsigned int *)FUN_001723b8(temp_v7,param_2);
    (*(unsigned int *)&temp_v6) = romwright_piece_3_1(uStack_2b,1);
    temp_v5 = puVar2;
    if ((unsigned int **)piVar3 != &temp_v5) {
      temp_v5 = (unsigned int *)*piVar3;
      (*(unsigned int *)&temp_v6) = romwright_piece_3_1(uStack_2b,(char)param_1[3]);
      *(unsigned char *)(param_1 + 3) = 1;
      *piVar3 = (int)puVar2;
    }
    puVar2 = temp_v5;
    if ((temp_v5 != (unsigned int *)0x0) && (temp_v6 != '\0')) {
      (**(romwright_code **)*temp_v5)(temp_v5);
      piVar3 = (int *)puVar2[1];
      (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar2);
    }
  }
  if (param_1[4] == 0) {
    piVar3 = param_1 + 4;
    puVar2 = (unsigned int *)FUN_001720c0(param_2);
    (*(unsigned int *)&temp_v6) = romwright_piece_3_1(uStack_2b,1);
    temp_v5 = puVar2;
    if ((unsigned int **)piVar3 != &temp_v5) {
      temp_v5 = (unsigned int *)*piVar3;
      (*(unsigned int *)&temp_v6) = romwright_piece_3_1(uStack_2b,(char)param_1[5]);
      *(unsigned char *)(param_1 + 5) = 1;
      *piVar3 = (int)puVar2;
    }
    puVar2 = temp_v5;
    if ((temp_v5 != (unsigned int *)0x0) && (temp_v6 != '\0')) {
      (**(romwright_code **)*temp_v5)(temp_v5);
      piVar3 = (int *)puVar2[1];
      (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar2);
    }
  }
  puVar2 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x24,4);
  temp_v1 = puVar2 != (unsigned int *)0x0;
  if (temp_v1) {
    unaff_r7 = (char)param_1[1];
    unaff_r5 = (unsigned int *)0x0;
    temp_v4 = *param_1;
    *param_1 = 0;
    unaff_r6 = (char)param_1[3];
    temp_v3 = param_1[2];
    param_1[2] = 0;
    temp_v0 = param_1[5];
    temp_v2 = param_1[4];
    param_1[4] = 0;
    *puVar2 = (unsigned int)&DAT_0055b548;
    puVar2[1] = (unsigned int)param_2;
    puVar2[2] = temp_v4;
    *(char *)(puVar2 + 3) = unaff_r7;
    puVar2[4] = temp_v3;
    *(char *)(puVar2 + 5) = unaff_r6;
    puVar2[6] = temp_v2;
    *(char *)(puVar2 + 7) = (char)temp_v0;
    *(unsigned char *)(puVar2 + 8) = 0;
  }
  puVar4 = puVar2;
  if ((temp_v1 && unaff_r5 != (unsigned int *)0x0) && (puVar4 = (unsigned int *)0x0, unaff_r6 != '\0')) {
    (**(romwright_code **)*unaff_r5)(unaff_r5);
    puVar4 = (unsigned int *)(**(romwright_code **)(*(int *)unaff_r5[1] + 0xc))((int *)unaff_r5[1],unaff_r5);
  }
  if (temp_v1 && unaff_r5 != (unsigned int *)0x0) {
    puVar4 = (unsigned int *)(int)unaff_r7;
  }
  if ((temp_v1 && unaff_r5 != (unsigned int *)0x0) && puVar4 != (unsigned int *)0x0) {
    (**(romwright_code **)*unaff_r5)(unaff_r5);
    (**(romwright_code **)(*(int *)unaff_r5[1] + 0xc))((int *)unaff_r5[1],unaff_r5);
  }
  return puVar2;
}

} /* extern "C" */
