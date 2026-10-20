/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00519740` (_code @ 0x519740, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0051c338(void);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(...);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0051c338. */
extern int nn_math_ARMv6_HermiteC_FAST(int, int);


int FUN_00519740(unsigned char *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *pbVar2;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  
  pbVar2 = param_1;
  FUN_0051c338();
  temp_v4 = (float)VectorUnsignedToFloat((unsigned int)*pbVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v4 * *(float *)(param_1 + 0x18) == in_s0) << 0x1e);
  temp_v3 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  if (!temp_v3) {
    temp_v3 = pbVar2 == (unsigned char *)(*(int *)(param_1 + 0x20) + ((unsigned int)*(unsigned short *)(param_1 + 0xe) * 6 - 6)
                              );
  }
  if (temp_v3) {
    temp_v1 = (unsigned int)pbVar2[1] + (unsigned int)pbVar2[2] * 0x100;
    VectorUnsignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
    return temp_v1;
  }
  VectorUnsignedToFloat((unsigned int)pbVar2[6],(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)pbVar2[1] + (unsigned int)pbVar2[2] * 0x100,(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)pbVar2[7] + (unsigned int)pbVar2[8] * 0x100,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v1 = (char)pbVar2[5] * 0x10 + (unsigned int)(pbVar2[4] >> 4);
  temp_v2 = (unsigned int)pbVar2[9] + (char)(pbVar2[10] << 4) * 0x10;
  VectorSignedToFloat(temp_v2,(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorSignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v1 = nn_math_ARMv6_HermiteC_FAST(temp_v1,temp_v2);
  return temp_v1;
}

} /* extern "C" */
