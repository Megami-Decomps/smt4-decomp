/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fad68` (_code @ 0x4fad68, 0x6d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_001aff14(float *, int);
int FUN_003e7fa4(...);
int btlScriptUnitHasFlags(void);
int FUN_003ecab8(...);
int FUN_003f0e20(unsigned int *, unsigned int);
int FUN_0043ba3c(...);

/* stack frame of param_4: 30 slot(s), 120 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
} param_4_stack;

extern int g_btlCamera; /* 0x571508 */
extern unsigned int DAT_00573810; /* 0x573810 */
extern unsigned int DAT_00573814; /* 0x573814 */
extern unsigned int DAT_00573818; /* 0x573818 */
extern unsigned int DAT_0057381c; /* 0x57381c */
extern unsigned int DAT_00573820; /* 0x573820 */
extern unsigned int DAT_00573824; /* 0x573824 */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001aff14. */
/* Supplied declaration required: FUN_003e7fa4. */
/* Supplied declaration required: btlScriptUnitHasFlags. */
/* Supplied declaration required: FUN_003ecab8. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_0043ba3c. */


void FUN_004fad68(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  
  switch(param_2) {
  case 0:
    temp_v3 = btlGetMainState();
    FUN_003e7fa4(temp_v3,param_3,0);
    break;
  case 1:
    temp_v3 = btlGetMainState();
    FUN_003ecab8(temp_v3,param_3,0);
    break;
  case 2:
    puVar2 = (unsigned int *)btlGetMainState();
    FUN_003f0e20(puVar2,param_3);
    if (puVar2 == (unsigned int *)0x0) {
      return;
    }
    if ((puVar2[1] & DAT_00573814) != 0 || (*puVar2 & DAT_00573810) != 0) {
      return;
    }
    temp_v0 = *(short *)((int)puVar2 + 0x6e);
    if (temp_v0 == 0) {
    }
    break;
  case 3:
    temp_v3 = btlGetMainState();
    FUN_003e7fa4(temp_v3,param_4,0);
    break;
  case 4:
    temp_v3 = btlGetMainState();
    FUN_003ecab8(temp_v3,param_4,0);
    break;
  case 5:
    puVar2 = (unsigned int *)btlGetMainState();
    FUN_003f0e20(puVar2,param_4);
    if (puVar2 == (unsigned int *)0x0) {
      return;
    }
    if ((*puVar2 & DAT_00573810) != 0 || (puVar2[1] & DAT_00573814) != 0) {
      temp_v1 = btlGetMainState();
      if ((DAT_00573818 & *(unsigned int *)(temp_v1 + 0x45a0)) != 0 ||
          (DAT_0057381c & *(unsigned int *)(temp_v1 + 0x45a4)) != 0) {
        return;
      }
      temp_v1 = btlGetMainState();
      if ((*(unsigned int *)(temp_v1 + 0x45a0) & DAT_00573820) != 0 ||
          (DAT_00573824 & *(unsigned int *)(temp_v1 + 0x45a4)) != 0) {
        return;
      }
      btlGetMainState();
      btlScriptUnitHasFlags();
      return;
    }
    temp_v0 = *(short *)((int)puVar2 + 0x6e);
    if (temp_v0 == 0) {
    }
    break;
  case 6:
    temp_v4 = *(float *)(g_btlCamera + 0x598);
    temp_v5 = *(float *)(g_btlCamera + 0x59c);
    temp_v2 = *(float *)(g_btlCamera + 0x5a0);
    if (*(int *)(g_btlCamera + 0x10) != 0x3727c5ac) {
      FUN_001aff14(&temp_v9,1);
      temp_v8 = temp_v15 * temp_v4 + temp_v16 * temp_v5 + temp_v17 * temp_v2;
      temp_v6 = temp_v9 * temp_v4 + temp_v10 * temp_v5 + temp_v11 * temp_v2;
      temp_v7 = temp_v12 * temp_v4 + temp_v13 * temp_v5 + temp_v14 * temp_v2;
      FUN_0043ba3c(&temp_v9,&temp_v6,1);
    }
    break;
  case 8:
    temp_v4 = *(float *)(g_btlCamera + 0x598);
    temp_v5 = *(float *)(g_btlCamera + 0x59c);
    temp_v2 = *(float *)(g_btlCamera + 0x5a0);
    if (*(int *)(g_btlCamera + 0x10) != 0x3727c5ac) {
      FUN_001aff14(&temp_v18,1);
      temp_v6 = temp_v18 * temp_v4 + temp_v19 * temp_v5 + temp_v20 * temp_v2;
      temp_v7 = temp_v21 * temp_v4 + temp_v22 * temp_v5 + temp_v23 * temp_v2;
      temp_v8 = temp_v24 * temp_v4 + temp_v25 * temp_v5 + temp_v26 * temp_v2;
      FUN_0043ba3c(&temp_v18,&temp_v6,1);
    }
    break;
  case 9:
    temp_v4 = *(float *)(g_btlCamera + 0x598);
    temp_v5 = *(float *)(g_btlCamera + 0x59c);
    temp_v2 = *(float *)(g_btlCamera + 0x5a0);
    if (*(int *)(g_btlCamera + 0x10) != 0x3727c5ac) {
      FUN_001aff14(&temp_v27,1);
      temp_v6 = temp_v27 * temp_v4 + temp_v28 * temp_v5 + temp_v29 * temp_v2;
      temp_v7 = temp_v30 * temp_v4 + temp_v31 * temp_v5 + temp_v32 * temp_v2;
      temp_v8 = temp_v33 * temp_v4 + temp_v34 * temp_v5 + temp_v35 * temp_v2;
      FUN_0043ba3c(&temp_v27,&temp_v6,1);
    }
    break;
  case 0xc:
    break;
  case 0xd:
    temp_v3 = btlGetMainState();
    FUN_003e7fa4(temp_v3,param_4,1);
    break;
  case 0xe:
    temp_v3 = btlGetMainState();
    FUN_003ecab8(temp_v3,param_4,1);
    break;
  case 0xf:
  }
  return;
}

} /* extern "C" */
