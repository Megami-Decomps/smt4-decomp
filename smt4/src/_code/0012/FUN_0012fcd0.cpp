/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012fcd0` (_code @ 0x12fcd0, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b99b8(void);
int FUN_002c3944(unsigned int, unsigned int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b99b8. */
/* Supplied declaration required: FUN_002c3944. */


void FUN_0012fcd0(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  float temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned long long temp_v4;
  unsigned long long temp_v5;
  
  temp_v2 = 4.888f;
  temp_v0 = 0;
  temp_v5 = 0x4120000000000000;
  temp_v3 = VectorUnsignedToFloat(*(unsigned int *)(param_1 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = temp_v2;
  if (temp_v3 >= 0x409c6a80) {
    temp_v1 = (float)VectorUnsignedToFloat
                             (*(unsigned int *)(param_1 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v3 = VectorFloatToUnsigned(temp_v1 * 0.20458265f,3);
  *(int *)(param_1 + 0xa4) = temp_v3 * 0xa0;
  *(unsigned int *)(param_1 + 0xa8) = 0;
  temp_v3 = VectorUnsignedToFloat(*(unsigned int *)(param_1 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  if (temp_v3 >= 0x409c6a80) {
    temp_v2 = (float)VectorUnsignedToFloat
                             (*(unsigned int *)(param_1 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v3 = VectorFloatToUnsigned(temp_v2 * 0.20458265f,3);
  VectorUnsignedToFloat(*(unsigned int *)(param_1 + 0x10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(int *)(param_1 + 0xac) = temp_v3 * 0xa0;
  *(unsigned int *)(param_1 + 0xb0) = 0;
  *(unsigned int *)(param_1 + 0xb4) = *(unsigned int *)(param_1 + 0x38);
  *(unsigned int *)(param_1 + 0xb8) = *(unsigned int *)(param_1 + 0x3c);
  temp_v4 = 0x43000000;
  do {
    temp_v3 = param_1 + temp_v0 * 4;
    *(unsigned int *)(temp_v3 + 0xbc) = 0;
    VectorSignedToFloat(*(unsigned int *)(temp_v3 + 0xb4),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = (float)((unsigned long long)temp_v5 >> 0x20);
    FUN_002b99b8();
    temp_v2 = (float)temp_v4;
    temp_v0 = temp_v0 + 1;
    *(int *)(temp_v3 + 0xc4) = (int)(temp_v1 * temp_v2);
  } while (temp_v0 < 2);
  temp_v1 = *(float *)(param_1 + 0x1c);
  *(unsigned int *)(param_1 + 0xcc) = *(unsigned int *)(param_1 + 0x40);
  *(unsigned int *)(param_1 + 0xd0) = 0;
  if ((int)temp_v1 >= 0x3f733334) {
    temp_v1 = 0.95f;
  }
  *(int *)(param_1 + 0xe8) = (int)(*(float *)(param_1 + 0x24) * temp_v2);
  *(int *)(param_1 + 0xec) = (int)(*(float *)(param_1 + 0x28) * temp_v2);
  *(int *)(param_1 + 0xd4) = (int)(*(float *)(param_1 + 0x18) * temp_v2);
  if (*(char *)(param_1 + 0x2d) != '\x01') {
    *(int *)(param_1 + 0xf0) = (int)((1.0f - temp_v1) * temp_v2);
    *(int *)(param_1 + 0xf4) = (int)(temp_v1 * temp_v2);
  }
  else {
    *(int *)(param_1 + 0xf4) = (int)(temp_v1 * -128.0f);
    *(int *)(param_1 + 0xf0) = (int)((temp_v1 - 1.0f) * temp_v2);
  }
  FUN_002c3944(*(unsigned int *)(param_1 + 0x30),*(unsigned int *)(param_1 + 0x34));
  return;
}

} /* extern "C" */
