/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf9f0` (_code @ 0x2bf9f0, 0x27e bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bf9f0(int param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr3, in_cr7; 7 native warning(s); review required */
  int temp_v0;
  unsigned int in_cr0;
  unsigned int in_cr3;
  unsigned int in_cr7;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = *(int *)(param_1 + 4);
    if (temp_v0 < 0) {
      temp_v0 = *(int *)(param_1 + 8);
    }
    if (temp_v0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  coprocessor_function(0,0xb,0,in_cr7,in_cr0,in_cr3);
  *(int *)(temp_v0 * 2 + 0x7c) = temp_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
