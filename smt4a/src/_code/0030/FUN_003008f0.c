/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003008f0` (_code @ 0x3008f0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char bRam00000000; /* 0x0 */

/* Supplied declaration required: FUN_002e9a64. */


void FUN_003008f0(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_NG, in_OV, in_ZR, in_lr; 10 native warning(s); review required */
  int unaff_r4;
  short unaff_r8;
  unsigned int *unaff_r9;
  unsigned int unaff_r11;
  unsigned int in_lr;
  unsigned char in_NG;
  unsigned char in_ZR;
  unsigned char in_OV;
  
  if (in_OV) {
    *unaff_r9 = in_lr;
    unaff_r9[-1] = register0x00000054;
    unaff_r9[-2] = unaff_r11;
  }
  if (in_ZR || in_NG != in_OV) {
    param_2 = (int)unaff_r8 * (int)(short)param_3 + unaff_r4;
  }
  if (in_NG) {
    param_1 = 0;
    param_3 = (unsigned int)bRam00000000;
  }
  FUN_002e9a64(param_1,param_2,param_3);
  return;
}
