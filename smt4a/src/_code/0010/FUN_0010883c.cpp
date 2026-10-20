/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010883c` (_code @ 0x10883c, 0x11e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefHolderDestroy(...);
int FUN_002eb164(...);
int FUN_002ed258(...);
int arrayElementAddress_002eee88(int, int);
int FUN_002efcf2(...);
int FUN_002efcfc(int *, unsigned int);
int FUN_002efd12(int, int *);
int FUN_002efdb4(unsigned int);
int FUN_002f07c2(...);
int vectorInitEmpty3(int [3]);
int FUN_002f1306(int [3], int);
int wordMoveOut_002f1324(unsigned char [4], int *, int);
int vectorTeardown_002f135a(...);

/* stack frame of param_2: 9 slot(s), 34 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned short sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

/* Supplied declaration required: sharedRefHolderDestroy. */
/* Supplied declaration required: FUN_002eb164. */
/* Supplied declaration required: FUN_002ed258. */
extern int FUN_002eea8a(unsigned char *, unsigned short *);
/* Supplied declaration required: arrayElementAddress_002eee88. */
extern unsigned int FUN_002ef9e0(unsigned char *, unsigned short);
/* Supplied declaration required: FUN_002efcf2. */
/* Supplied declaration required: FUN_002efcfc. */
/* Supplied declaration required: FUN_002efd12. */
/* Supplied declaration required: FUN_002efdb4. */
/* Supplied declaration required: FUN_002f07c2. */
/* Supplied declaration required: vectorInitEmpty3. */
/* Supplied declaration required: FUN_002f1306. */
/* Supplied declaration required: wordMoveOut_002f1324. */
extern int seq16IsGreaterOrFlag(unsigned char *, unsigned char *);
extern unsigned int vectorCount8_002f1352(int *);
/* Supplied declaration required: vectorTeardown_002f135a. */


void FUN_0010883c(int param_1,int param_2)

{
/* irregular: 13 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [8];
  int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8 [2];
  int temp_v9 [3];
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13 [12];
  unsigned char temp_v14 [8];
  int temp_v15;
  unsigned char temp_v16 [4];
  unsigned char temp_v17 [12];
  int temp_v18;
  int iStack_18;
  
  temp_v12 = param_1 + 0x9c;
  temp_v18 = param_1;
  iStack_18 = param_2;
  puVar2 = (unsigned int *)arrayElementAddress_002eee88(temp_v12,0);
  FUN_002efcfc(&temp_v10,*puVar2);
  FUN_002eb164(temp_v13,param_2);
  temp_v11 = temp_v10;
  piVar3 = (int *)arrayElementAddress_002eee88(temp_v12,0);
  temp_v1 = *piVar3;
  FUN_002efd12(temp_v1,&temp_v11);
  vectorInitEmpty3(temp_v9);
  do {
    if (temp_v1 != 0) {
      FUN_002eb164(temp_v14,temp_v1);
      temp_v1 = seq16IsGreaterOrFlag(temp_v13,temp_v14);
      if (temp_v1 == 0) {
        temp_v0 = 0;
      }
      else {
        temp_v0 = 1;
      }
    }
    else {
      temp_v0 = 0;
    }
    if (!temp_v0) break;
    FUN_002f1306(temp_v9,temp_v10 + 0x10);
    wordMoveOut_002f1324(temp_v16,&temp_v10,0);
    temp_v15 = temp_v10;
    piVar3 = (int *)arrayElementAddress_002eee88(temp_v12,0);
    temp_v1 = *piVar3;
    FUN_002efd12(temp_v1,&temp_v15);
  } while( 1 );
  puVar2 = (unsigned int *)arrayElementAddress_002eee88(temp_v12,0);
  FUN_002efdb4(*puVar2);
  for (temp_v4 = 0; temp_v2 = vectorCount8_002f1352(temp_v9), temp_v4 < temp_v2; temp_v4 = temp_v4 + 1) {
    temp_v1 = temp_v9[0] + temp_v4 * 8;
    FUN_002efcf2(&temp_v15,param_2);
    FUN_002f07c2(temp_v18,&temp_v15,temp_v1,0);
  }
  FUN_002ed258(temp_v5,*(unsigned int *)(param_2 + 0xd8));
  while (temp_v7 < *(unsigned int *)(temp_v6 + 0x10)) {
    temp_v8[0] = 0;
    temp_v1 = FUN_002eea8a(temp_v5,temp_v8);
    if (temp_v1 == 0) break;
    temp_v3 = FUN_002ef9e0(temp_v17,temp_v8[0]);
    FUN_002efcf2(&temp_v15,param_2);
    FUN_002f07c2(temp_v18,&temp_v15,temp_v3,0);
  }
  sharedRefHolderDestroy(temp_v5);
  vectorTeardown_002f135a(temp_v9);
  return;
}

} /* extern "C" */
