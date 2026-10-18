/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002befdc` (_code @ 0x2befdc, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002befdc(void)

{
/* irregular: irregular input(s): in_cr0, in_cr8, in_fpscr, in_s0; 9 native warning(s); review required */
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr8;
  unsigned int in_s0;
  unsigned int temp_v0;
  
  VectorSignedToFloat(in_s0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = VectorSignedToFloat(in_s0,(unsigned char)(in_fpscr >> 0x16) & 3);
  coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
  VectorFloatToUnsigned(temp_v0,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
