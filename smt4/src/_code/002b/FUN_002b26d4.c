/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b26d4` (_code @ 0x2b26d4, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int iRam00000000; /* 0x0 */
extern unsigned char uRam0000000d; /* 0xd */

/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_loadlong (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b26d4(int *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_cr1, in_cr2; 11 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int unaff_r6;
  romwright_code *UNRECOVERED_JUMPTABLE;
  unsigned char temp_v7;
  unsigned int in_cr1;
  unsigned int in_cr2;
  
  temp_v0 = *(int *)(param_2 + 0x18);
  if (!(param_1 == (int *)0x0 || param_2 == 0)) {
    temp_v3 = *(int *)(param_2 + 0x14);
    if (temp_v3 == 0 && temp_v0 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (temp_v3 != 0) {
        *(int *)(temp_v3 + 0x18) = temp_v0;
      }
      else {
        *(unsigned int *)(temp_v0 + 0x14) = 0;
        *param_1 = temp_v0;
      }
      if (temp_v0 != 0) {
        *(int *)(temp_v0 + 0x14) = temp_v3;
      }
      else {
        *(unsigned int *)(temp_v3 + 0x18) = 0;
        param_1[1] = temp_v3;
      }
    }
    temp_v1 = 0;
    if (*param_1 != 0) {
      coprocessor_load(2,in_cr1,0x1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    temp_v3 = 0;
    coprocessor_loadlong(0,in_cr2,param_1 + 8);
    uRam0000000d = (unsigned char)param_2;
    *(unsigned int *)(param_2 + 0x44) = param_2;
    temp_v7 = 0xffffff8c < param_2;
    temp_v6 = param_2 + 0x73;
    iRam00000000 = temp_v6;
  }
  else {
    temp_v7 = 1;
    temp_v1 = 0;
    if (*(romwright_code **)(param_2 + 0x10) != (romwright_code *)0x0) {
      (**(romwright_code **)(param_2 + 0x10))(*(unsigned int *)(param_2 + 8));
      temp_v1 = temp_v2;
    }
    temp_v6 = 0x2b2768;
    temp_v3 = param_2 + temp_v0;
  }
  *(unsigned char *)(temp_v6 + 0x11) = temp_v1;
  temp_v4 = *(int *)(temp_v6 + 4);
  *(int *)(unaff_r6 + 0x44) = temp_v4;
  temp_v5 = param_1[0x1d];
  *(char *)(unaff_r6 + 9) = (char)temp_v0;
  *(int *)(temp_v6 + temp_v4 + (unsigned int)temp_v7 + 0x54) = temp_v5;
                    /* WARNING: Could not recover jumptable at 0x002b2ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(temp_v3);
  return;
}
