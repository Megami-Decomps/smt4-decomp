/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00413e50` (_code @ 0x413e50, 0x37c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00103f54(...);
int holderSetFlagBits(...);
int FUN_0011b272(unsigned char [52], unsigned int);
int FUN_0011b648(...);
int FUN_0012055e(unsigned char [24], unsigned char **);
int asdOperatorDeleteArray(...);
int operatorNew(...);
int onlineStringDestroy(...);
int onlineStringAssign(unsigned char [8], unsigned int);
int FUN_002ea100(...);
int FUN_002f4cac(unsigned char [32]);
int FUN_002f4cd6(unsigned char [32], unsigned char [104], int);
int FUN_00303928(...);
int FUN_00387edc(unsigned char [104]);
int FUN_004311c0(void);
int FUN_00432dd8(void);
int _ZN9Obj55ac38D1Ev(...);
int FUN_00522a48(...);
int FUN_00522bf4(...);
int rt_memcpy_w(unsigned char [104], unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 28 slot(s), 99 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned short sp180; /* 0x180: local_180 */
    unsigned int sp18C; /* 0x18c: local_18c */
    unsigned char sp190; /* 0x190: local_190 */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned char sp198; /* 0x198: local_198 */
    unsigned short sp19A; /* 0x19a: local_19a */
    unsigned char sp19C; /* 0x19c: local_19c */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
} param_1_stack;

extern unsigned char LAB_004141dc; /* 0x4141dc */
extern unsigned char LAB_004141f4; /* 0x4141f4 */
extern int FUN_0041488c(...); /* 0x41488c */
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */
extern unsigned char DAT_0055a500; /* 0x55a500 */
extern unsigned char DAT_0055a9d8; /* 0x55a9d8 */
extern unsigned char DAT_0055ac40; /* 0x55ac40 */
extern unsigned char DAT_0055cacc; /* 0x55cacc */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00103f54. */
/* Supplied declaration required: holderSetFlagBits. */
/* Supplied declaration required: FUN_0011b272. */
/* Supplied declaration required: FUN_0011b648. */
/* Supplied declaration required: FUN_0012055e. */
extern unsigned int randRange(unsigned int);
extern int gameFlagIsSet(unsigned int);
extern int FUN_00237608(void);
extern unsigned int FUN_002bf520(void);
extern int rt_malloc(unsigned int);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: operatorNew. */
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: onlineStringAssign. */
extern int _ZN9Obj55aff4C1Ev(unsigned char *);
/* Supplied declaration required: FUN_002ea100. */
/* Supplied declaration required: FUN_002f4cac. */
/* Supplied declaration required: FUN_002f4cd6. */
extern unsigned int FUN_002fafd8(int, unsigned int);
extern int FUN_003038fc(int, unsigned int);
/* Supplied declaration required: FUN_00303928. */
extern int FUN_0030395c(int, unsigned int);
/* Supplied declaration required: FUN_00387edc. */
/* Supplied declaration required: FUN_004311c0. */
/* Supplied declaration required: FUN_00432dd8. */
/* Supplied declaration required: _ZN9Obj55ac38D1Ev. */
/* Supplied declaration required: FUN_00522a48. */
/* Supplied declaration required: FUN_00522bf4. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00413e50(int param_1)

{
/* irregular: 23 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned char *temp_v4;
  unsigned char temp_v5;
  unsigned short temp_v6;
  unsigned char temp_v7;
  unsigned char *temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11 [8];
  unsigned short temp_v12;
  unsigned char temp_v13 [32];
  unsigned char temp_v14 [52];
  unsigned char temp_v15 [24];
  unsigned char temp_v16 [24];
  int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned char temp_v23 [104];
  unsigned int *temp_v24;
  unsigned int *temp_v25;
  unsigned int temp_v26;
  unsigned char *temp_v27 [2];
  unsigned int temp_v28;
  int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned char temp_v32 [8];
  unsigned char temp_v33 [8];
  int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  
  temp_v0 = FUN_00237608();
  if (temp_v0 != 0) {
    temp_v1 = FUN_002bf520();
    rt_memcpy_w(temp_v23,temp_v1,100);
  }
  else {
    FUN_00387edc(temp_v23);
  }
  temp_v8 = &DAT_0055ac40;
  temp_v9 = 0;
  temp_v0 = _ZN9Obj55aff4C1Ev(temp_v11);
  temp_v0 = FUN_003038fc(temp_v0 + 0xc,0);
  temp_v34 = 0;
  temp_v35 = 0;
  temp_v36 = 0;
  temp_v0 = FUN_00303928(temp_v0 + 0x20,3,&temp_v34);
  asdOperatorDeleteArray(temp_v34);
  temp_v37 = 0;
  temp_v38 = 0;
  temp_v39 = 0;
  temp_v0 = FUN_00303928(temp_v0 + 0x14,3,&temp_v37);
  asdOperatorDeleteArray(temp_v37);
  temp_v0 = FUN_0030395c(temp_v0 + 0x20,0);
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  temp_v2 = rt_malloc(0x500);
  *(int *)(temp_v0 + 0xc) = temp_v2;
  *(int *)(temp_v0 + 0x10) = temp_v2;
  *(int *)(temp_v0 + 0x14) = temp_v2 + 0x500;
  *(unsigned char *)(temp_v0 + 0x1c) = 0;
  *(unsigned char **)(temp_v0 + 0x18) = &DAT_0055a9d8;
  *(unsigned short *)(temp_v0 + 0x1e) = 0xffff;
  *(unsigned char *)(temp_v0 + 0x20) = 1;
  temp_v0 = FUN_0030395c(temp_v0 + 0x24,0);
  *(unsigned char **)(temp_v0 - 0x90) = &DAT_0055a500;
  FUN_00432dd8();
  temp_v10 = 0;
  temp_v1 = FUN_002ea100(temp_v32,&LAB_004141dc);
  onlineStringAssign(temp_v11,temp_v1);
  onlineStringDestroy(temp_v32);
  temp_v12 = 999;
  temp_v29 = 0;
  temp_v30 = 0;
  temp_v31 = 0;
  temp_v1 = FUN_00303928(temp_v27,0,&temp_v29);
  FUN_0011b272(temp_v14,temp_v1);
  temp_v27[0] = &DAT_0055a4c0;
  asdOperatorDeleteArray(temp_v28);
  asdOperatorDeleteArray(temp_v29);
  FUN_002f4cac(temp_v13);
  FUN_002f4cd6(temp_v13,temp_v23,100);
  temp_v0 = gameFlagIsSet(0x580);
  if (temp_v0 == 0) {
    temp_v5 = 0;
    temp_v7 = 1;
    temp_v4 = &DAT_0055a9d8;
    temp_v6 = 0;
    FUN_0012055e(temp_v16,&temp_v4);
  }
  temp_v1 = 0x19a2;
  temp_v24 = (unsigned int *)0x0;
  temp_v25 = (unsigned int *)0x0;
  temp_v26 = 0;
  FUN_004311c0();
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  temp_v20 = 0;
  temp_v21 = 0;
  temp_v22 = 0;
  temp_v0 = gameFlagIsSet(0x580);
  if (temp_v0 != 0) {
    temp_v1 = randRange(0xffff);
    FUN_00100388(&temp_v17,&LAB_004141f4,temp_v1,0);
  }
  else {
    FUN_00100388(&temp_v17,&LAB_004141f4,temp_v1,temp_v3);
  }
  temp_v1 = FUN_002ea100(temp_v33,&temp_v17);
  FUN_00522a48(&temp_v24,temp_v1);
  onlineStringDestroy(temp_v33);
  FUN_00522bf4(temp_v15,&temp_v24);
  temp_v0 = operatorNew(0x78);
  if (temp_v0 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = FUN_002fafd8(temp_v0,0);
  }
  puVar5 = (unsigned int *)operatorNew(0x14);
  if (puVar5 != (unsigned int *)0x0) {
    puVar5[1] = param_1;
    puVar5[2] = (unsigned int)FUN_0041488c;
    puVar5[3] = 0;
    *puVar5 = (unsigned int)&DAT_0055cacc;
    puVar5[4] = temp_v1;
    holderSetFlagBits(temp_v1,2);
    FUN_00103f54(temp_v1,puVar5,0,1);
  }
  FUN_0011b648(param_1 + 4,temp_v1,&temp_v8,param_1 + 0x90);
  puVar1 = temp_v25;
  for (puVar5 = temp_v24; puVar5 != puVar1; puVar5 = puVar5 + 2) {
    (**(romwright_code **)*puVar5)(puVar5);
  }
  asdOperatorDeleteArray(temp_v24);
  _ZN9Obj55ac38D1Ev(&temp_v8);
  return;
}

} /* extern "C" */
