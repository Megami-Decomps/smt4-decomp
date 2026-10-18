/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4b84` (_code @ 0x2c4b84, 0x4d bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00465124; /* 0x465124 */

/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c54f0. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c4b84(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 4 native warning(s); review required */
  FUN_002c3aa8(DAT_00465124);
  FUN_002c54f0(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
