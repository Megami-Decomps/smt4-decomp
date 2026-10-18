/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a7c4` (_code @ 0x23a7c4, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002a6a24. */
extern unsigned int FUN_002bc300(unsigned int);
/* Supplied declaration required: FUN_002bd940. */
/* Supplied declaration required: FUN_002c25f0. */


void FUN_0023a7c4(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned long long param_6,float param_7,float param_8,
                 unsigned int param_9)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  float temp_v0;
  unsigned int in_fpscr;
  float temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  
  temp_v0 = 0.0f;
  FUN_002bd940();
  param_1[4] = temp_v0;
  *(unsigned int *)((int)temp_v0 + 0x14) = param_2;
  temp_v0 = (float)VectorSignedToFloat((int)((unsigned long long)param_6 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3)
  ;
  *(unsigned int *)((int)param_1[4] + 0x18) = param_3;
  temp_v1 = (float)VectorSignedToFloat((int)param_6,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)((int)param_1[4] + 4) = 0xde1;
  *(unsigned int *)((int)param_1[4] + 8) = 0x10000;
  *(unsigned int *)((int)param_1[4] + 0xc) = 0x2000000;
  *(unsigned int *)((int)param_1[4] + 0x24) = param_9;
  *param_1 = temp_v1;
  param_1[1] = temp_v0;
  param_1[2] = param_7;
  param_1[3] = param_8;
  FUN_002a6a24(param_7,param_8,(int)param_1[4] + 0x34);
  temp_v0 = param_1[4];
  temp_v3 = (float)VectorSignedToFloat(*(int *)((int)temp_v0 + 0x14) * *(int *)((int)temp_v0 + 0x18),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = VectorFloatToUnsigned(temp_v3 * temp_v1,3);
  FUN_002c25f0(*(unsigned int *)((int)temp_v0 + 0x24),temp_v2);
  temp_v2 = FUN_002bc300(*(unsigned int *)((int)param_1[4] + 0x24));
  *(unsigned int *)((int)param_1[4] + 0x30) = temp_v2;
  param_1[6] = 1.0f;
  *(unsigned char *)(param_1 + 7) = 0;
  *(unsigned char *)((int)param_1 + 0x1d) = 0;
  return;
}
