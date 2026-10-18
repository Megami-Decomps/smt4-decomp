/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc560` (_code @ 0x2bc560, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bc560(unsigned int param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr2, in_cr3, in_cr5, in_cr8, in_fpscr, in_s2, in_s4, in_s5; 13 native warning(s); review required */
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr2;
  unsigned int in_cr3;
  unsigned int in_cr5;
  unsigned int in_cr8;
  float in_s2;
  float in_s4;
  float in_s5;
  
  *(unsigned int *)((param_1 >> 8) * 2) = param_1 >> 8;
  VectorSignedToFloat(in_s4 - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
  coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
  coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
