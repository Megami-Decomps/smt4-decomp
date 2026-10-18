/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2770` (_code @ 0x2b2770, 0x218 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b2770(void)

{
/* irregular: irregular input(s): in_cr1, in_cr12, in_cr2, in_cr3, in_cr4, in_s1, in_s6; 11 native warning(s); review required */
  int unaff_r5;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr3;
  unsigned int in_cr4;
  unsigned int in_cr12;
  float in_s1;
  float in_s6;
  
  coprocessor_function(10,0xf,4,in_cr4,in_cr1,in_cr2);
  *(float *)(unaff_r5 + 4) = in_s6 * in_s1;
  coprocessor_function(0,6,1,in_cr1,in_cr3,in_cr12);
  coprocessor_function(0,0xb,0,in_cr4,in_cr4,in_cr1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
