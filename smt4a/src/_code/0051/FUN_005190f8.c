/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005190f8` (_code @ 0x5190f8, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0051c338. */


int FUN_005190f8(unsigned char *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *pbVar2;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v3;
  
  pbVar2 = param_1;
  FUN_0051c338();
  temp_v3 = (float)VectorUnsignedToFloat((unsigned int)*pbVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v3 * *(float *)(param_1 + 0x18) == in_s0) << 0x1e);
  temp_v2 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  if (!temp_v2) {
    temp_v2 = pbVar2 == (unsigned char *)(((unsigned int)*(unsigned short *)(param_1 + 0xe) * 6 - 6) + *(int *)(param_1 + 0x20)
                              );
  }
  if (temp_v2) {
    temp_v1 = (unsigned int)pbVar2[1] + (unsigned int)pbVar2[2] * 0x100;
    VectorUnsignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
    return temp_v1;
  }
  VectorUnsignedToFloat((unsigned int)pbVar2[6],(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)pbVar2[1] + (unsigned int)pbVar2[2] * 0x100,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v1 = (unsigned int)pbVar2[7] + (unsigned int)pbVar2[8] * 0x100;
  VectorUnsignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
  return temp_v1;
}
