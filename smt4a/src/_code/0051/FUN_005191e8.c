/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005191e8` (_code @ 0x5191e8, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0051ca30. */


unsigned long long FUN_005191e8(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  
  puVar3 = param_1;
  FUN_0051ca30();
  temp_v2 = *puVar3;
  temp_v4 = (float)VectorUnsignedToFloat(temp_v2 & 0xfff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v4 * (float)param_1[6] == in_s0) << 0x1e);
  temp_v3 = romwright_subpiece_4_1_0(temp_v1 >> 0x1e,0);
  if (!temp_v3) {
    temp_v3 = puVar3 == (unsigned int *)(param_1[8] + ((unsigned int)*(unsigned short *)((int)param_1 + 0xe) * 8 - 8));
  }
  if (temp_v3) {
    VectorUnsignedToFloat(temp_v2 >> 0xc,(unsigned char)(temp_v1 >> 0x16) & 3);
    return romwright_piece_4_4(temp_v2,temp_v2 >> 0xc);
  }
  temp_v0 = puVar3[2] >> 0xc;
  VectorUnsignedToFloat(puVar3[2] & 0xfff,(unsigned char)(temp_v1 >> 0x16) & 3);
  VectorUnsignedToFloat(temp_v2 >> 0xc,(unsigned char)(temp_v1 >> 0x16) & 3);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(temp_v1 >> 0x16) & 3);
  return romwright_piece_4_4(temp_v2 >> 0xc,temp_v0);
}
