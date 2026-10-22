/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010895c` (_code @ 0x10895c, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned char [12], unsigned int);
int _ZN9Obj55b28cD1Ev(...);
int sharedRefRelease(...);
int strAssign(int *, unsigned int, unsigned int, unsigned int);
int operatorNew(int);
int FUN_002e7908(...);
int FUN_002eb108(int *, int, unsigned int, int);
int FUN_002eb7d0(int, int);
int FUN_002eb7e0(int *, int, unsigned int, int);
int FUN_002ef34c(int *, int, int);
int vectorInitEmpty4(int **);
int FUN_002f1448(int **, int *[3]);
int FUN_002f1468(int *, int *);
int FUN_002f1486(...);

typedef struct fn_0010895c_arg2 fn_0010895c_arg2;
struct fn_0010895c_arg2 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
    byte field_0x1c; /* +0x1c */
};

typedef int romwright_code(...);
/* stack frame of param_10: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_10_stack;

/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: strAssign. */
/* Supplied declaration required: operatorNew. */
extern int *FUN_002e7614(int, unsigned int);
/* Supplied declaration required: FUN_002e7908. */
extern int FUN_002ea6fc(int *, int **);
extern unsigned int onlineGetActiveLock(void);
/* Supplied declaration required: FUN_002eb108. */
/* Supplied declaration required: FUN_002eb7d0. */
/* Supplied declaration required: FUN_002eb7e0. */
extern int FUN_002eb83c(void);
/* Supplied declaration required: FUN_002ef34c. */
extern int *FUN_002eff58(int, unsigned int);
extern int FUN_002eff84(void);
/* Supplied declaration required: vectorInitEmpty4. */
/* Supplied declaration required: FUN_002f1448. */
/* Supplied declaration required: FUN_002f1468. */
/* Supplied declaration required: FUN_002f1486. */


void FUN_0010895c(int *param_1,int param_2,fn_0010895c_arg2 *param_3,unsigned int param_4,unsigned int param_5
                 ,unsigned int param_6,int param_7,unsigned char param_8,int param_9,unsigned int param_10)

{
/* irregular: 2 goto(s); 14 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  romwright_code *pcVar4;
  unsigned int temp_v2;
  int *piVar6;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *temp_v6;
  int temp_v7;
  int iStack_58;
  int *temp_v8 [3];
  int *temp_v9;
  int *temp_v10;
  unsigned char temp_v11 [12];
  int temp_v12;
  unsigned char temp_v13;
  unsigned int temp_v14;
  int *temp_v15;
  int temp_v16;
  fn_0010895c_arg2 *pfStack_1c;
  unsigned int temp_v17;
  
  temp_v5 = 0;
  temp_v4 = 0;
  temp_v13 = 1;
  temp_v15 = param_1;
  temp_v16 = param_2;
  pfStack_1c = param_3;
  temp_v17 = param_4;
  temp_v0 = onlineGetActiveLock();
  _ZN9Obj55b28cC1EPv(temp_v11,temp_v0);
  vectorInitEmpty4(&temp_v9);
  while (piVar3 = temp_v9, temp_v5 < (unsigned int)param_3->field_0x10) {
    piVar6 = (int *)0x0;
    if ((int)((unsigned int)param_3->field_0x1c << 0x1d) < 0) {
      temp_v1 = FUN_002eb7d0(0x20,0);
      if (temp_v1 != 0) {
        piVar6 = (int *)FUN_002eff58(temp_v1,temp_v17);
        piVar3 = temp_v9;
        if (piVar6 == (int *)0x0) break;
        temp_v1 = FUN_002eff84();
        if (temp_v1 != 0) goto LAB_001089c6;
      }
      piVar3 = temp_v9;
      if (piVar6 != (int *)0x0) {
        pcVar4 = *(romwright_code **)(*piVar6 + 4);
        (*pcVar4)(piVar6);
        piVar3 = temp_v9;
      }
      break;
    }
    temp_v1 = operatorNew(0x20);
    if (temp_v1 != 0) {
      piVar6 = (int *)FUN_002e7614(temp_v1,temp_v17);
    }
    else {
      piVar6 = (int *)0x0;
    }
LAB_001089c6:
    temp_v2 = param_3->field_0x10 - temp_v5;
    if (param_5 < temp_v2) {
      temp_v2 = param_5;
    }
    strAssign(piVar6,param_3->field_0xc + param_3->field_0x18 + temp_v5,temp_v2,0xffffffff);
    temp_v8[0] = (int *)0x0;
    if ((int)((unsigned int)param_3->field_0x1c << 0x1d) < 0) {
      piVar3 = (int *)FUN_002eb7d0(0x150,0);
      if (piVar3 != (int *)0x0) {
        temp_v7 = param_9;
        temp_v6 = piVar6;
        FUN_002eb7e0(piVar3,temp_v16,param_6,param_7);
      }
      temp_v8[0] = piVar3;
      if ((piVar3 == (int *)0x0) || (temp_v1 = FUN_002eb83c(), piVar3 = temp_v8[0], temp_v1 == 0)) {
        sharedRefRelease(piVar6);
        piVar3 = temp_v9;
        if (temp_v8[0] != (int *)0x0) {
          pcVar4 = *(romwright_code **)(*temp_v8[0] + 4);
          piVar6 = temp_v8[0];
          (*pcVar4)(piVar6);
          piVar3 = temp_v9;
        }
        break;
      }
    }
    else {
      piVar3 = (int *)operatorNew(0x150);
      if (piVar3 != (int *)0x0) {
        temp_v7 = param_9;
        temp_v6 = piVar6;
        FUN_002eb108(piVar3,temp_v16,param_6,param_7);
      }
    }
    temp_v8[0] = piVar3;
    *(unsigned char *)(temp_v8[0] + 0x4c) = param_8;
    *(unsigned char *)(temp_v8[0] + 9) = *(unsigned char *)(temp_v16 + 0x14c);
    *(char *)(temp_v8[0] + 0x21) = (char)param_10;
    temp_v5 = temp_v5 + param_5;
    if (temp_v5 >= (unsigned int)param_3->field_0x10) {
      *(unsigned char *)(temp_v8[0] + 0x19) = 0;
    }
    else {
      *(char *)(temp_v8[0] + 0x19) = (char)temp_v13;
      temp_v13 = temp_v13 + 1;
      if (temp_v13 == 0) {
        temp_v13 = 1;
      }
    }
    temp_v4 = temp_v4 + 1;
    FUN_002f1448(&temp_v9,temp_v8);
  }
  do {
    if (temp_v10 == piVar3) goto LAB_00108b04;
    temp_v3 = *piVar3;
    temp_v14 = *(unsigned int *)(temp_v3 + 0xd8);
    FUN_002ef34c(&temp_v7,temp_v16,temp_v3);
    temp_v6 = (int *)((unsigned int)temp_v6 & 0xffffff00);
    temp_v1 = FUN_002ea6fc(&temp_v7,&temp_v6);
    if (temp_v1 != 0) break;
    sharedRefRelease(temp_v3);
    sharedRefRelease(temp_v14);
    piVar3 = piVar3 + 1;
  } while( 1 );
  for (; temp_v10 != piVar3; piVar3 = piVar3 + 1) {
    temp_v0 = *(unsigned int *)(*piVar3 + 0xd8);
    sharedRefRelease();
    sharedRefRelease(temp_v0);
  }
  *temp_v15 = temp_v7;
  temp_v15[1] = iStack_58;
  temp_v15[2] = (int)temp_v8[0];
  FUN_002f1486(&temp_v9);
  _ZN9Obj55b28cD1Ev(temp_v11);
  return;
LAB_00108b04:
  if ((param_7 << 0x1a < 0) && (param_9 != 0)) {
    piVar3 = (int *)(temp_v16 + 0x340);
    FUN_002f1468(piVar3,&param_9);
    *piVar3 = temp_v4;
  }
  temp_v12 = 0x10001;
  FUN_002e7908(temp_v15,&temp_v12);
  FUN_002f1486(&temp_v9);
  _ZN9Obj55b28cD1Ev(temp_v11);
  return;
}

} /* extern "C" */
