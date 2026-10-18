/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051e75c` (_code @ 0x51e75c, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned short *FUN_0051d7e0(void);
extern unsigned int nn_math_ARMv6_HermiteC_FAST(int, int, unsigned int);


unsigned int FUN_0051e75c(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v2;
  
  puVar1 = (unsigned short *)FUN_0051d7e0();
  temp_v2 = (float)VectorUnsignedToFloat((unsigned int)*puVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (in_fpscr & 0xfffffff) |
          ((unsigned int)(*(float *)(param_1 + 8) * temp_v2 * 0.03125f == in_s0) << 0x1e);
  temp_v1 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  if (!temp_v1) {
    temp_v1 = puVar1 == param_1 + (unsigned int)*param_1 * 3 + 7;
  }
  if (temp_v1) {
    VectorUnsignedToFloat((unsigned int)puVar1[1],(unsigned char)(temp_v0 >> 0x16) & 3);
    return (unsigned int)puVar1[1];
  }
  VectorUnsignedToFloat((unsigned int)puVar1[3],(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorSignedToFloat((int)(short)puVar1[5],(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)puVar1[1],(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)puVar1[4],(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorSignedToFloat((int)(short)puVar1[2],(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v0 = nn_math_ARMv6_HermiteC_FAST((int)(short)puVar1[2],(int)(short)puVar1[5],(unsigned int)puVar1[4]);
  return temp_v0;
}
