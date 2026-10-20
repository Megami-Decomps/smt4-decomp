/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115fac` (_code @ 0x115fac, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00133f1c(void);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea41e(unsigned char [4], int);
int FUN_00301a60(...);
int FUN_00301bd4(...);
int FUN_00301be2(int *, int, int *, int [6]);
int arrayElementAddress_00301c5c(...);
int FUN_00301c66(...);
int FUN_00301c76(...);
int FUN_00301c88(...);
int FUN_00301d64(int, int);
int FUN_00301dc2(...);
int FUN_00301e56(...);

/* stack frame of param_3: 13 slot(s), 46 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned char sp93; /* 0x93: local_93 */
    unsigned char sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
} param_3_stack;

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00133f1c. */
extern unsigned char *FUN_002e7908(unsigned char *, int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea41e. */
extern int refIsNonNegative(unsigned int);
/* Supplied declaration required: FUN_00301a60. */
extern int vectorSize12A(void);
/* Supplied declaration required: FUN_00301bd4. */
/* Supplied declaration required: FUN_00301be2. */
/* Supplied declaration required: arrayElementAddress_00301c5c. */
/* Supplied declaration required: FUN_00301c66. */
/* Supplied declaration required: FUN_00301c76. */
/* Supplied declaration required: FUN_00301c88. */
/* Supplied declaration required: FUN_00301d64. */
/* Supplied declaration required: FUN_00301dc2. */
extern int FUN_00301df0(int *);
/* Supplied declaration required: FUN_00301e56. */
extern int __aeabi_idivmod(int, unsigned int);


void FUN_00115fac(int param_1,unsigned int param_2,int *param_3)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int *piVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [4];
  int temp_v8;
  int temp_v9;
  int temp_v10 [6];
  unsigned char temp_v11;
  unsigned char temp_v12;
  int *temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned char temp_v16 [44];
  unsigned char temp_v17 [12];
  unsigned char temp_v18 [40];
  unsigned char temp_v19 [12];
  unsigned char *puVar3;
  
  puVar3 = temp_v7;
  puVar2 = temp_v7;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0xb8) != '\x02') {
      FUN_002ea41e(temp_v7,param_1 + 0xa8);
      FUN_00301a60(param_1,puVar2);
      return;
    }
    if (*(char *)(param_1 + 0xa0) != '\0') {
      temp_v0 = vectorSize12A();
      if (temp_v0 != 1) {
        temp_v10[0] = -0x7f96ffff;
        piVar4 = temp_v10;
        puVar2 = (unsigned char *)FUN_002e7908(puVar3,piVar4);
        FUN_00301a60(param_1,puVar2);
        return;
      }
      temp_v0 = refIsNonNegative(*(unsigned int *)(param_1 + 0x94));
      if (temp_v0 == 0) {
        puVar2 = *(unsigned char **)(param_1 + 0x94);
        FUN_00301a60(param_1,puVar2);
        return;
      }
    }
    temp_v14 = param_1 + 0x80;
    temp_v8 = param_1 + 0x7c;
    if ((*(int *)(param_1 + 0x8c) != 0) && (temp_v0 = FUN_00301bd4(), temp_v0 != 0)) {
      temp_v10[0] = *(int *)(*(int *)(temp_v14 + 0xc) + 0x10);
      temp_v10[2] = *(int *)(temp_v10[0] + 8);
      param_3 = temp_v10 + 2;
      FUN_00301be2(temp_v10 + 3,*(int *)(temp_v14 + 0xc),param_3,temp_v10);
      piVar4 = (int *)arrayElementAddress_00301c5c(temp_v8,0);
      for (temp_v0 = *piVar4; temp_v1 = arrayElementAddress_00301c5c(temp_v8,0), *(int *)(temp_v1 + 4) != temp_v0;
          temp_v0 = temp_v0 + 0x28) {
        temp_v2 = *(unsigned int *)(temp_v14 + 0xc);
        FUN_00301c66(temp_v16,temp_v0 + 5,temp_v0 + 8);
        param_3 = (int *)FUN_00301c76(temp_v18,temp_v16);
        FUN_00301c88(temp_v10,temp_v2);
      }
    }
    piVar4 = *(int **)(temp_v14 + 8);
    if (piVar4 != (int *)0x0) {
      temp_v4 = *piVar4;
      temp_v1 = piVar4[1];
      temp_v9 = temp_v4;
      temp_v0 = temp_v1;
      temp_v10[2] = temp_v1;
      if (temp_v4 != temp_v1) {
        for (; temp_v10[0] = temp_v0, temp_v1 != temp_v10[0]; temp_v1 = temp_v1 + 0x1c) {
          FUN_00301d64(temp_v4,temp_v1);
          temp_v4 = temp_v4 + 0x1c;
          temp_v0 = temp_v10[0];
        }
        temp_v0 = piVar4[1];
        for (; temp_v4 != temp_v0; temp_v4 = temp_v4 + 0x1c) {
          FUN_00301dc2(temp_v4);
        }
        temp_v0 = __aeabi_idivmod(temp_v10[2] - temp_v9,0x1c);
        param_3 = (int *)0x1c;
        piVar4[1] = piVar4[1] + temp_v0 * -0x1c;
      }
      temp_v6 = 0;
      while( 1 ) {
        temp_v5 = romwright_subpiece_4_1_0(param_3,0);
        temp_v3 = FUN_00301bd4(temp_v8);
        if (temp_v3 <= temp_v6) break;
        temp_v10[0] = 0;
        temp_v10[4] = 0;
        temp_v10[5] = 0;
        temp_v11 = 0;
        temp_v10[3] = 0;
        temp_v10[2] = 0;
        temp_v10[1] = 0;
        temp_v12 = temp_v5;
        temp_v10[4] = FUN_00301df0(temp_v10);
        *(unsigned int *)(temp_v10[4] + 4) = 0;
        *(int *)(temp_v10[4] + 8) = temp_v10[4];
        *(int *)(temp_v10[4] + 0xc) = temp_v10[4];
        piVar4 = (int *)arrayElementAddress_00301c5c(temp_v8,temp_v6);
        for (temp_v0 = *piVar4; temp_v1 = arrayElementAddress_00301c5c(temp_v8,temp_v6), *(int *)(temp_v1 + 4) != temp_v0;
            temp_v0 = temp_v0 + 0x28) {
          temp_v13 = temp_v10;
          FUN_00301c66(temp_v16,temp_v0 + 5,temp_v0 + 8);
          temp_v2 = FUN_00301c76(temp_v18,temp_v16);
          FUN_00301c88(temp_v19,temp_v13,temp_v2);
        }
        param_3 = temp_v10;
        temp_v0 = *(int *)(temp_v14 + 8);
        temp_v1 = *(int *)(temp_v0 + 4);
        if (temp_v1 != *(int *)(temp_v0 + 8)) {
          *(int *)(temp_v0 + 4) = temp_v1 + 0x1c;
          FUN_00301e56(temp_v0,temp_v1);
        }
        else {
          FUN_00133f1c();
        }
        FUN_00301dc2(temp_v10);
        temp_v6 = temp_v6 + 1;
      }
    }
    piVar4 = &temp_v15;
    temp_v15 = 0x10001;
    puVar3 = temp_v17;
  }
  else {
    temp_v10[0] = -0x7ffefffc;
    piVar4 = temp_v10;
  }
  puVar2 = (unsigned char *)FUN_002e7908(puVar3,piVar4);
  FUN_00301a60(param_1,puVar2);
  return;
}

} /* extern "C" */
