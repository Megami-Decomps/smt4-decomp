/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002baf30` (_code @ 0x2baf30, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0047235c; /* 0x47235c */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002baf30(void)

{
/* irregular: irregular input(s): in_cr0, in_cr14, in_cr2, in_cr3, in_cr5, in_cr8, in_fpscr, in_s2, in_s4, in_s5, in_stack_00000150, in_stack_00000154, in_stack_00000158; 19 native warning(s); review required */
  unsigned int temp_v0;
  int unaff_r6;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr2;
  unsigned int in_cr3;
  unsigned int in_cr5;
  unsigned int in_cr8;
  unsigned int in_cr14;
  float in_s2;
  float in_s4;
  float in_s5;
  unsigned int in_stack_00000150;
  unsigned int in_stack_00000154;
  unsigned int in_stack_00000158;
  
  temp_v0 = DAT_0047235c;
  *(unsigned int *)(unaff_r6 + 0x14) = in_stack_00000150;
  *(unsigned int *)(unaff_r6 + 0x18) = in_stack_00000154;
  *(unsigned int *)(unaff_r6 + 0x1c) = in_stack_00000158;
  coprocessor_store(1,in_cr14,unaff_r6 + 0x1a0);
  *(unsigned int *)((temp_v0 >> 8) * 2) = temp_v0 >> 8;
  VectorSignedToFloat(in_s4 - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
  coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
  coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
