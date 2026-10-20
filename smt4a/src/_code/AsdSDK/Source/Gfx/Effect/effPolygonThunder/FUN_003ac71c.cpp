/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ac71c` (_code @ 0x3ac71c, 0x310 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, unsigned int, int, int);
int FUN_002e6dd4(void);
int FUN_00350d90(int, unsigned char *, int, int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern unsigned char DAT_005c1eec; /* 0x5c1eec */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_00350d90. */


int * FUN_003ac71c(int param_1)

{
/* irregular: irregular input(s): in_d8, in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short temp_v5;
  unsigned int *puVar8;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long in_d8;
  unsigned int temp_v19;
  unsigned int *temp_v20;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x38);
  piVar2 = (int *)0x10000;
  memAlloc(0x10000,0x100,0,temp_v0 * 0x30 + 0x10,0x10,1);
  FUN_002e6dd4();
  *piVar2 = (int)(piVar2 + 4);
  piVar2[3] = (int)piVar2;
  temp_v1 = *(unsigned int *)(param_1 + 0x3c);
  if (temp_v1 < 4) {
    temp_v1 = 3;
  }
  *(unsigned int *)(param_1 + 0x3c) = temp_v1;
  temp_v9 = *(unsigned int *)(param_1 + 0x70);
  temp_v16 = (float)VectorSignedToFloat(temp_v1 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v17 = (float)VectorSignedToFloat(temp_v1 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = *(unsigned int *)(param_1 + 0x74);
  temp_v1 = *(unsigned int *)(param_1 + 0x78);
  temp_v19 = 0;
  if (temp_v0 != 0) {
    in_d8 = 0x3f800000;
  }
  temp_v20 = (unsigned int *)*piVar2;
  temp_v2 = temp_v9 & 0xffffff;
  temp_v3 = temp_v6 & 0xffffff;
  temp_v12 = (int)(*(float *)(param_1 + 0x68) * temp_v16);
  temp_v4 = temp_v1 & 0xffffff;
  temp_v10 = (int)(*(float *)(param_1 + 0x6c) * temp_v17);
  if (temp_v0 != 0) {
    do {
      temp_v5 = *(unsigned int *)(param_1 + 0x3c);
      FUN_00350d90(temp_v5,&DAT_005c1eec,5,0x48);
      temp_v7 = 0;
      *temp_v20 = temp_v5;
      temp_v8 = (int)*(short *)(temp_v5 + 2) / 5;
      if (temp_v8 != 0) {
        puVar8 = *(unsigned int **)(*(int *)(temp_v5 + 8) + 0x38);
        do {
          if ((int)temp_v7 < temp_v12) {
            temp_v16 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v17 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v16 = temp_v16 / temp_v17;
          }
          else if (temp_v10 >= (int)temp_v7) {
            temp_v16 = (float)in_d8;
          }
          else {
            temp_v17 = (float)VectorUnsignedToFloat(temp_v8 - temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v16 = (float)VectorUnsignedToFloat(temp_v8 - temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v16 = temp_v16 / temp_v17;
          }
          temp_v18 = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v17 = (float)VectorUnsignedToFloat(temp_v6 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = (float)VectorUnsignedToFloat(temp_v9 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v7 = temp_v7 + 1;
          temp_v11 = VectorFloatToUnsigned(temp_v18 * temp_v16,3);
          temp_v13 = VectorFloatToUnsigned(temp_v17 * temp_v16,3);
          temp_v15 = VectorFloatToUnsigned(temp_v14 * temp_v16,3);
          *(char *)puVar8 = (char)temp_v4;
          *(char *)((int)puVar8 + 1) = (char)(temp_v4 >> 8);
          *(char *)((int)puVar8 + 2) = (char)(temp_v4 >> 0x10);
          *(char *)((int)puVar8 + 3) = (char)temp_v11;
          *(char *)(puVar8 + 1) = (char)temp_v3;
          *(char *)((int)puVar8 + 5) = (char)(temp_v3 >> 8);
          *(char *)((int)puVar8 + 6) = (char)(temp_v3 >> 0x10);
          *(char *)((int)puVar8 + 7) = (char)temp_v13;
          *(char *)(puVar8 + 2) = (char)temp_v2;
          *(char *)((int)puVar8 + 9) = (char)(temp_v2 >> 8);
          *(char *)((int)puVar8 + 10) = (char)(temp_v2 >> 0x10);
          *(char *)((int)puVar8 + 0xb) = (char)temp_v15;
          puVar8[3] = puVar8[1];
          puVar8[4] = *puVar8;
          puVar8 = puVar8 + 5;
        } while (temp_v7 < temp_v8);
      }
      temp_v8 = temp_v19 + 1;
      temp_v20[5] = temp_v19 * -4 - 1;
      temp_v20 = temp_v20 + 0xc;
      temp_v19 = temp_v8;
    } while (temp_v8 < temp_v0);
  }
  return piVar2;
}

} /* extern "C" */
