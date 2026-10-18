/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc828` (_code @ 0x2bc828, 0xba bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif


void FUN_002bc828(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char unaff_r5;
  romwright_code *UNRECOVERED_JUMPTABLE;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  
  temp_v6 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = temp_v6 * 0.5f;
  temp_v1 = 0;
  if ((romwright_fabs_4(temp_v4) != 0.0f) && (temp_v1 = ((unsigned int)romwright_fabs_4(temp_v4) >> 0x17) - 0x40, -1 >= temp_v1)) {
    temp_v3 = ((unsigned int)temp_v4 >> 0x1f) << 0x17;
  }
  else {
    temp_v3 = (((unsigned int)temp_v4 & 0x7fffff) >> 7) | (temp_v1 << 0x10) | (((unsigned int)temp_v4 >> 0x1f) << 0x17);
  }
  temp_v6 = 2.0f / temp_v6;
  if (romwright_fabs_4(temp_v6) != 0.0f) {
    temp_v1 = ((unsigned int)romwright_fabs_4(temp_v6) >> 0x17) - 0x40;
    if (temp_v1 < 0) {
      temp_v0 = ((unsigned int)temp_v6 >> 0x1f) << 0x1e;
      temp_v1 = temp_v0 * 2;
      *(int *)(temp_v1 + 0xc0) = param_4;
      temp_v2 = *(unsigned int *)(((int)(temp_v5 * 0.5f) >> 4) + 0x74);
      *(unsigned char *)(temp_v1 + 0x85) = unaff_r5;
      *(unsigned int *)(temp_v3 + param_4 + (unsigned int)(0xffffffc7 < temp_v1 + 0x44U) + 0x54) = temp_v2;
                    /* WARNING: Could not recover jumptable at 0x002bda8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    temp_v1 = 0;
  }
  temp_v0 = ((unsigned int)temp_v6 & 0x7fffff) | (temp_v1 << 0x17) | (((unsigned int)temp_v6 >> 0x1f) << 0x1e);
  temp_v1 = temp_v0 * 2;
  *(int *)(temp_v1 + 0xc0) = param_4;
  temp_v2 = *(unsigned int *)(((int)(temp_v5 * 0.5f) >> 4) + 0x74);
  *(unsigned char *)(temp_v1 + 0x85) = unaff_r5;
  *(unsigned int *)(temp_v3 + param_4 + (unsigned int)(0xffffffc7 < temp_v1 + 0x44U) + 0x54) = temp_v2;
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
