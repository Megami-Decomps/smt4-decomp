/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003431f4` (_code @ 0x3431f4, 0x2c8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_003434c0; /* 0x3434c0 */
extern unsigned char DAT_004203d0; /* 0x4203d0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
extern int FUN_002c1de4(unsigned int, unsigned int);


unsigned int * FUN_003431f4(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  float temp_v6;
  unsigned int temp_v7 [10];
  
  *param_1 = (unsigned int)&DAT_004203d0;
  FUN_002be7fc(param_1 + 1,&LAB_003434c0);
  FUN_002be7fc(param_1 + 0xb,&LAB_003434c0);
  param_1[10] = 1;
  *(unsigned char *)(param_1 + 9) = 0;
  *(unsigned char *)(param_1 + 0x13) = 0;
  *(unsigned char *)((int)param_1 + 0x4d) = 1;
  *(unsigned char *)((int)param_1 + 0x4e) = 2;
  *(unsigned char *)((int)param_1 + 0x4f) = 3;
  *(unsigned char *)(param_1 + 0x14) = 4;
  *(unsigned char *)((int)param_1 + 0x51) = 5;
  *(unsigned char *)((int)param_1 + 0x52) = 0;
  *(unsigned char *)((int)param_1 + 0x53) = 1;
  *(unsigned char *)(param_1 + 0x15) = 0;
  *(unsigned char *)((int)param_1 + 0x55) = 0;
  *(unsigned char *)((int)param_1 + 0x56) = 0;
  *(unsigned char *)((int)param_1 + 0x57) = 0;
  *(unsigned char *)(param_1 + 0x16) = 0;
  *(unsigned char *)((int)param_1 + 0x59) = 0;
  temp_v7[0] = 0x49;
  temp_v7[1] = 0x4a;
  temp_v7[2] = 0x4b;
  temp_v7[3] = 0x4c;
  temp_v7[4] = 0x4d;
  temp_v7[5] = 0x4e;
  temp_v7[6] = 0x4f;
  temp_v7[7] = 0x50;
  temp_v1 = 0;
  do {
    temp_v0 = FUN_002bf6d0(0x14,temp_v7[temp_v1]);
    temp_v2 = temp_v1 + 1;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    param_1[temp_v1 * 2 + 0x26] = temp_v3;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    param_1[temp_v1 * 2 + 0x27] = temp_v3;
    temp_v1 = temp_v2;
  } while (temp_v2 < 8);
  temp_v1 = FUN_002bf6d0(0x14,0x46);
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x20] = temp_v3;
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x21] = temp_v3;
  temp_v1 = FUN_002bf6d0(0x14,0x47);
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x22] = temp_v3;
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x23] = temp_v3;
  temp_v1 = FUN_002bf6d0(0x14,0x48);
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x24] = temp_v3;
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x25] = temp_v3;
  temp_v1 = FUN_002bf6d0(0x14,0x51);
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x1c] = temp_v3;
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x1d] = temp_v3;
  temp_v1 = FUN_002bf6d0(0x14,0x52);
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x1e] = temp_v3;
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x1f] = temp_v3;
  param_1[0x1d] = temp_v3;
  temp_v3 = VectorSignedToFloat((int)**(short **)(temp_v1 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x36] = temp_v3;
  temp_v1 = FUN_002bf6d0(0x14,0x6b);
  temp_v1 = *(int *)(temp_v1 + 0xc);
  temp_v6 = 255.0f;
  temp_v5 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x10) * 255.0f,3);
  temp_v2 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x14) * 255.0f,3);
  temp_v0 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x18) * 255.0f,3);
  temp_v4 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x1c) * 255.0f,3);
  param_1[0x37] = (temp_v5 << 0x18) | (temp_v2 << 0x10) | (temp_v0 << 8) | temp_v4;
  temp_v1 = FUN_002bf6d0(0x14,0x6e);
  temp_v1 = *(int *)(temp_v1 + 0xc);
  temp_v0 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x18) * temp_v6,3);
  temp_v4 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x1c) * temp_v6,3);
  temp_v2 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x10) * temp_v6,3);
  temp_v1 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x14) * temp_v6,3);
  param_1[0x38] = (temp_v2 << 0x18) | (temp_v1 << 0x10) | (temp_v0 << 8) | temp_v4;
  temp_v1 = FUN_002c1de4(0x14,3);
  *(unsigned int *)(temp_v1 + 0x38) = 3;
  temp_v1 = FUN_002c1de4(0x14,2);
  *(unsigned int *)(temp_v1 + 0x38) = 2;
  return param_1;
}
