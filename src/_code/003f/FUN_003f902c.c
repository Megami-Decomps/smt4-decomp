/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f902c` (_code @ 0x3f902c, 0x17c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002a30dc. */


unsigned long long FUN_003f902c(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  float temp_v6;
  
  temp_v6 = *(float *)(param_1 + 8);
  temp_v3 = in_s0 / temp_v6 + 0.5f;
  FUN_002a30dc();
  temp_v4 = VectorFloatToUnsigned(temp_v3,3);
  temp_v1 = (unsigned int)*param_1;
  puVar3 = (unsigned int *)(param_1 + 10);
  if (((*(unsigned int *)(param_1 + 10) & 0xfff) <= temp_v4) &&
     (puVar3 = (unsigned int *)(param_1 + temp_v1 * 2 + 8),
     temp_v4 < (*(unsigned int *)(param_1 + temp_v1 * 2 + 8) & 0xfff))) {
    temp_v3 = (float)VectorSignedToFloat(temp_v1 - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = VectorFloatToUnsigned(*(float *)(param_1 + 2) * temp_v3 * in_s0,3);
    puVar3 = (unsigned int *)(param_1 + temp_v5 * 2 + 10);
    puVar2 = puVar3;
    if (temp_v4 < (*puVar3 & 0xfff)) {
      do {
        puVar3 = puVar3 + -1;
      } while (temp_v4 < (*puVar3 & 0xfff));
    }
    else {
      do {
        puVar3 = puVar2;
        puVar2 = puVar3 + 1;
      } while ((puVar3[1] & 0xfff) <= temp_v4);
    }
  }
  temp_v4 = *puVar3;
  temp_v3 = (float)VectorUnsignedToFloat(temp_v4 & 0xfff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 * temp_v3 == in_s0) << 0x1e);
  temp_v2 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  if (!temp_v2) {
    temp_v2 = puVar3 == (unsigned int *)(param_1 + temp_v1 * 2 + 8);
  }
  if (temp_v2) {
    temp_v1 = temp_v4 >> 0xc;
    VectorUnsignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
  }
  else {
    temp_v4 = temp_v4 >> 0xc;
    temp_v1 = puVar3[1] >> 0xc;
    VectorUnsignedToFloat(puVar3[1] & 0xfff,(unsigned char)(temp_v0 >> 0x16) & 3);
    VectorUnsignedToFloat(temp_v4,(unsigned char)(temp_v0 >> 0x16) & 3);
    VectorUnsignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
  }
  return romwright_piece_4_4(temp_v4,temp_v1);
}
