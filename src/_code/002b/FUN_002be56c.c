/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be56c` (_code @ 0x2be56c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
extern int FUN_002c30c4(unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bedba) */

void FUN_002be56c(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr3, in_cr6, in_cr8, in_fpscr, in_s0, in_s1; 10 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  float in_s0;
  float in_s1;
  unsigned char temp_v1 [24];
  
  VectorSignedToFloat((int)(*param_1 + param_1[2] + in_s0),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(param_1[1] + param_1[3] + in_s1),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = FUN_002c30c4(param_4,param_3);
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,temp_v1);
  if (temp_v0 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
