/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc644` (_code @ 0x2bc644, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000024; /* 0x24 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Supplied declaration required: FUN_002bd420. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bc644(unsigned int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr13, in_cr2, in_cr5, in_fpscr; 17 native warning(s); review required */
  int temp_v0;
  int unaff_r5;
  unsigned int unaff_r6;
  int unaff_r7;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr2;
  unsigned int in_cr5;
  unsigned int in_cr13;
  float temp_v2;
  unsigned char temp_v3 [48];
  
  temp_v2 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = temp_v2 * 0.5f;
  temp_v1 = 1;
  if (romwright_fabs_4(temp_v2) != 0.0f) {
    if ((int)(((unsigned int)romwright_fabs_4(temp_v2) >> 0x17) - 0x40) < 0) {
      temp_v2 = (float)((unsigned int)temp_v2 >> 0x1f);
    }
    param_4 = -0x1a7fdff4;
    temp_v1 = temp_v2 == 0.0f;
    if (temp_v1) {
      coprocessor_load(0xe,in_cr0,unaff_r5 + 0x128);
      temp_v2 = (float)((int)unaff_r6 >> 1);
    }
    temp_v1 = !temp_v1 || (unaff_r6 & 1) != 0;
    temp_v2 = (float)(((int)temp_v2 << 0x18) | ((((unsigned int)temp_v2 >> 8) & 0xff) << 0x10) |
                    ((((unsigned int)temp_v2 >> 0x10) & 0xff) << 8) | ((unsigned int)temp_v2 >> 0x18));
  }
  coprocessor_store(0,in_cr13,temp_v3);
  *(float *)((int)temp_v2 * 2) = temp_v2;
  *(char *)(unaff_r7 + 0x12) = SUB41(temp_v2,0);
  temp_v0 = param_4 + 0x80 + (unsigned int)temp_v1;
  *(int *)(unaff_r6 + 0x44) = param_4;
  *(int *)(param_3 + 0x54) = temp_v0;
  *(char *)(unaff_r7 + 0x11) = SUB41(temp_v2,0);
  *(char *)(unaff_r6 + 9) = (char)unaff_r5;
  *(char *)(temp_v0 + 1) = (char)param_4;
  if ((unaff_r6 & 0x7fffffff) != 0) {
    coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_002bd420(temp_v0 * 2);
  uRam00000024 = 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
