/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00518f04` (_code @ 0x518f04, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0051b830(void);
int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0051b830. */


unsigned int FUN_00518f04(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v2;
  
  puVar2 = param_1;
  FUN_0051b830();
  temp_v2 = (float)VectorUnsignedToFloat((unsigned int)*puVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (in_fpscr & 0xfffffff) |
          ((unsigned int)(temp_v2 * 0.03125f * *(float *)(param_1 + 0xc) == in_s0) << 0x1e);
  temp_v1 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  if (!temp_v1) {
    temp_v1 = puVar2 == (unsigned short *)(((unsigned int)param_1[7] * 6 - 6) + *(int *)(param_1 + 0x10));
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

} /* extern "C" */
