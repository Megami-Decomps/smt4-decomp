/* NON_MATCHING: found outside every function: the Thumb body of the ARM entry stub FUN_00101e78; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00101e80 for reference (not compiled; its own view of the boundaries):

/* WARNING: Control flow encountered bad instruction data * /

void FUN_00101e80(int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
  unsigned int *unaff_r6;
  unsigned int unaff_r7;
  unsigned int in_r12;
  unsigned char in_ZR;
  unsigned char in_CY;
  unsigned char in_OV;
  unsigned int in_cr11;
  unsigned char uStack00000000;
  
  if (!in_ZR) {
    coprocessor_loadlong(5,in_cr11,param_3 + 0x3c0);
  }
  else {
    param_3 = *param_1;
    param_1 = (int *)((int)param_1 - (int)(&uStack00000000 + !in_CY));
  }
  if (in_OV) {
    *unaff_r6 = &LAB_00101e94;
    unaff_r6[-1] = register0x00000054;
    unaff_r6[-2] = in_r12;
    unaff_r6[-3] = unaff_r7;
    unaff_r6[-4] = param_4;
    unaff_r6[-5] = param_3;
    unaff_r6[-6] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here * /
  halt_baddata();
}
*/
#include "common.h"
