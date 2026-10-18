/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f9e74` (_code @ 0x3f9e74, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_00225704(int, int, unsigned int);
extern unsigned int *FUN_003f8c24(void);


unsigned int FUN_003f9e74(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  
  puVar2 = (unsigned int *)FUN_003f8c24();
  temp_v2 = *puVar2;
  temp_v4 = (float)VectorUnsignedToFloat(temp_v2 & 0xfff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 8) * temp_v4 == in_s0) << 0x1e);
  temp_v3 = romwright_subpiece_4_1_0(temp_v1 >> 0x1e,0);
  if (!temp_v3) {
    temp_v3 = puVar2 == (unsigned int *)(param_1 + (unsigned int)*param_1 * 4 + 6);
  }
  if (temp_v3) {
    VectorUnsignedToFloat(temp_v2 >> 0xc,(unsigned char)(temp_v1 >> 0x16) & 3);
    return temp_v2 >> 0xc;
  }
  VectorUnsignedToFloat(puVar2[2] & 0xfff,(unsigned char)(temp_v1 >> 0x16) & 3);
  VectorSignedToFloat((int)(short)*(unsigned short *)((int)puVar2 + 6),(unsigned char)(temp_v1 >> 0x16) & 3);
  VectorSignedToFloat((int)(short)(unsigned short)puVar2[3],(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v0 = puVar2[2] >> 0xc;
  VectorUnsignedToFloat(temp_v2 >> 0xc,(unsigned char)(temp_v1 >> 0x16) & 3);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v1 = FUN_00225704((int)(short)*(unsigned short *)((int)puVar2 + 6),(int)(short)(unsigned short)puVar2[3],temp_v0)
  ;
  return temp_v1;
}
