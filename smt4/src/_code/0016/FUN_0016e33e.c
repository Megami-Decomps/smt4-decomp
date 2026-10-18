/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e33e` (_code @ 0x16e33e, 0x5d bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_003e64c6. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0016e33e(unsigned int param_1)

{
/* irregular: irregular input(s): in_NG, in_OV, in_ZR, in_r12; 13 native warning(s); review required */
  unsigned int *unaff_r4;
  unsigned int unaff_r7;
  int unaff_r8;
  unsigned int unaff_r9;
  unsigned int in_r12;
  char in_NG;
  unsigned char in_ZR;
  char in_OV;
  
  param_1 = param_1 & (param_1 >> 7);
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0x6ee3a0);
  }
  if (in_ZR) {
    software_interrupt(0xf0e280);
    software_interrupt(0xf0e8ac);
    software_interrupt(0xf0e8ac);
    software_interrupt(0xf0e8ac);
    software_interrupt(0xf0e8ac);
    software_interrupt(0xf0e8ac);
    software_interrupt(0xf0e8ac);
    software_interrupt(0xf0e8ac);
  }
  if (!in_ZR && in_NG == in_OV) {
    param_1 = (in_r12 >> 0x11) - unaff_r8;
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    *unaff_r4 = 0x16e38e;
    unaff_r4[-1] = param_1;
    unaff_r4[-2] = register0x00000054;
    unaff_r4[-3] = unaff_r9;
    unaff_r4[-4] = unaff_r7;
  }
  if ((unsigned char)in_NG) {
    FUN_003e64c6();
  }
  if ((unsigned char)in_NG) {
    software_interrupt(0x92e28f);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
