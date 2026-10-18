/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_FxReverb_Initialize` (_code @ 0x45ecb0, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00174108. */


void nw_snd_FxReverb_Initialize(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  int temp_v9;
  float temp_v10;
  int temp_v11;
  float temp_v12;
  int temp_v13;
  
  temp_v10 = *(float *)(param_1 + 0xc);
  temp_v1 = *(int *)(param_1 + 0x3c);
  temp_v13 = VectorUnsignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = *(int *)(param_1 + 0x38);
  temp_v8 = *(unsigned int *)(param_1 + 0x14);
  temp_v0 = *(int *)(param_1 + 0x40);
  *(unsigned char *)(param_1 + 0x10c) = *(unsigned char *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x100) = temp_v4;
  *(unsigned int *)(param_1 + 0xfc) = temp_v8;
  *(int *)(param_1 + 0x108) = temp_v0;
  *(int *)(param_1 + 0x104) = temp_v1;
  *(float *)(param_1 + 0xf8) = temp_v10;
  if (temp_v13 >= 0x409c6a80) {
    temp_v10 = (float)VectorUnsignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v12 = 4.888f;
  if (temp_v13 < 0x409c6a80) {
    temp_v10 = temp_v12;
  }
  temp_v2 = (*(int *)(param_1 + 0x30) + 0x1fU) & 0xffffffe0;
  temp_v13 = VectorFloatToUnsigned(temp_v10 * 0.20458265f,3);
  temp_v11 = VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (temp_v11 >= 0x409c6a80) {
    temp_v12 = (float)VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v11 = 0;
  temp_v9 = VectorFloatToUnsigned(temp_v12 * 0.20458265f,3);
  if (*(char *)(param_1 + 0x10d) != '\0') {
    do {
      temp_v5 = param_1 + temp_v11 * 4;
      temp_v6 = temp_v2 + temp_v13 * 0x280;
      *(unsigned int *)(temp_v5 + 0x44) = temp_v2;
      temp_v7 = param_1 + temp_v11 * 8;
      temp_v3 = temp_v6 + temp_v9 * 0x280;
      *(int *)(temp_v5 + 0x54) = temp_v6;
      temp_v6 = temp_v3 + temp_v4 * 4;
      *(int *)(temp_v7 + 100) = temp_v3;
      *(int *)(temp_v7 + 0x68) = temp_v6;
      temp_v6 = temp_v6 + temp_v1 * 4;
      *(int *)(temp_v5 + 0x84) = temp_v6;
      temp_v11 = temp_v11 + 1;
      temp_v2 = temp_v6 + temp_v0 * 4;
    } while (temp_v11 < (int)(unsigned int)*(unsigned char *)(param_1 + 0x10d));
  }
  FUN_00174108(param_1);
  *(unsigned char *)(param_1 + 0x10e) = 1;
  return;
}
