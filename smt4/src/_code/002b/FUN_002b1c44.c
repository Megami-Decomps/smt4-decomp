/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b1c44` (_code @ 0x2b1c44, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b1c44(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int *unaff_r7;
  
  if ((*(char *)(param_1 + 0x88) == '\0') && (*(int *)(param_1 + 100) != 0)) {
    *unaff_r7 = param_3;
    unaff_r7[1] = unaff_r4;
    unaff_r7[2] = unaff_r5;
    unaff_r7[3] = (unsigned int)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}
