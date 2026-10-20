/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010788a` (_code @ 0x10788a, 0x29e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001221a2(...);
int FUN_001358f2(unsigned short **, unsigned short *, int *);
int sharedRefRelease(int *);
int bufferAssignByte(int *, unsigned char [4]);
int strHolderAssignOneWide(...);
int FUN_002efa58(int *, int, int);
int bitFieldSet(int *, int);
int FUN_002effdc(int *);
int vectorCount2_002f00e8(unsigned short **);
int FUN_002f012e(...);

typedef int romwright_code(...);
/* stack frame of param_1: 15 slot(s), 55 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned short sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned char sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_001221a2. */
/* Supplied declaration required: FUN_001358f2. */
/* Supplied declaration required: sharedRefRelease. */
extern int operatorNew(unsigned int);
/* Supplied declaration required: bufferAssignByte. */
extern int FUN_002eb7d0(unsigned int, unsigned int);
extern int *FUN_002ed258(int, int *);
/* Supplied declaration required: strHolderAssignOneWide. */
extern int *arrayElementAddress_002efa50(int, int);
/* Supplied declaration required: FUN_002efa58. */
extern int bitFieldTest(unsigned int *);
/* Supplied declaration required: bitFieldSet. */
extern int *FUN_002eff58(int, unsigned int);
extern int FUN_002eff84(void);
extern int *FUN_002eff90(int, unsigned int);
/* Supplied declaration required: FUN_002effdc. */
extern int wordRefsDiffer_002f000c(int *, unsigned int *);
/* Supplied declaration required: vectorCount2_002f00e8. */
extern int FUN_002f00f0(int, int);
/* Supplied declaration required: FUN_002f012e. */


void FUN_0010788a(int param_1)

{
/* irregular: 1 goto(s); 10 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  unsigned short *puVar6;
  unsigned short *puVar7;
  romwright_code *pcVar8;
  int temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [4];
  unsigned short *temp_v8;
  unsigned short *temp_v9;
  unsigned short *temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned short temp_v13 [10];
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  
  temp_v16 = 1;
  temp_v0 = *(char *)(*(int *)(param_1 + 4) + 4);
  if ((temp_v0 != '\n') && (temp_v0 != '\x02')) {
    temp_v1 = FUN_002eb7d0(0x20,0);
    if (temp_v1 == 0) {
      return;
    }
    piVar3 = (int *)FUN_002eff58(temp_v1,0x80);
    if (piVar3 == (int *)0x0) {
      return;
    }
    temp_v1 = FUN_002eff84();
    if (temp_v1 == 0) {
      (**(romwright_code **)(*piVar3 + 4))(piVar3);
      return;
    }
    temp_v1 = operatorNew(0x10);
    if (temp_v1 != 0) {
      piVar4 = (int *)FUN_002ed258(temp_v1,piVar3);
    }
    else {
      piVar4 = (int *)0x0;
    }
    sharedRefRelease(piVar3);
  }
  else {
    temp_v16 = 0;
    temp_v1 = operatorNew(0x10);
    if (temp_v1 != 0) {
      piVar4 = (int *)FUN_002eff90(temp_v1,0x80);
    }
    else {
      piVar4 = (int *)0x0;
    }
  }
  temp_v8 = (unsigned short *)0x0;
  temp_v9 = (unsigned short *)0x0;
  temp_v10 = (unsigned short *)0x0;
  temp_v11 = param_1 + 0x90;
  temp_v12 = param_1 + 0x164;
  temp_v17 = param_1 + 0x100;
  for (temp_v1 = 0; temp_v1 < (int)(*(unsigned short *)(temp_v17 + 4) + 1); temp_v1 = temp_v1 + 1) {
    piVar3 = (int *)arrayElementAddress_002efa50(temp_v11,temp_v1);
    temp_v4 = *piVar3 == 0;
    do {
      if (temp_v4) goto LAB_00107af4;
      FUN_002efa58(&temp_v5,temp_v12,temp_v1);
      temp_v14 = temp_v5;
      temp_v15 = temp_v6;
      temp_v2 = bitFieldTest((unsigned int *)&temp_v14);
      temp_v4 = 1;
    } while (temp_v2 == 0);
    FUN_002efa58(&temp_v5,temp_v12,temp_v1);
    temp_v15 = temp_v6;
    temp_v14 = temp_v5;
    bitFieldSet(&temp_v14,0);
    piVar3 = (int *)arrayElementAddress_002efa50(temp_v11,temp_v1);
    temp_v2 = *piVar3;
    temp_v6 = temp_v2 + 4;
    temp_v13[0] = *(short *)(temp_v2 + 0x24) - 1;
    temp_v18 = *(int *)(*(int *)(temp_v2 + 0x14) + 8);
    while( 1 ) {
      temp_v19 = *(unsigned int *)(temp_v6 + 0x10);
      temp_v2 = wordRefsDiffer_002f000c(&temp_v18,(unsigned int *)&temp_v19);
      if ((temp_v2 == 0) || ((unsigned int)*(unsigned short *)(temp_v18 + 0x14) != temp_v13[0] + 1)) break;
      temp_v13[0] = *(unsigned short *)(temp_v18 + 0x14);
      FUN_002effdc(&temp_v18);
    }
    puVar6 = temp_v8;
    puVar7 = temp_v9;
    if (temp_v8 != temp_v9) {
      for (; puVar7 != temp_v9; puVar7 = puVar7 + 1) {
        *puVar6 = *puVar7;
        puVar6 = puVar6 + 1;
      }
      for (; puVar6 != temp_v9; puVar6 = puVar6 + 1) {
      }
      temp_v9 = (unsigned short *)((int)temp_v9 - (((int)temp_v9 - (int)temp_v8) & 0xfffffffeU));
    }
    while( 1 ) {
      temp_v19 = *(unsigned int *)(temp_v6 + 0x10);
      temp_v2 = wordRefsDiffer_002f000c(&temp_v18,(unsigned int *)&temp_v19);
      if (temp_v2 == 0) break;
      temp_v5 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v5 + 2)),*(unsigned short *)(temp_v18 + 0x14));
      if (temp_v9 != temp_v10) {
        puVar6 = temp_v9 + 1;
        if (temp_v9 != (unsigned short *)0x0) {
          *temp_v9 = *(unsigned short *)(temp_v18 + 0x14);
        }
      }
      else {
        FUN_001358f2(&temp_v8,temp_v9,&temp_v5);
        puVar6 = temp_v9;
      }
      temp_v9 = puVar6;
      FUN_002effdc(&temp_v18);
    }
    temp_v2 = vectorCount2_002f00e8(&temp_v8);
    temp_v3 = temp_v2 * 2 + 4;
    temp_v2 = FUN_002f00f0(piVar4[2],temp_v3);
    if (temp_v2 == 0) break;
    piVar3 = piVar4;
    if (999 < (unsigned int)(*(int *)(piVar4[2] + 0x10) + temp_v3)) {
      FUN_002f012e(param_1,piVar4[2],0,1);
      if (piVar4 != (int *)0x0) {
        (**(romwright_code **)(*piVar4 + 4))(piVar4);
      }
      if (temp_v16 != 0) {
        temp_v2 = FUN_002eb7d0(0x20,0);
        if ((temp_v2 == 0) || (piVar4 = (int *)FUN_002eff58(temp_v2,0x80), piVar4 == (int *)0x0)) {
          FUN_001221a2(&temp_v8);
          return;
        }
        temp_v2 = FUN_002eff84();
        if (temp_v2 == 0) {
          pcVar8 = *(romwright_code **)(*piVar4 + 4);
          (*pcVar8)(piVar4);
          FUN_001221a2(&temp_v8);
          return;
        }
        temp_v2 = operatorNew(0x10);
        piVar3 = (int *)0x0;
        if (temp_v2 != 0) {
          piVar3 = (int *)FUN_002ed258(temp_v2,piVar4);
        }
        sharedRefRelease(piVar4);
      }
      else {
        temp_v2 = operatorNew(0x10);
        piVar3 = (int *)0x0;
        if (temp_v2 != 0) {
          piVar3 = (int *)FUN_002eff90(temp_v2,0x80);
        }
      }
    }
    temp_v7[0] = (unsigned char)temp_v1;
    bufferAssignByte(piVar3,temp_v7);
    temp_v7[0] = vectorCount2_002f00e8(&temp_v8);
    bufferAssignByte(piVar3,temp_v7);
    strHolderAssignOneWide(piVar3,temp_v13);
    for (puVar6 = temp_v8; piVar4 = piVar3, temp_v9 != puVar6; puVar6 = puVar6 + 1) {
      strHolderAssignOneWide(piVar3,puVar6);
    }
LAB_00107af4:;
  }
  if (*(int *)(piVar4[2] + 0x10) != 0) {
    FUN_002f012e(param_1,piVar4[2],0,1);
  }
  if (piVar4 != (int *)0x0) {
    pcVar8 = *(romwright_code **)(*piVar4 + 4);
    (*pcVar8)(piVar4);
  }
  FUN_001221a2(&temp_v8);
  return;
}

} /* extern "C" */
