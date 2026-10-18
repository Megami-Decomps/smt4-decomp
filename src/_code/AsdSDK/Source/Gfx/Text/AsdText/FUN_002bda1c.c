/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bda1c` (_code @ 0x2bda1c, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Supplied declaration required: func_0x0037700a. */


/* WARNING: Instruction at (ram,0x002be17c) overlaps instruction at (ram,0x002be17a)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_002bda1c(unsigned int param_1)

{
/* irregular: irregular input(s): in_cr13, in_d8; 7 native warning(s); review required */
  int unaff_r5;
  unsigned int unaff_r6;
  unsigned char *puVar1;
  unsigned int in_cr13;
  unsigned long long in_d8;
  unsigned long long uStack_140;
  unsigned char temp_v0 [304];
  
  if ((unaff_r6 & 0x40000000) != 0 && (unaff_r6 & 0x3fffffff) != 0) {
    func_0x0037700a(0x2bda70,param_1);
  }
  coprocessor_store(0,in_cr13,temp_v0);
  puVar1 = temp_v0;
  do {
    *(unsigned long long *)(puVar1 + -8) = in_d8;
    puVar1 = puVar1 + -8;
  } while (unaff_r5 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
