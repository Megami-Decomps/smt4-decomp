/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004093f4` (_code @ 0x4093f4, 0x278 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00409670; /* 0x409670 */
extern unsigned char DAT_00557be0; /* 0x557be0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern int FUN_00153f64(unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, unsigned int);


unsigned int * FUN_004093f4(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  float temp_v6;
  
  *param_1 = (unsigned int)&DAT_00557be0;
  FUN_00100388(param_1 + 1,&LAB_00409670);
  FUN_00100388(param_1 + 0xb,&LAB_00409670);
  param_1[10] = 1;
  *(unsigned char *)(param_1 + 9) = 0;
  *(unsigned char *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 2;
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
  temp_v0 = FUN_001834a4(0xc,0x46);
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x20] = temp_v1;
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x21] = temp_v1;
  temp_v0 = FUN_001834a4(0xc,0x47);
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x22] = temp_v1;
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x23] = temp_v1;
  temp_v0 = FUN_001834a4(0xc,0x48);
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x24] = temp_v1;
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x25] = temp_v1;
  temp_v0 = FUN_001834a4(0xc,0x51);
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x1c] = temp_v1;
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x1d] = temp_v1;
  temp_v0 = FUN_001834a4(0xc,0x52);
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x1e] = temp_v1;
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x1f] = temp_v1;
  param_1[0x1d] = temp_v1;
  temp_v1 = VectorSignedToFloat((int)**(short **)(temp_v0 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x26] = temp_v1;
  temp_v0 = FUN_001834a4(0xc,0x6b);
  temp_v0 = *(int *)(temp_v0 + 0xc);
  temp_v6 = 255.0f;
  temp_v2 = VectorFloatToUnsigned(*(float *)(temp_v0 + 0x10) * 255.0f,3);
  temp_v4 = VectorFloatToUnsigned(*(float *)(temp_v0 + 0x14) * 255.0f,3);
  temp_v5 = VectorFloatToUnsigned(*(float *)(temp_v0 + 0x18) * 255.0f,3);
  temp_v3 = VectorFloatToUnsigned(*(float *)(temp_v0 + 0x1c) * 255.0f,3);
  param_1[0x27] = temp_v3 | (temp_v2 << 0x18) | (temp_v4 << 0x10) | (temp_v5 << 8);
  temp_v0 = FUN_001834a4(0xc,0x6e);
  temp_v0 = *(int *)(temp_v0 + 0xc);
  temp_v4 = VectorFloatToUnsigned(*(float *)(temp_v0 + 0x10) * temp_v6,3);
  temp_v2 = VectorFloatToUnsigned(*(float *)(temp_v0 + 0x14) * temp_v6,3);
  temp_v5 = VectorFloatToUnsigned(*(float *)(temp_v0 + 0x18) * temp_v6,3);
  temp_v3 = VectorFloatToUnsigned(*(float *)(temp_v0 + 0x1c) * temp_v6,3);
  param_1[0x28] = (temp_v4 << 0x18) | (temp_v2 << 0x10) | (temp_v5 << 8) | temp_v3;
  temp_v0 = FUN_00153f64(0xc,3);
  *(unsigned int *)(temp_v0 + 0x38) = 3;
  temp_v0 = FUN_00153f64(0xc,2);
  *(unsigned int *)(temp_v0 + 0x38) = 2;
  return param_1;
}
