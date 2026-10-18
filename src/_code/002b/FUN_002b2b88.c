/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2b88` (_code @ 0x2b2b88, 0x574 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_00464a70; /* 0x464a70 */
extern unsigned int *DAT_00464a74; /* 0x464a74 */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_loadlong (CALLOTHER). */
/* Supplied declaration required: FUN_001454f0. */
/* Supplied declaration required: func_0x006b3880. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b2b88(unsigned int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr2, in_stack_00000068, in_stack_00000088, in_stack_000000dc; 21 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int *piVar3;
  unsigned int unaff_r4;
  unsigned char unaff_r5;
  int unaff_r6;
  int temp_v1;
  romwright_code *unaff_r8;
  romwright_code *UNRECOVERED_JUMPTABLE;
  unsigned char temp_v2;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_stack_00000068;
  int in_stack_00000088;
  unsigned int in_stack_000000dc;
  
  temp_v2 = DAT_00464a70 == 0;
  puVar1 = (unsigned int *)&DAT_00464a70;
  if (!temp_v2) {
    puVar1 = DAT_00464a74;
  }
  if (temp_v2 || puVar1 <= param_2) {
    if (temp_v2 || puVar1 == param_2) {
      coprocessor_function(0,0xb,6,in_cr0,in_cr0,in_cr2);
      if (param_1 != 0) {
        FUN_001454f0(1,param_1 & ((unaff_r6 - 0xf0U) >> 7),in_stack_00000088);
      }
      func_0x006b3880();
      (*unaff_r8)();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(unsigned int *)(param_1 * 2) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  temp_v0 = (int)param_2 * 0xb;
  temp_v1 = DAT_00464a70 + (int)param_2 * 0x2c;
  piVar3 = (int *)((int)param_2 * 6);
  param_1 = param_1 >> 8;
  coprocessor_function(0,0xb,0,in_cr0,in_cr0,in_cr0);
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 0x18) = param_1;
  }
  else {
    *(int **)(param_1 + 0x14) = piVar3;
    in_stack_00000068 = param_1;
  }
  if (param_1 != 0) {
    *(int *)(param_1 + 0x14) = temp_v0;
  }
  else {
    *(int **)(temp_v0 + 0x18) = piVar3;
  }
  if (in_stack_00000068 == 0) {
    coprocessor_loadlong(0,in_cr2,&in_stack_00000088);
    *(char *)((int)piVar3 + 0xd) = (char)unaff_r4;
    *(unsigned int *)(unaff_r4 + 0x44) = unaff_r4;
    *piVar3 = unaff_r4 + 0x73;
    *(unsigned char *)(unaff_r4 + 0x84) = 0;
    temp_v0 = *(int *)(unaff_r4 + 0x77);
    *(int *)(temp_v1 + 0x44) = temp_v0;
    *(unsigned char *)(temp_v1 + 9) = unaff_r5;
    *(unsigned int *)(unaff_r4 + 0x73 + temp_v0 + (unsigned int)(0xffffff8c < unaff_r4) + 0x54) =
         in_stack_000000dc;
                    /* WARNING: Could not recover jumptable at 0x002b2ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  coprocessor_load(2,in_cr1,piVar3 + 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
