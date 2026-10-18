/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4dc4` (_code @ 0x2b4dc4, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0013c5f4. */
/* Supplied declaration required: FUN_0013c6b4. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b4dc4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int unaff_r5;
  int unaff_r7;
  unsigned char uStack00000f80;
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_0013c6b4(unaff_r7 << 0xd);
  FUN_0013c5f4(&uStack00000f80,unaff_r5 + 0x80);
  return;
}
