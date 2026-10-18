/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00375736` (_code @ 0x375736, 0x9 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00375736(void)

{
/* irregular: irregular input(s): in_CY, in_ZR; 5 native warning(s); review required */
  unsigned char in_ZR;
  unsigned char in_CY;
  
  if (in_CY && !in_ZR) {
    software_interrupt(0xf8e58e);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
