/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f92a4` (_code @ 0x3f92a4, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(...);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern unsigned short *FUN_003f87cc(void);


int FUN_003f92a4(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v3;
  
  puVar2 = (unsigned short *)FUN_003f87cc();
  temp_v3 = (float)VectorUnsignedToFloat((unsigned int)(unsigned char)*puVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 8) * temp_v3 == in_s0) << 0x1e);
  temp_v2 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  if (!temp_v2) {
    temp_v2 = puVar2 == param_1 + (unsigned int)*param_1 * 2 + 8;
  }
  if (temp_v2) {
    temp_v1 = (unsigned int)*(unsigned char *)((int)puVar2 + 1) + ((unsigned char)puVar2[1] & 0xf) * 0x100;
    VectorUnsignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
  }
  else {
    VectorUnsignedToFloat((unsigned int)(unsigned char)puVar2[2],(unsigned char)(temp_v0 >> 0x16) & 3);
    VectorUnsignedToFloat
              ((unsigned int)*(unsigned char *)((int)puVar2 + 1) + ((unsigned char)puVar2[1] & 0xf) * 0x100,
               (unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v1 = (unsigned int)*(unsigned char *)((int)puVar2 + 5) + ((unsigned char)puVar2[3] & 0xf) * 0x100;
    VectorUnsignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
  }
  return temp_v1;
}

} /* extern "C" */
