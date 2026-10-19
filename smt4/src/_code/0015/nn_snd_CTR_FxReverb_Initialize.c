/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_FxReverb_Initialize` (_code @ 0x15e298, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0015ec54. */


unsigned char nn_snd_CTR_FxReverb_Initialize(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  int temp_v4;
  int temp_v5;
  float temp_v6;
  int temp_v7;
  
  temp_v2 = *(float *)(param_1 + 0xc);
  temp_v1 = *(int *)(param_1 + 4);
  temp_v5 = VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = temp_v5;
  if (temp_v5 >= 0x409c6a80) {
    temp_v7 = temp_v1;
  }
  *(int *)(param_1 + 0xf0) = temp_v1;
  *(float *)(param_1 + 0xf4) = temp_v2;
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x38);
  temp_v1 = *(int *)(param_1 + 0x30) * 4;
  temp_v0 = *(int *)(param_1 + 0x34) * 4;
  temp_v6 = 4.888f;
  if (temp_v5 >= 0x409c6a80) {
    temp_v6 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v7 = VectorFloatToUnsigned(temp_v6 * 0.20458265f,3);
  temp_v5 = VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = 4.888f;
  if (temp_v5 >= 0x409c6a80) {
    temp_v6 = temp_v2;
  }
  temp_v3 = (*(int *)(param_1 + 0x28) + 0x1fU) & 0xffffffe0;
  if (temp_v5 >= 0x409c6a80) {
    temp_v6 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  *(unsigned int *)(param_1 + 0x3c) = temp_v3;
  temp_v5 = temp_v3 + temp_v7 * 0x280;
  *(int *)(param_1 + 0x4c) = temp_v5;
  temp_v4 = VectorFloatToUnsigned(temp_v6 * 0.20458265f,3);
  temp_v5 = temp_v5 + temp_v4 * 0x280;
  *(int *)(param_1 + 0x5c) = temp_v5;
  temp_v5 = temp_v5 + temp_v1;
  *(int *)(param_1 + 0x60) = temp_v5;
  temp_v5 = temp_v5 + temp_v0;
  *(int *)(param_1 + 0x7c) = temp_v5;
  temp_v5 = temp_v5 + *(int *)(param_1 + 0x38) * 4;
  temp_v7 = temp_v7 * 0x280 + temp_v5;
  *(int *)(param_1 + 0x40) = temp_v5;
  *(int *)(param_1 + 0x50) = temp_v7;
  temp_v7 = temp_v7 + temp_v4 * 0x280;
  *(int *)(param_1 + 100) = temp_v7;
  temp_v7 = temp_v7 + temp_v1;
  *(int *)(param_1 + 0x68) = temp_v7;
  *(int *)(param_1 + 0x80) = temp_v7 + temp_v0;
  FUN_0015ec54(param_1);
  *(unsigned char *)(param_1 + 0x104) = 1;
  return 1;
}
