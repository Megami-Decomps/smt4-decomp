/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ecac6` (_code @ 0x3ecac6, 0xd bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: func_0x01624f8a. */
/* Supplied declaration required: func_0x017ecbde. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_003ecac6(void)

{
/* irregular: irregular input(s): in_NG, in_OV, in_ZR; 7 native warning(s); review required */
  char in_NG;
  unsigned char in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    func_0x01624f8a();
  }
  if (in_ZR || in_NG != in_OV) {
    func_0x017ecbde();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
