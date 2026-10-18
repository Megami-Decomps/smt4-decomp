/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c587c` (_code @ 0x2c587c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044e0f8; /* 0x44e0f8 */
extern unsigned char DAT_0044e0f9; /* 0x44e0f9 */
extern unsigned char DAT_0044e0fa; /* 0x44e0fa */

/* Supplied declaration required: FUN_001082a0. */
/* Supplied declaration required: FUN_00109670. */
/* Supplied declaration required: FUN_002c34e8. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c587c(void)

{
/* irregular: 5 native warning(s); review required */
  FUN_001082a0(DAT_0044e0f8);
  FUN_002c34e8(DAT_0044e0f9);
  FUN_00109670(DAT_0044e0fa);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
