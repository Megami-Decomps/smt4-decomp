/* NON_MATCHING: found outside every function: its address is in FUN_00312858's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00100d3c for reference (not compiled; its own view of the boundaries):

/* WARNING: Control flow encountered bad instruction data * /

void FUN_00100d3c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned int unaff_r6;
  char in_NG;
  unsigned char in_ZR;
  unsigned char in_CY;
  char in_OV;
  
  if (in_ZR) {
    param_2 = *param_4;
    unaff_r6 = param_4[2];
  }
  if (!in_ZR && in_NG == in_OV) {
    param_1 = (unsigned int *)func_0x004010b4(param_1,param_2);
  }
  if (in_NG != in_OV) {
    param_1 = param_1 + -0x1f0;
  }
  if ((unsigned char)in_CY) {
    *param_1 = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here * /
  halt_baddata();
}
*/
#include "common.h"
