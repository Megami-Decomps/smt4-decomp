/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f9d0` (_code @ 0x11f9d0, 0x5e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 33 slot(s), 132 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_2_stack;

extern unsigned char DAT_004211e4; /* 0x4211e4 */

/* Supplied declaration required: FUN_0012bf24. */
extern int FUN_0012cf68(unsigned int *, int **);
extern unsigned int FUN_0012d5e0(int *);
/* Supplied declaration required: FUN_002b5228. */


/* WARNING: Removing unreachable block (ram,0x0011ff7c) */
/* WARNING: Removing unreachable block (ram,0x0011ff40) */
/* WARNING: Removing unreachable block (ram,0x0011ff50) */
/* WARNING: Removing unreachable block (ram,0x0011fe44) */
/* WARNING: Removing unreachable block (ram,0x0011fe54) */
/* WARNING: Removing unreachable block (ram,0x0011ff78) */
/* WARNING: Removing unreachable block (ram,0x0011ff84) */

int FUN_0011f9d0(unsigned int *param_1,int *param_2)

{
/* irregular: 9 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int *temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int *temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int *temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  int *temp_v17;
  int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  int *temp_v21;
  int temp_v22;
  int temp_v23;
  unsigned int temp_v24;
  int *temp_v25;
  int temp_v26;
  int temp_v27;
  unsigned int temp_v28;
  int *temp_v29;
  int temp_v30;
  int temp_v31;
  unsigned int temp_v32;
  int *temp_v33;
  int temp_v34;
  int temp_v35;
  unsigned int temp_v36;
  int **temp_v37;
  
  puVar4 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x140,4);
  temp_v3 = 0;
  if (puVar4 != (unsigned int *)0x0) {
    temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,0x4c,4);
    temp_v3 = 0;
    if (temp_v1 != 0) {
      FUN_0012bf24(temp_v1,param_2);
      temp_v2 = param_1[4];
      if (temp_v2 == 0) {
        temp_v2 = FUN_0012d5e0(param_2);
        param_1[4] = temp_v2;
      }
      temp_v11 = 0;
      temp_v10 = 0;
      temp_v12 = 0;
      temp_v15 = 0;
      temp_v9 = (int *)0x0;
      temp_v16 = 0;
      temp_v13 = (int *)0x0;
      temp_v14 = 0;
      temp_v17 = (int *)0x0;
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v21 = (int *)0x0;
      temp_v22 = 0;
      temp_v23 = 0;
      temp_v24 = 0;
      temp_v37 = &temp_v21;
      temp_v20 = 0;
      temp_v4 = param_1[3];
      temp_v5 = param_2;
      if (temp_v4 == 0) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v4 << 2,0x20);
      }
      piVar1 = temp_v5;
      temp_v6 = temp_v3;
      temp_v8 = temp_v4 & 0x3fffffff;
      if (temp_v37 != &temp_v5) {
        temp_v6 = temp_v22;
        temp_v8 = temp_v24;
        temp_v5 = temp_v21;
        temp_v21 = piVar1;
        temp_v22 = temp_v3;
        temp_v23 = temp_v3;
        temp_v24 = temp_v4 & 0x3fffffff;
      }
      temp_v7 = temp_v6;
      temp_v3 = 0;
      if (temp_v5 != (int *)0x0) {
        temp_v3 = temp_v6;
      }
      if (temp_v5 != (int *)0x0 && temp_v3 != 0) {
        (**(romwright_code **)(*temp_v5 + 0xc))(temp_v5,temp_v6);
      }
      temp_v37 = &temp_v9;
      temp_v4 = *param_1;
      temp_v33 = param_2;
      if (temp_v4 == 0) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v4 << 2,0x20);
      }
      piVar1 = temp_v33;
      temp_v34 = temp_v3;
      temp_v36 = temp_v4 & 0x3fffffff;
      if (temp_v37 != &temp_v33) {
        temp_v34 = temp_v10;
        temp_v36 = temp_v12;
        temp_v33 = temp_v9;
        temp_v9 = piVar1;
        temp_v10 = temp_v3;
        temp_v11 = temp_v3;
        temp_v12 = temp_v4 & 0x3fffffff;
      }
      temp_v35 = temp_v34;
      temp_v3 = 0;
      if (temp_v33 != (int *)0x0) {
        temp_v3 = temp_v34;
      }
      if (temp_v33 != (int *)0x0 && temp_v3 != 0) {
        (**(romwright_code **)(*temp_v33 + 0xc))(temp_v33,temp_v34);
      }
      temp_v37 = &temp_v13;
      temp_v4 = param_1[2];
      temp_v29 = param_2;
      if (temp_v4 == 0) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v4 << 2,0x20);
      }
      piVar1 = temp_v29;
      temp_v30 = temp_v3;
      temp_v32 = temp_v4 & 0x3fffffff;
      if (temp_v37 != &temp_v29) {
        temp_v30 = temp_v14;
        temp_v32 = temp_v16;
        temp_v29 = temp_v13;
        temp_v13 = piVar1;
        temp_v14 = temp_v3;
        temp_v15 = temp_v3;
        temp_v16 = temp_v4 & 0x3fffffff;
      }
      temp_v31 = temp_v30;
      temp_v3 = 0;
      if (temp_v29 != (int *)0x0) {
        temp_v3 = temp_v30;
      }
      if (temp_v29 != (int *)0x0 && temp_v3 != 0) {
        (**(romwright_code **)(*temp_v29 + 0xc))(temp_v29,temp_v30);
      }
      temp_v4 = param_1[1];
      if (temp_v4 == 0) {
        temp_v19 = 0;
        temp_v25 = param_2;
      }
      else {
        temp_v25 = param_2;
        temp_v19 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v4 << 2,0x20);
      }
      piVar3 = temp_v25;
      temp_v0 = temp_v18;
      piVar1 = temp_v17;
      temp_v28 = temp_v20;
      temp_v26 = temp_v18;
      temp_v25 = temp_v17;
      temp_v17 = piVar3;
      temp_v27 = temp_v18;
      temp_v3 = 0;
      if (piVar1 != (int *)0x0) {
        temp_v3 = temp_v18;
      }
      temp_v18 = temp_v19;
      temp_v20 = temp_v4 & 0x3fffffff;
      if (piVar1 != (int *)0x0 && temp_v3 != 0) {
        (**(romwright_code **)(*piVar1 + 0xc))(piVar1,temp_v0);
      }
      *puVar4 = (unsigned int)&DAT_004211e4;
      puVar4[1] = (unsigned int)param_2;
      puVar4[2] = temp_v1;
      *(unsigned char *)(puVar4 + 3) = 1;
      *(unsigned char *)(puVar4 + 4) = 0;
      *(unsigned char *)((int)puVar4 + 0x11) = 0;
      *(unsigned char *)((int)puVar4 + 0x12) = 1;
      *(unsigned char *)((int)puVar4 + 0x13) = 1;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      temp_v1 = FUN_0012cf68(puVar4 + 0x10,&temp_v9);
      temp_v3 = temp_v1 - 0x40;
      FUN_002b5228(temp_v1 + 0xc0,0x1fff);
      *(unsigned int *)(temp_v1 + 0xec) = temp_v2;
      *(unsigned char *)(temp_v1 + 0xf0) = 1;
      temp_v23 = temp_v22;
      temp_v1 = 0;
      if (temp_v21 != (int *)0x0) {
        temp_v1 = temp_v22;
      }
      if (temp_v21 != (int *)0x0 && temp_v1 != 0) {
        (**(romwright_code **)(*temp_v21 + 0xc))(temp_v21,temp_v22);
      }
      temp_v19 = temp_v18;
      temp_v1 = 0;
      if (temp_v17 != (int *)0x0) {
        temp_v1 = temp_v18;
      }
      if (temp_v17 != (int *)0x0 && temp_v1 != 0) {
        (**(romwright_code **)(*temp_v17 + 0xc))(temp_v17,temp_v18);
      }
      temp_v15 = temp_v14;
      temp_v1 = 0;
      if (temp_v13 != (int *)0x0) {
        temp_v1 = temp_v14;
      }
      if (temp_v13 != (int *)0x0 && temp_v1 != 0) {
        (**(romwright_code **)(*temp_v13 + 0xc))(temp_v13,temp_v14);
      }
      temp_v11 = temp_v10;
      temp_v1 = 0;
      if (temp_v9 != (int *)0x0) {
        temp_v1 = temp_v10;
      }
      if (temp_v9 != (int *)0x0 && temp_v1 != 0) {
        (**(romwright_code **)(*temp_v9 + 0xc))(temp_v9,temp_v10);
      }
    }
  }
  return temp_v3;
}
