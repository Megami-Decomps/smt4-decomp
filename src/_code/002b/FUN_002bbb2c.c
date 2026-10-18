/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bbb2c` (_code @ 0x2bbb2c, 0x1b0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bbbb4) */
/* WARNING: Removing unreachable block (ram,0x002bbbc4) */
/* WARNING: Removing unreachable block (ram,0x002bbbc8) */
/* WARNING: Removing unreachable block (ram,0x002bbbcc) */
/* WARNING: Removing unreachable block (ram,0x002bbbd4) */
/* WARNING: Removing unreachable block (ram,0x002bbbd8) */
/* WARNING: Removing unreachable block (ram,0x002bbbdc) */
/* WARNING: Removing unreachable block (ram,0x002bbc38) */
/* WARNING: Removing unreachable block (ram,0x002bbc40) */
/* WARNING: Removing unreachable block (ram,0x002bbbe0) */
/* WARNING: Removing unreachable block (ram,0x002bbc1c) */
/* WARNING: Removing unreachable block (ram,0x002bbbe8) */
/* WARNING: Removing unreachable block (ram,0x002bbbf0) */
/* WARNING: Removing unreachable block (ram,0x002bb70c) */
/* WARNING: Removing unreachable block (ram,0x002bb710) */
/* WARNING: Removing unreachable block (ram,0x002bb714) */
/* WARNING: Removing unreachable block (ram,0x002bb71c) */
/* WARNING: Removing unreachable block (ram,0x002bb720) */
/* WARNING: Removing unreachable block (ram,0x002bb724) */
/* WARNING: Removing unreachable block (ram,0x002bb744) */
/* WARNING: Removing unreachable block (ram,0x002bb750) */
/* WARNING: Removing unreachable block (ram,0x002bb77c) */
/* WARNING: Removing unreachable block (ram,0x002bb752) */
/* WARNING: Removing unreachable block (ram,0x002bb75c) */
/* WARNING: Removing unreachable block (ram,0x002bb788) */
/* WARNING: Removing unreachable block (ram,0x002bb75e) */

int FUN_002bbb2c(int *param_1,int *param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_s16, in_s2, in_s5; 37 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr3;
  unsigned int in_cr5;
  unsigned int in_cr8;
  unsigned int in_cr9;
  unsigned int in_cr10;
  unsigned int in_cr13;
  float in_s2;
  float in_s5;
  unsigned int in_s16;
  unsigned char temp_v3 [20];
  
  FUN_002c3aa8();
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    temp_v2 = *piVar4;
    temp_v0 = param_1[1];
    if (temp_v2 != 0) {
      coprocessor_store(0,in_cr0,temp_v0 + 0xe0);
      if (temp_v0 != 3) {
        coprocessor_load(0,in_cr1,temp_v0 + 0x40);
        *(unsigned int *)(temp_v2 + 0x2ec) = in_s16;
        coprocessor_store(0xe,in_cr0,temp_v2 + 0xbc);
        coprocessor_function(10,0xf,4,in_cr1,in_cr8,in_cr2);
        temp_v1 = coprocessor_movefromRt(10,1,4,in_cr1,in_cr0);
        coprocessor_moveto(10,0,0,temp_v1,in_cr0,in_cr10);
        coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
        coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
        coprocessor_moveto(10,0,0,temp_v3,in_cr1,in_cr10);
        VectorSignedToFloat(*(float *)(temp_v2 + 0x40) - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
        coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
        coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  temp_v0 = *param_1;
  if (piVar4 != (int *)0x0) {
    if ((unsigned int)piVar4[2] < (unsigned int)(temp_v0 + param_3 + param_4)) {
      FUN_002c3a24(param_1 + 3);
      return 0;
    }
    param_2[1] = (int)piVar4;
    *(int **)(*piVar4 + 4) = param_2;
    *param_2 = *piVar4;
    *piVar4 = (int)param_2;
    param_1[2] = (int)param_2;
  }
  else {
    if ((unsigned int)param_1[1] < (unsigned int)(temp_v0 + param_3)) {
      FUN_002c3a24(param_1 + 3);
      return 0;
    }
    param_2[1] = (int)param_2;
    *param_2 = (int)param_2;
    param_1[2] = (int)param_2;
  }
  param_2[2] = temp_v0;
  param_2[3] = param_3;
  FUN_002c3a24(param_1 + 3);
  return temp_v0;
}
