/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2dbc` (_code @ 0x1d2dbc, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a9698(unsigned int);
int rt_memclr(unsigned int, unsigned int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001a9698. */
/* Supplied declaration required: rt_memclr. */


void FUN_001d2dbc(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned long long temp_v6;
  unsigned long long temp_v7;
  
  temp_v0 = 0;
  temp_v7 = 0x4120000000000000;
  temp_v1 = VectorUnsignedToFloat(*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = 4.888f;
  if (temp_v1 >= 0x409c6a80) {
    temp_v2 = (float)VectorUnsignedToFloat(*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v1 = VectorFloatToUnsigned(temp_v2 * 0.20458265f,3);
  *(int *)(param_1 + 0x9c) = temp_v1 * 0xa0;
  *(unsigned int *)(param_1 + 0xa0) = 0;
  temp_v1 = VectorUnsignedToFloat(*(float *)(param_1 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = 4.888f;
  if (temp_v1 >= 0x409c6a80) {
    temp_v2 = *(float *)(param_1 + 0xc);
  }
  if (temp_v1 >= 0x409c6a80) {
    temp_v2 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v1 = VectorFloatToUnsigned(temp_v2 * 0.20458265f,3);
  VectorUnsignedToFloat(*(unsigned int *)(param_1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(int *)(param_1 + 0xa4) = temp_v1 * 0xa0;
  *(unsigned int *)(param_1 + 0xa8) = 0;
  *(unsigned int *)(param_1 + 0xac) = *(unsigned int *)(param_1 + 0x30);
  *(unsigned int *)(param_1 + 0xb0) = *(unsigned int *)(param_1 + 0x34);
  temp_v6 = 0x43000000;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    *(unsigned int *)(temp_v1 + 0xb4) = 0;
    VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0xac),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (float)((unsigned long long)temp_v7 >> 0x20);
    FUN_001a9698(*(unsigned int *)(temp_v1 + 0xac));
    temp_v5 = (float)temp_v6;
    temp_v0 = temp_v0 + 1;
    *(int *)(temp_v1 + 0xbc) = (int)(temp_v2 * temp_v5);
  } while (temp_v0 < 2);
  temp_v2 = *(float *)(param_1 + 0x14);
  *(unsigned int *)(param_1 + 0xc4) = *(unsigned int *)(param_1 + 0x38);
  *(unsigned int *)(param_1 + 200) = 0;
  if ((int)temp_v2 >= 0x3f733334) {
    temp_v2 = 0.95f;
  }
  *(int *)(param_1 + 0xcc) = (int)(*(float *)(param_1 + 0x10) * temp_v5);
  *(int *)(param_1 + 0xe4) = (int)(*(float *)(param_1 + 0x20) * temp_v5);
  *(int *)(param_1 + 0xe0) = (int)(*(float *)(param_1 + 0x1c) * temp_v5);
  if (*(char *)(param_1 + 0x24) != '\x01') {
    temp_v3 = 1.0f - temp_v2;
    temp_v4 = temp_v5;
  }
  else {
    temp_v3 = temp_v2 - 1.0f;
    temp_v4 = -128.0f;
  }
  *(int *)(param_1 + 0xe8) = (int)(temp_v3 * temp_v5);
  *(int *)(param_1 + 0xec) = (int)(temp_v2 * temp_v4);
  rt_memclr(*(unsigned int *)(param_1 + 0x28),*(unsigned int *)(param_1 + 0x2c));
  return;
}

} /* extern "C" */
