/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6302` (_code @ 0x2b6302, 0xd bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b6302(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_NG, in_OV, in_ZR, in_lr; 12 native warning(s); review required */
  unsigned int *unaff_r4;
  unsigned int unaff_r6;
  unsigned int unaff_r7;
  unsigned int unaff_r8;
  unsigned int unaff_r10;
  unsigned int in_lr;
  char in_NG;
  unsigned char in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    *unaff_r4 = 0x2b630a;
    unaff_r4[-1] = in_lr;
    unaff_r4[-2] = register0x00000054;
    unaff_r4[-3] = unaff_r10;
    unaff_r4[-4] = unaff_r8;
    unaff_r4[-5] = unaff_r7;
    unaff_r4[-6] = unaff_r6;
    unaff_r4[-7] = (unsigned int)unaff_r4;
    unaff_r4[-8] = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
