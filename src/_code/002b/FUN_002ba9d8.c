/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba9d8` (_code @ 0x2ba9d8, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00131548. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002ba9d8(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int unaff_r6;
  
  FUN_00131548(DAT_00433158,param_1);
  *param_2 = param_4;
  param_2[1] = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
