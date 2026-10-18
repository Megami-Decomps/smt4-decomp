/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1fa4` (_code @ 0x2c1fa4, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e316c; /* 0x4e316c */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c1fa4(int param_1)

{
/* irregular: irregular input(s): in_cr0, in_s1, in_s2, in_s7, in_s8; 7 native warning(s); review required */
  unsigned int in_cr0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s7;
  unsigned int in_s8;
  
  if (param_1 != -1) {
    *(unsigned int *)(param_1 + 0x8c) = in_s7;
    *(unsigned int *)(param_1 + 0x90) = in_s2;
    do {
      *(unsigned int *)(param_1 + 0x94) = in_s1;
      in_s1 = *(unsigned int *)(param_1 + 0x1a4);
      *(unsigned int *)(param_1 + 0x1b8) = in_s8;
      *(unsigned int *)(param_1 + 0x10) = in_s2;
      coprocessor_storelong(0,in_cr0,param_1);
    } while( 1 );
  }
  DAT_004e316c = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
