/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f95b8` (_code @ 0x3f95b8, 0xd8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern unsigned short *FUN_003f8aa8(void);


unsigned int FUN_003f95b8(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v2;
  
  puVar2 = (unsigned short *)FUN_003f8aa8();
  temp_v2 = (float)VectorUnsignedToFloat((unsigned int)*puVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (in_fpscr & 0xfffffff) |
          ((unsigned int)(*(float *)(param_1 + 8) * temp_v2 * 0.03125f == in_s0) << 0x1e);
  temp_v1 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  if (!temp_v1) {
    temp_v1 = puVar2 == param_1 + (unsigned int)*param_1 * 3 + 7;
  }
  if (temp_v1) {
    VectorUnsignedToFloat((unsigned int)puVar2[1],(unsigned char)(temp_v0 >> 0x16) & 3);
    return (unsigned int)puVar2[1];
  }
  VectorUnsignedToFloat((unsigned int)puVar2[3],(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)puVar2[1],(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)puVar2[4],(unsigned char)(temp_v0 >> 0x16) & 3);
  return (unsigned int)puVar2[4];
}
