/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00327b98` (_code @ 0x327b98, 0x324 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(unsigned int, double);
int FUN_0024505c(int, unsigned char *, int, int);
int FUN_002c32a0(int, int, int, unsigned int, int, int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned char DAT_0047372c; /* 0x47372c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0024505c. */
/* Supplied declaration required: FUN_002c32a0. */


unsigned int * FUN_00327b98(int param_1)

{
/* irregular: irregular input(s): in_d8, in_fpscr; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned short temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned long long in_d8;
  long long temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int *temp_v21;
  
  temp_v19 = (unsigned int)((unsigned long long)in_d8 >> 0x20);
  temp_v0 = *(unsigned int *)(param_1 + 0x38);
  puVar2 = (unsigned int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,temp_v0 * 0xc + 4,0x10,1);
  *puVar2 = (unsigned int)(puVar2 + 1);
  temp_v1 = *(unsigned int *)(param_1 + 0x3c);
  if (temp_v1 < 4) {
    temp_v1 = 3;
  }
  *(unsigned int *)(param_1 + 0x3c) = temp_v1;
  if ((temp_v1 & 1) == 0) {
    *(unsigned int *)(param_1 + 0x3c) = temp_v1 + 1;
  }
  temp_v4 = *(unsigned int *)(param_1 + 0x70);
  temp_v3 = *(unsigned int *)(param_1 + 0x74);
  temp_v1 = *(unsigned int *)(param_1 + 0x78);
  temp_v20 = 0;
  temp_v6 = *(int *)(param_1 + 0x3c) + 1;
  temp_v7 = temp_v4 & 0xffffff;
  if (temp_v0 != 0) {
    temp_v19 = 0x3f800000;
  }
  temp_v18 = (unsigned long long)temp_v19 << 0x20;
  temp_v21 = (unsigned int *)*puVar2;
  temp_v14 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v16 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v19 = temp_v3 & 0xffffff;
  temp_v8 = temp_v1 & 0xffffff;
  temp_v11 = (int)(*(float *)(param_1 + 0x68) * temp_v14);
  temp_v6 = (int)(*(float *)(param_1 + 0x6c) * temp_v16);
  if (temp_v0 != 0) {
    do {
      temp_v2 = *(unsigned int *)(param_1 + 0x3c);
      FUN_0024505c(temp_v2,&DAT_0047372c,5,0x48);
      temp_v5 = 0;
      *temp_v21 = temp_v2;
      temp_v9 = (int)*(short *)(temp_v2 + 2) / 5;
      if (temp_v9 != 0) {
        puVar5 = *(unsigned int **)(*(int *)(temp_v2 + 8) + 0x38);
        do {
          if ((((temp_v5 & 1) - 1) & temp_v5) == 0) {
            temp_v10 = (unsigned int)((unsigned long long)temp_v18 >> 0x20);
            if ((int)temp_v5 < temp_v11) {
              temp_v14 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v16 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v18 = CONCAT44(temp_v10,temp_v14 / temp_v16);
            }
            else if ((int)temp_v5 <= temp_v6) {
              temp_v18 = romwright_piece_4_4(temp_v10,temp_v10);
            }
            else {
              temp_v16 = (float)VectorUnsignedToFloat(temp_v9 - temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v14 = (float)VectorUnsignedToFloat
                                        ((temp_v9 - temp_v5) - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v18 = CONCAT44(temp_v10,temp_v14 / temp_v16);
            }
          }
          temp_v15 = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = (float)VectorUnsignedToFloat(temp_v3 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v17 = (float)temp_v18;
          temp_v16 = (float)VectorUnsignedToFloat(temp_v4 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v5 = temp_v5 + 1;
          temp_v10 = VectorFloatToUnsigned(temp_v15 * temp_v17,3);
          temp_v12 = VectorFloatToUnsigned(temp_v14 * temp_v17,3);
          temp_v13 = VectorFloatToUnsigned(temp_v16 * temp_v17,3);
          *(char *)puVar5 = (char)temp_v8;
          *(char *)((int)puVar5 + 1) = (char)(temp_v8 >> 8);
          *(char *)((int)puVar5 + 2) = (char)(temp_v8 >> 0x10);
          *(char *)((int)puVar5 + 3) = (char)temp_v10;
          *(char *)(puVar5 + 1) = (char)temp_v19;
          *(char *)((int)puVar5 + 5) = (char)(temp_v19 >> 8);
          *(char *)((int)puVar5 + 6) = (char)(temp_v19 >> 0x10);
          *(char *)((int)puVar5 + 7) = (char)temp_v12;
          *(char *)(puVar5 + 2) = (char)temp_v7;
          *(char *)((int)puVar5 + 9) = (char)(temp_v7 >> 8);
          *(char *)((int)puVar5 + 10) = (char)(temp_v7 >> 0x10);
          *(char *)((int)puVar5 + 0xb) = (char)temp_v13;
          puVar5[3] = puVar5[1];
          puVar5[4] = *puVar5;
          puVar5 = puVar5 + 5;
        } while (temp_v5 < temp_v9);
      }
      temp_v9 = temp_v20 + 1;
      temp_v21[1] = temp_v20 * -4 - 1;
      temp_v21 = temp_v21 + 3;
      temp_v20 = temp_v9;
    } while (temp_v9 < temp_v0);
  }
  return puVar2;
}

} /* extern "C" */
