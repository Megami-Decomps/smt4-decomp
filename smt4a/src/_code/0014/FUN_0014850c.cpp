/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014850c` (_code @ 0x14850c, 0x374 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015aef0(unsigned char *, int *);
int FUN_0015c9f8(unsigned int **, int *);
int FUN_0015d490(unsigned int **, int *);

typedef int romwright_code(...);
/* stack frame of param_2: 27 slot(s), 96 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
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
    unsigned char sp80; /* 0x80: local_80 */
    unsigned char sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned char sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned char sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_0015aef0. */
/* Supplied declaration required: FUN_0015c9f8. */
extern unsigned int FUN_0015d31c(unsigned char *, int *);
extern unsigned int FUN_0015d444(unsigned char **, int *);
/* Supplied declaration required: FUN_0015d490. */
extern unsigned int *FUN_00172088(unsigned char *, int *);
extern unsigned int *FUN_001723b8(unsigned char *, int *);


unsigned int * FUN_0014850c(int *param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v1;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned int **ppuVar8;
  unsigned int **ppuVar9;
  unsigned int **ppuVar10;
  unsigned int *temp_v2;
  unsigned int temp_v3;
  unsigned int *temp_v4;
  unsigned char temp_v5;
  unsigned int uStack_a3;
  unsigned char *temp_v6 [2];
  unsigned int *temp_v7;
  char temp_v8;
  unsigned int *temp_v9;
  char temp_v10;
  unsigned int *temp_v11;
  char temp_v12;
  unsigned char temp_v13 [4];
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned char temp_v29 [4];
  unsigned char temp_v30 [8];
  unsigned char temp_v31 [12];
  
  ppuVar9 = &temp_v2;
  ppuVar10 = &temp_v2;
  puVar2 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x14,4);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  temp_v13[0] = 1;
  temp_v26 = 0x40;
  temp_v27 = 0x40;
  temp_v14 = *param_2;
  puVar3 = temp_v13;
  temp_v16 = param_2[1];
  temp_v17 = param_2[2];
  temp_v18 = param_2[3];
  temp_v19 = param_2[4];
  temp_v20 = param_2[5];
  temp_v21 = param_2[6];
  temp_v22 = param_2[7];
  temp_v23 = param_2[8];
  temp_v24 = param_2[9];
  temp_v25 = param_2[10];
  temp_v28 = param_2[0xc];
  temp_v15 = param_2[0xd];
  FUN_0015aef0(puVar3,param_1);
  puVar2[1] = (unsigned int)puVar3;
  temp_v1 = FUN_0015d31c(temp_v31,param_1);
  puVar2[2] = temp_v1;
  puVar5 = (unsigned int *)FUN_001723b8(temp_v29,param_1);
  puVar6 = (unsigned int *)FUN_00172088(temp_v30,param_1);
  temp_v7 = (unsigned int *)0x0;
  temp_v8 = '\x01';
  temp_v9 = (unsigned int *)0x0;
  ppuVar8 = &temp_v7;
  temp_v11 = (unsigned int *)0x0;
  temp_v12 = '\x01';
  (*(unsigned int *)&temp_v5) = romwright_piece_3_1(uStack_a3,1);
  temp_v4 = puVar5;
  if (&temp_v9 != &temp_v4) {
    temp_v4 = (unsigned int *)0x0;
    temp_v9 = puVar5;
  }
  puVar5 = temp_v4;
  temp_v10 = '\x01';
  if (temp_v4 != (unsigned int *)0x0) {
    (**(romwright_code **)*temp_v4)(temp_v4);
    piVar7 = (int *)puVar5[1];
    (**(romwright_code **)(*piVar7 + 0xc))(piVar7,puVar5);
  }
  temp_v0 = temp_v8;
  temp_v3 = romwright_piece_3_1((((unsigned int)(temp_v3) >> 8) & 0xffffffU),1);
  temp_v2 = puVar6;
  if (ppuVar8 != &temp_v2) {
    temp_v2 = temp_v7;
    temp_v8 = '\x01';
    temp_v3 = romwright_piece_3_1((((unsigned int)(temp_v3) >> 8) & 0xffffffU),temp_v0);
    temp_v7 = puVar6;
  }
  puVar5 = temp_v2;
  if ((temp_v2 != (unsigned int *)0x0) && ((char)temp_v3 != '\0')) {
    (**(romwright_code **)*temp_v2)(temp_v2);
    piVar7 = (int *)puVar5[1];
    (**(romwright_code **)(*piVar7 + 0xc))(piVar7,puVar5);
  }
  FUN_0015c9f8(ppuVar8,param_1);
  puVar5 = temp_v11;
  puVar2[3] = (unsigned int)ppuVar8;
  if ((temp_v11 != (unsigned int *)0x0) && (temp_v12 != '\0')) {
    (**(romwright_code **)*temp_v11)(temp_v11);
    piVar7 = (int *)puVar5[1];
    (**(romwright_code **)(*piVar7 + 0xc))(piVar7,puVar5);
  }
  puVar5 = temp_v9;
  if ((temp_v9 != (unsigned int *)0x0) && (temp_v10 != '\0')) {
    (**(romwright_code **)*temp_v9)(temp_v9);
    piVar7 = (int *)puVar5[1];
    (**(romwright_code **)(*piVar7 + 0xc))(piVar7,puVar5);
  }
  puVar5 = temp_v7;
  if ((temp_v7 != (unsigned int *)0x0) && (temp_v8 != '\0')) {
    (**(romwright_code **)*temp_v7)(temp_v7);
    piVar7 = (int *)puVar5[1];
    (**(romwright_code **)(*piVar7 + 0xc))(piVar7,puVar5);
  }
  temp_v3 = 0x80;
  temp_v2 = (unsigned int *)0x1;
  if (param_2[0xe] != 0) {
    temp_v3 = param_2[0xe];
    FUN_0015d490(&temp_v2,param_1);
    ppuVar10 = ppuVar9;
  }
  else {
    temp_v2 = (unsigned int *)0x0;
    FUN_0015d490(&temp_v2,param_1);
  }
  temp_v6[0] = (unsigned char *)ppuVar10;
  temp_v1 = FUN_0015d444(temp_v6,param_1);
  puVar2[4] = temp_v1;
  *puVar2 = (unsigned int)param_1;
  return puVar2;
}

} /* extern "C" */
