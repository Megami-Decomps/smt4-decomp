/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b23f4` (_code @ 0x2b23f4, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_00465128; /* 0x465128 */
extern unsigned char DAT_004c62a1; /* 0x4c62a1 */
extern unsigned char DAT_004c62a2; /* 0x4c62a2 */
extern unsigned char DAT_004c62a8; /* 0x4c62a8 */
extern int DAT_004c6330; /* 0x4c6330 */

/* Unsupported intrinsic, declaration required: coprocessor_loadlong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
extern unsigned int FUN_002b30fc(int *);
/* Supplied declaration required: FUN_002ba2b8. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b23f4(int *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr2, in_r12, in_s17; 18 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *unaff_r4;
  char unaff_r5;
  int unaff_r6;
  int temp_v4;
  int *unaff_r10;
  romwright_code *UNRECOVERED_JUMPTABLE;
  char in_r12;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_s17;
  int uStack_10;
  unsigned char uStack_8;
  
  piVar1 = DAT_00465128;
  DAT_00465128[6] = DAT_00465128[6] + 1;
  temp_v2 = piVar1[7] + *param_1;
  piVar1[7] = temp_v2;
  if ((*(unsigned short *)(piVar1 + 0xe) & 0xff) < 8) {
    temp_v0 = FUN_002b30fc(param_1);
    piVar1 = DAT_00465128;
    temp_v2 = temp_v0 * 0x10;
    temp_v0 = (temp_v0 & 0xfffffff) >> 0xc;
    if (temp_v0 == 0) {
      *(int **)(temp_v2 + 0x14) = param_4;
      *piVar1 = temp_v2;
    }
    if (temp_v2 != 0) {
      *(unsigned int *)(temp_v2 + 0x14) = temp_v0;
    }
    else {
      *(int **)(temp_v0 + 0x18) = param_4;
      piVar1[1] = temp_v0;
    }
    if (*piVar1 != 0) {
      coprocessor_load(2,in_cr1,param_4 + 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    coprocessor_loadlong(0,in_cr2,piVar1 + 8);
    *(char *)((int)param_4 + 0xd) = (char)param_1;
    param_1[0x11] = (int)param_1;
    *param_4 = (int)param_1 + 0x73U;
    *(unsigned char *)(param_1 + 0x21) = 0;
    temp_v2 = *(int *)((int)param_1 + 0x77);
    *(int *)(unaff_r6 + 0x44) = temp_v2;
    temp_v3 = piVar1[0x1d];
    *(unsigned char *)(unaff_r6 + 9) = 0x20;
    *(int *)((int)param_1 + 0x73U + temp_v2 + (unsigned int)((int *)0xffffff8c < param_1) + 0x54) = temp_v3;
                    /* WARNING: Could not recover jumptable at 0x002b2ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  *(char *)(temp_v2 >> 0x1f) = (char)param_1;
  while ((unaff_r4 == (int *)0x0 || (unaff_r5 == '\0'))) {
    if (-1 < temp_v2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_r4 = (int *)(temp_v2 >> 0x1f);
    unaff_r5 = '\0';
    if ((unsigned int *)&uStack_8 != &uStack_10) {
      unaff_r4 = unaff_r10;
      unaff_r5 = in_r12;
    }
  }
  temp_v3 = *unaff_r4;
  *(unsigned int *)(temp_v3 + 0x24) = in_s17;
  temp_v2 = DAT_004c6330;
  coprocessor_storelong(0,in_cr0,temp_v3 + 0xa0);
  temp_v3 = 0;
  temp_v4 = *(int *)(DAT_004c6330 + 0x18) + *(int *)(DAT_004c6330 + 0x28) * 0x1c;
  FUN_0013b608();
  temp_v1 = *(int *)(temp_v2 + 0x28) + 1;
  *(int *)(temp_v2 + 0x28) = temp_v1;
  if ((*(int *)(temp_v2 + 0x38) != 0) &&
     ((*(char *)(temp_v4 + 1) != '\0' ||
      ((temp_v1 == *(int *)(temp_v2 + 0x20) && (*(char *)(temp_v2 + 0x3c) != '\0')))))) {
    temp_v3 = *(int *)(temp_v2 + 0x38);
  }
  if (*(char *)(temp_v4 + 2) != '\0') {
    DAT_004c62a2 = 0;
    DAT_004c62a8 = 0;
    DAT_004c62a1 = 0;
  }
  else if (temp_v1 >= *(int *)(temp_v2 + 0x20)) {
    DAT_004c62a1 = 0;
  }
  else {
    FUN_002ba2b8();
  }
  FUN_0013b618();
  if (temp_v3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}
