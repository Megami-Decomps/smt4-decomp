/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4000` (_code @ 0x2c4000, 0x160 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000000; /* 0x0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002c4000(void)

{
/* irregular: irregular input(s): in_ZR; 5 native warning(s); review required */
  unsigned int unaff_r4;
  char in_ZR;
  
  if (in_ZR == '\0') {
    software_interrupt(0x25);
    uRam00000000 = 0;
    return unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
