/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111724` (_code @ 0x111724, 0x320 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011cfb4(unsigned int);
int FUN_0011f9d0(int *, int *);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char DAT_004213b8; /* 0x4213b8 */
extern unsigned char DAT_00421688; /* 0x421688 */
extern unsigned char DAT_00421728; /* 0x421728 */
extern unsigned char DAT_00421740; /* 0x421740 */
extern unsigned int DAT_004dae2c; /* 0x4dae2c */

/* Supplied declaration required: FUN_0011cfb4. */
extern int FUN_0011da9c(int *);
/* Supplied declaration required: FUN_0011f9d0. */
extern unsigned int FUN_002c2218(void);


/* WARNING: Removing unreachable block (ram,0x00111928) */
/* WARNING: Removing unreachable block (ram,0x00111930) */

unsigned int * FUN_00111724(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int uStack_34;
  unsigned int temp_v9;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  puVar2 = (unsigned int *)&temp_v8;
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x78,4);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(unsigned char *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(unsigned char *)(puVar1 + 0xc) = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1c] = 0;
  }
  temp_v8 = 0x20;
  uStack_34 = 0x80;
  temp_v9 = 0x20;
  uStack_2c = 4;
  uStack_28 = 0;
  FUN_0011f9d0(&temp_v8,param_1);
  puVar1[1] = (unsigned int)puVar2;
  puVar2 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,8,4);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = (unsigned int)&DAT_00421728;
    puVar2[1] = (unsigned int)param_1;
  }
  puVar1[2] = (unsigned int)puVar2;
  puVar2 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,8,4);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = (unsigned int)&DAT_00421740;
    puVar2[1] = (unsigned int)param_1;
  }
  puVar1[3] = (unsigned int)puVar2;
  puVar2 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,8,4);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = (unsigned int)&DAT_00421688;
    puVar2[1] = (unsigned int)param_1;
  }
  puVar1[4] = (unsigned int)puVar2;
  temp_v3 = DAT_004dae2c;
  puVar2 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x2c,4);
  puVar3 = &DAT_004213b8;
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = (unsigned int)&DAT_004213b8;
    puVar2[1] = (unsigned int)param_1;
    puVar2[2] = (unsigned int)param_1;
    if (temp_v3 == 0) {
      temp_v0 = 0;
      puVar2[3] = 0;
    }
    else {
      temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1,temp_v3 << 4,0x20);
      puVar2[3] = temp_v0;
    }
    puVar2[4] = temp_v0;
    puVar3 = (unsigned char *)(temp_v3 & 0x3fffffff);
    puVar2[5] = (unsigned int)puVar3;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(unsigned char *)(puVar2 + 10) = 0;
  }
  puVar1[5] = (unsigned int)puVar2;
  temp_v3 = puVar2[3];
  temp_v6 = puVar2[4];
  temp_v5 = puVar1[4];
  temp_v4 = puVar1[2];
  temp_v7 = puVar1[3];
  if (temp_v3 < temp_v6) {
    puVar3 = (unsigned char *)(temp_v6 - temp_v3);
  }
  if (temp_v3 < temp_v6) {
    puVar3 = (unsigned char *)((int)puVar3 << 0x1b);
  }
  if (temp_v3 < temp_v6) {
    temp_v1 = (unsigned int)puVar3 >> 0x1f;
  }
  else {
    temp_v1 = 0;
  }
  temp_v2 = temp_v1 + 1;
  if (temp_v2 < ((int)(temp_v6 - temp_v3) >> 4) + 1) {
    do {
      temp_v2 = temp_v2 + 2;
    } while (temp_v2 < ((int)(temp_v6 - temp_v3) >> 4) + 1);
  }
  puVar2[4] = temp_v3;
  *(unsigned char *)(puVar2 + 10) = 0;
  if (temp_v5 != 0) {
    puVar2[6] = temp_v5;
  }
  if (temp_v7 != 0) {
    puVar2[7] = temp_v7;
  }
  if (temp_v4 != 0) {
    puVar2[8] = temp_v4;
    puVar2[9] = temp_v4;
  }
  temp_v4 = FUN_0011da9c(param_1);
  puVar1[6] = temp_v4;
  *(unsigned int *)(temp_v4 + 8) = puVar1[1];
  temp_v4 = (**(romwright_code **)(*param_1 + 8))(param_1,0x60,4);
  if (temp_v4 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = FUN_002c2218();
  }
  FUN_0011cfb4(temp_v0);
  puVar1[0x1c] = temp_v0;
  *puVar1 = (unsigned int)param_1;
  return puVar1;
}

} /* extern "C" */
