/* NON_MATCHING: fragment of a larger function (loads VFP registers and ends after conversions without returning or restoring them). */
/* romwright 0.5.0 decompilation of FUN_002be56c for reference (not compiled; its own view of the boundaries):

/* WARNING: Control flow encountered bad instruction data * /
/* WARNING: Removing unreachable block (ram,0x002bedba) * /

void FUN_002be56c(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  float in_s0;
  float in_s1;
  unsigned char auStack_28 [24];
  
  VectorSignedToFloat((int)(*param_1 + param_1[2] + in_s0),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(param_1[1] + param_1[3] + in_s1),(unsigned char)(in_fpscr >> 0x16) & 3);
  iVar1 = FUN_002c30c4(param_4,param_3);
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,auStack_28);
  if (iVar1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here * /
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here * /
  halt_baddata();
}
*/
#include "common.h"
