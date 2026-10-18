/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c411c` (_code @ 0x2c411c, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00465198; /* 0x465198 */

/* Supplied declaration required: func_0x006c4784. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c411c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  DAT_00465198 = (unsigned char)param_1;
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x006c4784(1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
