/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f9a58` (_code @ 0x3f9a58, 0x10c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00225704(int, int);
extern unsigned short *FUN_003f89f8(void);


int FUN_003f9a58(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  
  puVar2 = (unsigned short *)FUN_003f89f8();
  temp_v4 = (float)VectorUnsignedToFloat((unsigned int)(unsigned char)*puVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 8) * temp_v4 == in_s0) << 0x1e);
  temp_v3 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  if (!temp_v3) {
    temp_v3 = puVar2 == param_1 + (unsigned int)*param_1 * 2 + 8;
  }
  if (temp_v3) {
    temp_v1 = (unsigned int)*(unsigned char *)((int)puVar2 + 1) + ((unsigned char)puVar2[1] & 0xf) * 0x100;
    VectorUnsignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
    return temp_v1;
  }
  VectorUnsignedToFloat((unsigned int)(unsigned char)puVar2[2],(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v1 = (char)*(unsigned char *)((int)puVar2 + 3) * 0x10 + (unsigned int)(unsigned char)((unsigned char)puVar2[1] >> 4);
  VectorUnsignedToFloat
            ((unsigned int)*(unsigned char *)((int)puVar2 + 1) + ((unsigned char)puVar2[1] & 0xf) * 0x100,
             (unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v2 = (char)*(unsigned char *)((int)puVar2 + 7) * 0x10 + (unsigned int)(unsigned char)((unsigned char)puVar2[3] >> 4);
  VectorSignedToFloat(temp_v2,(unsigned char)(temp_v0 >> 0x16) & 3);
  VectorUnsignedToFloat
            ((unsigned int)*(unsigned char *)((int)puVar2 + 5) + ((unsigned char)puVar2[3] & 0xf) * 0x100,
             (unsigned char)(temp_v0 >> 0x16) & 3);
  VectorSignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v1 = FUN_00225704(temp_v1,temp_v2);
  return temp_v1;
}
