/* NON_MATCHING: found outside every function: branched to by FUN_0010123c; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00100888 for reference (not compiled; its own view of the boundaries):

/* WARNING: Control flow encountered bad instruction data * /

void FUN_00100888(unsigned int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int unaff_r4;
  unsigned int unaff_r6;
  unsigned int unaff_r8;
  unsigned int *unaff_r10;
  unsigned int unaff_r11;
  unsigned int in_lr;
  unsigned char in_NG;
  unsigned char in_ZR;
  unsigned char in_CY;
  unsigned char in_OV;
  
  if (in_OV) {
    *param_3 = in_lr;
    param_3[-1] = (unsigned int)register0x00000054;
    param_3[-2] = unaff_r11;
    param_3[-3] = unaff_r4;
    param_3[-4] = param_1;
  }
  if (in_ZR) {
    unaff_r6 = (unsigned int)(unsigned char)param_4[-0x280];
  }
  if (!in_OV) {
    register0x00000054 = (BADSPACEBASE *)(unaff_r8 & (param_2 << 10));
  }
  if (in_ZR) {
    in_lr = (unsigned int)*(unsigned char *)((int)param_4 + 10);
  }
  if (in_CY && !in_ZR) {
    register0x00000054 = (BADSPACEBASE *)(unaff_r8 & (param_2 << 10));
  }
  if (in_ZR) {
    in_lr = *param_4;
    param_4 = (unsigned int *)((int)param_4 - unaff_r6);
  }
  else {
    *(unsigned char *)((int)param_3 * 0x401) = 0;
  }
  if (in_OV) {
    param_1 = unaff_r8 & ((int)param_3 >> (unaff_r6 & 0xff));
  }
  if (in_NG) {
    param_1 = param_1 - param_2;
  }
  if (in_OV) {
    *unaff_r10 = in_lr;
    unaff_r10[-1] = (unsigned int)register0x00000054;
    unaff_r10[-2] = unaff_r11;
    unaff_r10[-3] = unaff_r6;
    unaff_r10[-4] = (unsigned int)param_4;
    unaff_r10[-5] = param_2;
    unaff_r10[-6] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here * /
  halt_baddata();
}
*/
#include "common.h"
