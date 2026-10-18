/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00375a4a` (_code @ 0x375a4a, 0x9 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00375a4a(void)

{
/* irregular: irregular input(s): in_NG, in_ZR; 5 native warning(s); review required */
  unsigned int unaff_r4;
  unsigned char in_NG;
  unsigned char in_ZR;
  unsigned char uStack00000000;
  
  if (in_ZR) {
    in_NG = (int)(unaff_r4 & ((int)&uStack00000000 << 0xb)) < 0;
  }
  if (in_NG) {
    software_interrupt(0x5be595);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
