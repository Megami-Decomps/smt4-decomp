/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041ca28` (_code @ 0x41ca28, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int FUN_0014bef4(unsigned int);
extern unsigned int FUN_00184964(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_0041ca28(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar3;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  
  (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))();
  temp_v3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x2c)) {
    temp_v8 = 3.0517578e-05f;
    temp_v9 = 1.5258789e-05f;
    temp_v10 = 0x43800000;
    temp_v6 = 0;
    do {
      puVar3 = (unsigned int *)(*(int *)(param_1 + 0x18) + temp_v3 * 0x50);
      temp_v0 = puVar3[0x13];
      puVar3[0x13] = temp_v0 + 1;
      aeabi_idivmod(temp_v0 + 1,*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x20));
      if (temp_v2 == 0) {
        temp_v1 = FUN_00184964(0xffff8001,0x8000);
        temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = *(float *)(*(int *)(param_1 + 0x1c) + 0x24);
        temp_v5 = temp_v5 + (*(float *)(*(int *)(param_1 + 0x1c) + 0x28) - temp_v5) * temp_v4 * temp_v8;
        temp_v1 = FUN_0014bef4(0xffff);
        temp_v4 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v7 = temp_v4 * temp_v9 * (float)temp_v10;
        temp_v4 = temp_v7;
        FUN_001b63b0();
        FUN_001a1ee0();
        *(float *)&puVar3[0x10] = temp_v7;
        *(float *)&puVar3[0x11] = temp_v4;
        puVar3[0x12] = temp_v6;
        *(float *)&puVar3[0x10] = (float)puVar3[0x10] * temp_v5;
        *(float *)&puVar3[0x11] = (float)puVar3[0x11] * temp_v5;
        *(float *)&puVar3[0x12] = (float)puVar3[0x12] * temp_v5;
      }
      puVar3[1] = 0;
      *puVar3 = 0x3f800000;
      puVar3[2] = 0;
      temp_v3 = temp_v3 + 1;
      puVar3[3] = puVar3[0x10];
      puVar3[4] = 0;
      puVar3[5] = 0x3f800000;
      puVar3[6] = 0;
      puVar3[8] = 0;
      puVar3[7] = puVar3[0x11];
      puVar3[9] = 0;
      puVar3[10] = 0x3f800000;
      puVar3[0xb] = puVar3[0x12];
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0x3f800000;
    } while (temp_v3 < *(int *)(*(int *)(param_1 + 0x1c) + 0x2c));
  }
  return;
}
