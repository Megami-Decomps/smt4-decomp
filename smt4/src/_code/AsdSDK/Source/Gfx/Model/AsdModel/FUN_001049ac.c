/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001049ac` (_code @ 0x1049ac, 0x3a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 12 slot(s), 42 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned char sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned char LAB_00104d58; /* 0x104d58 */
extern unsigned char LAB_00104d6c; /* 0x104d6c */
extern unsigned char LAB_00104d80; /* 0x104d80 */
extern unsigned char DAT_004208a8; /* 0x4208a8 */
extern unsigned char DAT_00420910; /* 0x420910 */
extern unsigned char DAT_00420980; /* 0x420980 */
extern unsigned char DAT_00464af1; /* 0x464af1 */
extern int *DAT_00464b44; /* 0x464b44 */
extern int DAT_00464b5c; /* 0x464b5c */
extern unsigned int DAT_00464bbc; /* 0x464bbc */
extern unsigned int *DAT_00472950; /* 0x472950 */
extern unsigned int *DAT_00472954; /* 0x472954 */
extern unsigned int *DAT_00472958; /* 0x472958 */
extern unsigned int *DAT_004dae64; /* 0x4dae64 */

/* Supplied declaration required: FUN_0010bb84. */
extern unsigned int FUN_002c2ff0(void);
extern unsigned int FUN_002c300c(void);
extern unsigned int FUN_002c30c4(unsigned char *);
extern int FUN_002c3124(unsigned char *, unsigned int, unsigned int);
extern unsigned int *FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: nw_gfx_SceneBuilder_CreateObject. */
/* Supplied declaration required: nw_gfx_res_ResGraphicsFile_Setup. */
/* Supplied declaration required: nw_gfx_res_ResModel_Setup. */
extern unsigned int nw_ut_FloatColor_ToPicaU32(int);
extern int nw_ut_ResDicPatricia_Get(int *, unsigned char *, unsigned int);


void FUN_001049ac(void)

{
/* irregular: 3 goto(s); 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar5;
  int temp_v3;
  int *piVar7;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int uStack_40;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14;
  int temp_v15 [4];
  
  DAT_00464af1 = 1;
  FUN_0010bb84();
  DAT_00464b5c = FUN_002c3124(&LAB_00104d58,0,1);
  temp_v4 = *(int *)(DAT_00464b5c + 0x20);
  if (temp_v4 != 0) {
    temp_v4 = DAT_00464b5c + 0x20 + temp_v4;
  }
  else {
    temp_v4 = 0;
  }
  if (temp_v4 != 0) {
    temp_v0 = FUN_002c30c4(&LAB_00104d6c);
    temp_v1 = nw_ut_ResDicPatricia_Get(&temp_v4,&LAB_00104d6c,temp_v0);
    if (temp_v1 != 0) {
      temp_v15[0] = *(int *)(temp_v1 + 0xc);
      if (temp_v15[0] == 0) {
        temp_v15[0] = 0;
      }
      else {
        temp_v15[0] = temp_v1 + 0xc + temp_v15[0];
      }
    }
    else {
      temp_v15[0] = 0;
    }
  }
  else {
    temp_v15[0] = 0;
  }
  temp_v0 = FUN_002c300c();
  nw_gfx_res_ResModel_Setup(temp_v15,temp_v0,DAT_00464b5c);
  temp_v0 = FUN_002c2ff0();
  temp_v2 = FUN_002c300c();
  temp_v7 = 1;
  temp_v8 = 8;
  temp_v9 = 4;
  uStack_40 = 0;
  temp_v10 = 0;
  temp_v12 = 4;
  piVar7 = &temp_v6;
  temp_v11 = 0;
  temp_v13 = 0;
  temp_v14 = 1;
  temp_v6 = temp_v15[0];
  nw_gfx_SceneBuilder_CreateObject(piVar7,temp_v0,temp_v2);
  if (piVar7 != (int *)0x0) {
    piVar5 = (int *)(**(romwright_code **)(*piVar7 + 8))(piVar7);
    do {
      if (piVar5 == (int *)0x44e858) goto LAB_00104aec;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  piVar7 = (int *)0x0;
LAB_00104aec:
  if (piVar7 != (int *)0x0) {
    piVar5 = (int *)(**(romwright_code **)(*piVar7 + 8))(piVar7);
    do {
      DAT_00464b44 = piVar7;
      if (piVar5 == (int *)0x472180) goto LAB_00104b28;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  DAT_00464b44 = (int *)0x0;
LAB_00104b28:
  temp_v5 = FUN_002c3124(&LAB_00104d80,0,1);
  temp_v0 = FUN_002c2ff0();
  nw_gfx_res_ResGraphicsFile_Setup(&temp_v5,temp_v0,temp_v5);
  temp_v1 = *(int *)(temp_v5 + 0x40);
  if (temp_v1 != 0) {
    temp_v1 = temp_v5 + 0x40 + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  temp_v3 = 0;
  if (temp_v1 != 0) {
    temp_v3 = *(int *)(temp_v1 + 0x28);
    if (temp_v3 == 0) {
      temp_v3 = 0;
    }
    else {
      temp_v3 = temp_v1 + 0x28 + temp_v3;
    }
  }
  temp_v1 = *(int *)(temp_v3 + 0x2c);
  if (temp_v1 != 0) {
    piVar5 = (int *)(temp_v3 + 0x2c + temp_v1);
  }
  else {
    piVar5 = (int *)0x0;
  }
  if (*piVar5 != 0) {
    temp_v1 = (int)piVar5 + *piVar5;
  }
  else {
    temp_v1 = 0;
  }
  temp_v3 = *(int *)DAT_00464b44[0x59];
  *(int *)(temp_v3 + 0x20) = temp_v1;
  *(unsigned int *)(*(int *)(temp_v3 + 8) + 0x2a4) = 0;
  if (piVar7 != (int *)0x0) {
    piVar5 = (int *)(**(romwright_code **)(*piVar7 + 8))(piVar7);
    do {
      if (piVar5 == (int *)0x472180) goto LAB_00104bf0;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  piVar7 = (int *)0x0;
LAB_00104bf0:
  *(unsigned int *)(*(int *)(*(int *)piVar7[0x59] + 8) + 0x140) =
       *(unsigned int *)(*(int *)(*(int *)piVar7[0x59] + 8) + 0x140) | 3;
  temp_v1 = *(int *)(*(int *)piVar7[0x59] + 8);
  *(unsigned int *)(temp_v1 + 0x44) = 0;
  *(unsigned int *)(temp_v1 + 0x48) = 0;
  *(unsigned int *)(temp_v1 + 0x4c) = 0;
  *(unsigned int *)(temp_v1 + 0x50) = 0;
  temp_v0 = nw_ut_FloatColor_ToPicaU32(temp_v1 + 0x44);
  *(unsigned int *)(temp_v1 + 0xdc) = temp_v0;
  temp_v0 = *(unsigned int *)DAT_00464b44[0x59];
  temp_v4 = 1;
  DAT_00472950 = (unsigned int *)FUN_002c5300(0x10000,0x100,0,0x18);
  if (DAT_00472950 != (unsigned int *)0x0) {
    temp_v2 = *DAT_004dae64;
    DAT_00472950[2] = 2;
    *DAT_00472950 = (unsigned int)&DAT_00420980;
    DAT_00472950[1] = temp_v2;
    DAT_00472950[3] = temp_v0;
    DAT_00472950[4] = 0;
    DAT_00472950[5] = 0;
  }
  temp_v4 = 1;
  DAT_00472954 = (unsigned int *)FUN_002c5300(0x10000,0x100,0,0xc);
  puVar1 = DAT_00472950;
  if (DAT_00472954 != (unsigned int *)0x0) {
    *DAT_00472954 = (unsigned int)&DAT_00420910;
    DAT_00472954[1] = (unsigned int)puVar1;
    DAT_00472954[2] = 0;
  }
  temp_v4 = 1;
  DAT_00472958 = (unsigned int *)FUN_002c5300(0x10000,0x100,0,0x10);
  temp_v0 = DAT_00464bbc;
  if (DAT_00472958 != (unsigned int *)0x0) {
    temp_v2 = *DAT_004dae64;
    *DAT_00472958 = (unsigned int)&DAT_004208a8;
    DAT_00472958[1] = temp_v2;
    DAT_00472958[2] = temp_v0;
    DAT_00472958[3] = 0;
  }
  return;
}
