/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba520` (_code @ 0x2ba520, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char uRam00000101; /* 0x101 */
extern int DAT_0044e334; /* 0x44e334 */
extern unsigned int uRam0200fffc; /* 0x200fffc */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002bad30) overlaps instruction at (ram,0x002bad2e)
    */
/* WARNING: Removing unreachable block (ram,0x001bad0e) */
/* WARNING: Removing unreachable block (ram,0x001bad12) */
/* WARNING: Removing unreachable block (ram,0x002bad22) */
/* WARNING: Removing unreachable block (ram,0x002bad06) */
/* WARNING: Removing unreachable block (ram,0x002bad16) */
/* WARNING: Removing unreachable block (ram,0x00208782) */
/* WARNING: Removing unreachable block (ram,0x002bad2e) */
/* WARNING: Removing unreachable block (ram,0x002bad32) */
/* WARNING: Removing unreachable block (ram,0x002bad2a) */

unsigned int FUN_002ba520(unsigned int param_1,int *param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 goto(s); irregular input(s): in_cr0, in_cr1, in_cr10, in_cr4, in_cr8, in_stack_00000030, in_stack_00000034, in_stack_00000038, in_stack_0000003c, in_stack_00000040; 31 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int unaff_r8;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr4;
  unsigned int in_cr8;
  unsigned int in_cr10;
  unsigned int in_stack_00000030;
  int in_stack_00000034;
  unsigned int in_stack_00000038;
  unsigned int *in_stack_0000003c;
  unsigned int in_stack_00000040;
  unsigned char uStack_10;
  
  puVar4 = (unsigned int *)0x101;
  temp_v4 = param_1 >= 0x2010000;
  temp_v5 = SBORROW4(param_1,0x2010000);
  temp_v2 = param_1 + 0xfdff0000;
  temp_v1 = param_1;
  temp_v0 = param_4;
  if (param_1 != 0x2010000) {
    if ((int)param_1 < 0x2010000) {
      temp_v1 = param_1 + 0xfeff0000;
      if (temp_v1 == 0) {
        coprocessor_load(0,in_cr8,&uStack_10);
        coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
        coprocessor_function(0,0xf,0,in_cr0,in_cr1,in_cr10);
        puVar4 = in_stack_0000003c;
        if (in_stack_00000030 == 0) {
          puVar4 = (unsigned int *)(temp_v2 & ((int)param_2 >> 0xf));
        }
        *puVar4 = temp_v2;
        puVar4[1] = in_stack_00000030;
        puVar4[2] = in_stack_00000038;
        puVar4[3] = (unsigned int)puVar4;
        puVar4[4] = in_stack_00000040;
        temp_v2 = in_stack_00000030;
        goto LAB_002bad3a;
      }
      temp_v4 = temp_v1 >= 0x10000;
      temp_v5 = SBORROW4(temp_v1,0x10000);
      if (temp_v1 != 0x10000) {
        temp_v4 = temp_v1 >= 0x20000;
        temp_v5 = SBORROW4(temp_v1,0x20000);
      }
      temp_v0 = param_4;
      if (temp_v1 == 0x10000 || temp_v1 == 0x20000) {
        coprocessor_moveto(0,0,0,unaff_r8,in_cr0,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      temp_v4 = temp_v2 >= 0x10000;
      temp_v5 = SBORROW4(temp_v2,0x10000);
      if (temp_v2 != 0x10000) {
        temp_v4 = temp_v2 >= 0x20000;
        temp_v5 = SBORROW4(temp_v2,0x20000);
      }
      temp_v0 = param_4;
      if (temp_v2 == 0x10000 || temp_v2 == 0x20000) {
        temp_v5 = 0;
        temp_v4 = 1;
        temp_v0 = *param_2;
        if (*param_2 != 0 && DAT_0044e334 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  in_stack_00000034 = temp_v0;
  temp_v3 = temp_v1 == 0;
  if (temp_v5) {
    if (!temp_v3) {
      temp_v3 = temp_v1 >> 6 == temp_v2 + !temp_v4;
    }
    if (temp_v3) {
      return temp_v1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (temp_v4) {
    software_interrupt(0xf40001);
  }
  in_stack_00000030 = temp_v1;
  if (temp_v3) {
    in_stack_00000030 = temp_v2 | 0x101;
  }
  software_interrupt(0x3f0000);
  if (!temp_v4) {
    *(unsigned int *)(unaff_r8 - 4) = in_stack_00000030;
  }
  if (!temp_v4) {
    in_stack_00000030 = uRam0200fffc;
  }
  temp_v2 = 0x2010000;
  if (0 < (int)temp_v1) {
    puVar4 = (unsigned int *)(param_1 + 0xfdff0101);
    uRam00000101 = (char)in_stack_00000030;
  }
LAB_002bad3a:
  if (temp_v2 != 0) {
    *(unsigned int *)(in_stack_00000030 + 0x44) = temp_v2;
  }
  *(unsigned int *)(in_stack_00000030 + 0x44) = in_stack_00000030;
  *(unsigned int *)(in_stack_00000030 + 0x44) = in_stack_00000030;
  *(unsigned int *)(in_stack_00000030 + 0x44) = temp_v2;
  *(int *)(in_stack_00000030 + 0x44) = in_stack_00000034;
  *(int *)(in_stack_00000030 + 0x44) = (int)puVar4 + 0x9e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
