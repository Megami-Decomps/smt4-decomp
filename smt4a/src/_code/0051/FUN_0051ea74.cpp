/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051ea74` (_code @ 0x51ea74, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0051d95c(...);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0051d95c. */
extern unsigned int nn_math_ARMv6_HermiteC_FAST(int, int, unsigned int);


unsigned int FUN_0051ea74(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v5;
  
  FUN_0051d95c();
  temp_v1 = *param_1;
  puVar3 = (unsigned int *)FUN_0051d95c(param_1);
  temp_v3 = *puVar3;
  temp_v5 = (float)VectorUnsignedToFloat(temp_v3 & 0xfff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 8) * temp_v5 == in_s0) << 0x1e);
  temp_v4 = romwright_subpiece_4_1_0(temp_v2 >> 0x1e,0);
  if (!temp_v4) {
    temp_v4 = puVar3 == (unsigned int *)(param_1 + (unsigned int)temp_v1 * 4 + 6);
  }
  if (temp_v4) {
    VectorUnsignedToFloat(temp_v3 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
    return temp_v3 >> 0xc;
  }
  VectorUnsignedToFloat(puVar3[2] & 0xfff,(unsigned char)(temp_v2 >> 0x16) & 3);
  VectorSignedToFloat((int)(short)*(unsigned short *)((int)puVar3 + 6),(unsigned char)(temp_v2 >> 0x16) & 3);
  VectorSignedToFloat((int)(short)(unsigned short)puVar3[3],(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v0 = puVar3[2] >> 0xc;
  VectorUnsignedToFloat(temp_v3 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v2 = nn_math_ARMv6_HermiteC_FAST
                    ((int)(short)*(unsigned short *)((int)puVar3 + 6),(int)(short)(unsigned short)puVar3[3],temp_v0);
  return temp_v2;
}

} /* extern "C" */
