/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00519860` (_code @ 0x519860, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0051ca30. */
extern unsigned int nn_math_ARMv6_HermiteC_FAST(int, int, unsigned int, unsigned int);


unsigned int FUN_00519860(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  
  puVar2 = param_1;
  FUN_0051ca30();
  temp_v2 = *puVar2;
  temp_v4 = (float)VectorUnsignedToFloat(temp_v2 & 0xfff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v4 * (float)param_1[6] == in_s0) << 0x1e);
  temp_v3 = romwright_subpiece_4_1_0(temp_v1 >> 0x1e,0);
  if (!temp_v3) {
    temp_v3 = puVar2 == (unsigned int *)(param_1[8] + ((unsigned int)*(unsigned short *)((int)param_1 + 0xe) * 8 - 8));
  }
  if (temp_v3) {
    VectorUnsignedToFloat(temp_v2 >> 0xc,(unsigned char)(temp_v1 >> 0x16) & 3);
    return temp_v2 >> 0xc;
  }
  temp_v0 = puVar2[2] >> 0xc;
  VectorUnsignedToFloat(puVar2[2] & 0xfff,(unsigned char)(temp_v1 >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)((int)puVar2 + 6),(unsigned char)(temp_v1 >> 0x16) & 3);
  VectorUnsignedToFloat(temp_v2 >> 0xc,(unsigned char)(temp_v1 >> 0x16) & 3);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(temp_v1 >> 0x16) & 3);
  VectorSignedToFloat((int)(short)puVar2[3],(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v1 = nn_math_ARMv6_HermiteC_FAST
                    ((int)*(short *)((int)puVar2 + 6),(int)(short)puVar2[3],temp_v0,temp_v2 >> 0xc);
  return temp_v1;
}
