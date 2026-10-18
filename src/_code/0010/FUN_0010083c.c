/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010083c` (_code @ 0x10083c, 0x8 bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_0010083c(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_CY, in_NG, in_OV, in_ZR, in_lr; 14 native warning(s); review required */
  unsigned int unaff_r4;
  unsigned int unaff_r6;
  unsigned int unaff_r7;
  unsigned int unaff_r8;
  unsigned int unaff_r10;
  unsigned int unaff_r11;
  unsigned int in_lr;
  char in_NG;
  unsigned char in_ZR;
  unsigned char in_CY;
  unsigned char in_OV;
  
  if ((unsigned char)in_NG != in_OV) {
    param_3 = param_1[-0x22];
  }
  *param_1 = 0x100850;
  param_1[-1] = in_lr;
  param_1[-2] = register0x00000054;
  param_1[-3] = 0x100845;
  param_1[-4] = unaff_r8;
  param_1[-5] = unaff_r7;
  param_1[-6] = unaff_r6;
  param_1[-7] = param_3;
  param_1[-8] = (unsigned int)param_2;
  if (in_ZR || (unsigned char)in_NG != in_OV) {
    param_3 = (unsigned int)param_2 & ((int)param_1 << 0x10);
  }
  if (!in_OV) {
    param_3 = (unsigned int)param_2 & ((int)param_1 << 2);
  }
  if (in_CY) {
    param_1[1] = unaff_r4;
    param_1[2] = unaff_r8;
    param_1[3] = unaff_r10;
    param_1[4] = unaff_r11;
    param_1[5] = 0x100845;
    param_1[6] = register0x00000054;
    param_1[7] = 0x10085c;
    *param_1 = 0x100860;
    param_1[-1] = in_lr;
    param_1[-2] = 0x100845;
    param_1[-3] = unaff_r11;
    param_1[-4] = param_3;
  }
  if (!in_OV) {
    *param_2 = 0x100864;
    param_2[-1] = in_lr;
    param_2[-2] = 0x100845;
    param_2[-3] = (unsigned int)param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
