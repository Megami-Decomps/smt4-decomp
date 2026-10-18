/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd2b4` (_code @ 0x2bd2b4, 0x5e bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000024; /* 0x24 */

extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002bd420. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bd2b4(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002a8764();
  FUN_002bd420(temp_v0 + 4,param_1,0xe);
  uRam00000024 = 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
