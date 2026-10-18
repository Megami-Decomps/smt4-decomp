/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec9c6` (_code @ 0x3ec9c6, 0xd bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: func_0xfe8ecaaa. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_003ec9c6(unsigned int param_1)

{
/* irregular: irregular input(s): in_OV, in_ZR, in_lr; 8 native warning(s); review required */
  unsigned int temp_v0;
  int in_lr;
  unsigned char in_ZR;
  unsigned char in_OV;
  
  if (in_ZR) {
    param_1 = param_1 & (in_lr >> 0x20);
  }
  temp_v0 = param_1;
  if (!in_OV) {
    temp_v0 = SignedSaturate(param_1,0x19);
    SignedDoesSaturate(param_1,0x19);
  }
  if (!in_ZR) {
    func_0xfe8ecaaa(temp_v0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
