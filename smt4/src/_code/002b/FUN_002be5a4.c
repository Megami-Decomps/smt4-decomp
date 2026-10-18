/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be5a4` (_code @ 0x2be5a4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
extern int FUN_002c30c4(unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bedba) */

void FUN_002be5a4(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_cr0, in_cr3, in_cr6, in_cr8; 6 native warning(s); review required */
  int temp_v0;
  unsigned int in_cr0;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned char temp_v1 [24];
  
  temp_v0 = FUN_002c30c4(param_3);
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,temp_v1);
  if (temp_v0 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
