/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc9cc` (_code @ 0x2bc9cc, 0x150 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bc9cc(void)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_s2, in_s5; 18 native warning(s); review required */
  int unaff_r4;
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
  unsigned char uStack_c;
  
  coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
  coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
  coprocessor_moveto(10,0,0,&uStack_c,in_cr1,in_cr10);
  VectorSignedToFloat(*(float *)(unaff_r4 + 0x40) - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
  coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
  coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
