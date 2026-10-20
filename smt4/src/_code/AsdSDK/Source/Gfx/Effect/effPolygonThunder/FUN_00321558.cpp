/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321558` (_code @ 0x321558, 0x304 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024505c(int, unsigned char *, int, int);
int FUN_002c32a0(int, int, int, unsigned int, int, int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern unsigned char DAT_0047372c; /* 0x47372c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0024505c. */
/* Supplied declaration required: FUN_002c32a0. */


unsigned int * FUN_00321558(int param_1)

{
/* irregular: irregular input(s): in_d8, in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned short temp_v7;
  unsigned int *puVar10;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned long long in_d8;
  unsigned int temp_v21;
  unsigned int *temp_v22;
  
  temp_v2 = *(unsigned int *)(param_1 + 0x38);
  puVar4 = (unsigned int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,temp_v2 * 0x10 + 4,0x10,1);
  *puVar4 = (unsigned int)(puVar4 + 1);
  temp_v3 = *(unsigned int *)(param_1 + 0x3c);
  if (temp_v3 < 4) {
    temp_v3 = 3;
  }
  *(unsigned int *)(param_1 + 0x3c) = temp_v3;
  temp_v18 = (float)VectorSignedToFloat(temp_v3 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v19 = (float)VectorSignedToFloat(temp_v3 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = *(unsigned int *)(param_1 + 0x74);
  temp_v10 = *(unsigned int *)(param_1 + 0x70);
  temp_v11 = temp_v2 != 0;
  temp_v3 = *(unsigned int *)(param_1 + 0x78);
  temp_v21 = 0;
  if (temp_v11) {
    in_d8 = romwright_piece_4_4(0x3f800000,(int)in_d8);
  }
  temp_v22 = (unsigned int *)*puVar4;
  if (temp_v11) {
    in_d8 = in_d8 & 0xffffffff00000000;
  }
  temp_v4 = temp_v10 & 0xffffff;
  temp_v14 = (int)(*(float *)(param_1 + 0x68) * temp_v18);
  temp_v5 = temp_v8 & 0xffffff;
  temp_v12 = (int)(*(float *)(param_1 + 0x6c) * temp_v19);
  temp_v6 = temp_v3 & 0xffffff;
  if (temp_v11) {
    do {
      temp_v7 = *(unsigned int *)(param_1 + 0x3c);
      FUN_0024505c(temp_v7,&DAT_0047372c,5,0x48);
      temp_v9 = 0;
      *temp_v22 = temp_v7;
      temp_v1 = (int)*(short *)(temp_v7 + 2) / 5;
      if (temp_v1 != 0) {
        puVar10 = *(unsigned int **)(*(int *)(temp_v7 + 8) + 0x38);
        do {
          if ((int)temp_v9 < temp_v14) {
            temp_v18 = (float)VectorUnsignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v19 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v18 = temp_v18 / temp_v19;
          }
          else if (temp_v12 >= (int)temp_v9) {
            temp_v18 = (float)(in_d8 >> 0x20);
          }
          else {
            temp_v19 = (float)VectorUnsignedToFloat(temp_v1 - temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v18 = (float)VectorUnsignedToFloat(temp_v1 - temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v18 = temp_v18 / temp_v19;
          }
          temp_v20 = (float)VectorUnsignedToFloat(temp_v3 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v19 = (float)VectorUnsignedToFloat(temp_v8 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorUnsignedToFloat(temp_v10 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = temp_v9 + 1;
          temp_v13 = VectorFloatToUnsigned(temp_v20 * temp_v18,3);
          temp_v15 = VectorFloatToUnsigned(temp_v19 * temp_v18,3);
          temp_v17 = VectorFloatToUnsigned(temp_v16 * temp_v18,3);
          *(char *)puVar10 = (char)temp_v6;
          *(char *)((int)puVar10 + 1) = (char)(temp_v6 >> 8);
          *(char *)((int)puVar10 + 2) = (char)(temp_v6 >> 0x10);
          *(char *)((int)puVar10 + 3) = (char)temp_v13;
          *(char *)(puVar10 + 1) = (char)temp_v5;
          *(char *)((int)puVar10 + 5) = (char)(temp_v5 >> 8);
          *(char *)((int)puVar10 + 6) = (char)(temp_v5 >> 0x10);
          *(char *)((int)puVar10 + 7) = (char)temp_v15;
          *(char *)(puVar10 + 2) = (char)temp_v4;
          *(char *)((int)puVar10 + 9) = (char)(temp_v4 >> 8);
          *(char *)((int)puVar10 + 10) = (char)(temp_v4 >> 0x10);
          *(char *)((int)puVar10 + 0xb) = (char)temp_v17;
          puVar10[3] = puVar10[1];
          puVar10[4] = *puVar10;
          puVar10 = puVar10 + 5;
        } while (temp_v9 < temp_v1);
      }
      temp_v0 = temp_v21 * -4;
      temp_v21 = temp_v21 + 1;
      temp_v22[3] = (unsigned int)in_d8;
      temp_v22[1] = temp_v0 - 1;
      temp_v22 = temp_v22 + 4;
    } while (temp_v21 < temp_v2);
  }
  return puVar4;
}

} /* extern "C" */
