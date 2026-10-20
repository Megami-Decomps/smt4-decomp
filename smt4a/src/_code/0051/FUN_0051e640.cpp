/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051e640` (_code @ 0x51e640, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0051d730(...);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(...);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0051d730. */
extern int nn_math_ARMv6_HermiteC_FAST(int, int);


int FUN_0051e640(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v5;
  
  FUN_0051d730();
  temp_v1 = *param_1;
  puVar3 = (unsigned short *)FUN_0051d730(param_1);
  temp_v5 = (float)VectorUnsignedToFloat((unsigned int)(unsigned char)*puVar3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 8) * temp_v5 == in_s0) << 0x1e);
  temp_v4 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  if (!temp_v4) {
    temp_v4 = puVar3 == param_1 + (unsigned int)temp_v1 * 2 + 8;
  }
  if (temp_v4) {
    temp_v2 = (unsigned int)*(unsigned char *)((int)puVar3 + 1) + ((unsigned char)puVar3[1] & 0xf) * 0x100;
    VectorUnsignedToFloat(temp_v2,(unsigned char)(temp_v0 >> 0x16) & 3);
    return temp_v2;
  }
  VectorUnsignedToFloat((unsigned int)(unsigned char)puVar3[2],(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v2 = (char)*(unsigned char *)((int)puVar3 + 3) * 0x10 + (unsigned int)(unsigned char)((unsigned char)puVar3[1] >> 4);
  VectorUnsignedToFloat
            ((unsigned int)*(unsigned char *)((int)puVar3 + 1) + ((unsigned char)puVar3[1] & 0xf) * 0x100,
             (unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v3 = (char)*(unsigned char *)((int)puVar3 + 7) * 0x10 + (unsigned int)(unsigned char)((unsigned char)puVar3[3] >> 4);
  VectorSignedToFloat(temp_v3,(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorUnsignedToFloat
            ((unsigned int)*(unsigned char *)((int)puVar3 + 5) + ((unsigned char)puVar3[3] & 0xf) * 0x100,
             (unsigned char)(temp_v0 >> 0x16) & 3);
  VectorSignedToFloat(temp_v2,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v2 = nn_math_ARMv6_HermiteC_FAST(temp_v2,temp_v3);
  return temp_v2;
}

} /* extern "C" */
