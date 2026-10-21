/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038aa84` (_code @ 0x38aa84, 0x260 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_00184964(int, int);
int FUN_004ff364(int, int);
int resourceGetSampleFloat(void);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(unsigned int, int);
int __aeabi_idivmod(void);

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_00184964. */
/* Supplied declaration required: FUN_004ff364. */
/* Supplied declaration required: resourceGetSampleFloat. */
/* Supplied declaration required: __aeabi_idivmod. */


int FUN_0038aa84(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 8 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v10;
  int temp_v11;
  float temp_v12;
  float temp_v13;
  long long temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  
  if ((0 < *(int *)(param_3 + 0x18)) && (temp_v2 = 0, 0 < param_5)) {
    do {
      if (*(int *)(param_4 + temp_v2 * 0x48 + 4) == *(int *)(param_3 + 0x18)) {
        if (param_4 + temp_v2 * 0x48 == 0) {
          return 0;
        }
        temp_v7 = 0;
        resourceGetSampleFloat();
        temp_v16 = 0.0f;
        temp_v14 = (unsigned long long)(unsigned int)in_s0 << 0x20;
        temp_v9 = 0;
        if (*(int *)(param_3 + 0x1c) < 1) {
          return 0;
        }
        temp_v0 = (char)temp_v2;
        temp_v18 = 0.5f;
        temp_v19 = 0.05f;
        temp_v20 = 255.0f;
        temp_v15 = 0.1f;
        temp_v17 = temp_v16;
        do {
          temp_v2 = param_3 + temp_v9 * 0x14;
          temp_v6 = 0;
          if (temp_v9 != 0) {
            in_s0 = *(float *)(temp_v2 + 0x30);
          }
          temp_v3 = *(unsigned int *)(temp_v2 + 0x28);
          if (temp_v9 != 0) {
            temp_v16 = temp_v16 - in_s0;
          }
          temp_v4 = temp_v3;
          if (0 < (int)temp_v3) {
            temp_v4 = temp_v9 & 0xffff;
          }
          temp_v12 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v10 = (float)VectorSignedToFloat(*(int *)(temp_v2 + 0x2c) * (temp_v3 - 1),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v11 = VectorFloatToUnsigned(*(float *)(temp_v2 + 0x34) * temp_v20,3);
          if (0 < (int)temp_v3) {
            temp_v21 = temp_v4;
          }
          temp_v13 = (float)((unsigned long long)temp_v14 >> 0x20);
          in_s0 = *(float *)(temp_v2 + 0x38) * (temp_v10 + temp_v13 * temp_v12) * temp_v15;
          temp_v14 = CONCAT44(temp_v13,*(float *)(temp_v2 + 0x38) * temp_v13 * temp_v19 - in_s0 * temp_v18);
          if (0 < (int)temp_v3) {
            do {
              if (param_2 <= temp_v7) break;
              *param_1 = *(unsigned int *)(param_3 + 0x18);
              param_1[4] = (int)temp_v14;
              *(float *)&param_1[5] = temp_v17;
              *(float *)&param_1[6] = temp_v16;
              param_1[2] = (temp_v11 << 0x18) | (temp_v11 << 0x10) | (temp_v11 << 8) | 0xff;
              temp_v10 = *(float *)(temp_v2 + 0x38) * temp_v15;
              *(float *)&param_1[3] = temp_v10;
              *(char *)((int)param_1 + 6) = temp_v0;
              *(short *)(param_1 + 7) = (short)temp_v21;
              *(short *)((int)param_1 + 0x1e) = (short)temp_v6;
              temp_v8 = *(int *)(param_3 + 0x20);
              if (-1 < temp_v0) {
                FUN_004ff364(param_4 + temp_v0 * 0x48,0);
                if (temp_v8 == 0) {
                  *(unsigned short *)(param_1 + 1) = 0;
                }
                else if (temp_v8 != 1) {
                  if (temp_v8 == 2) {
                    temp_v1 = FUN_00184964(0,(int)temp_v10);
                    *(short *)(param_1 + 1) = temp_v1;
                  }
                }
                else {
                  temp_v1 = FUN_00184964(0,4);
                  temp_v1 = temp_v1 << 2;
                  *(short *)(param_1 + 1) = temp_v1;
                }
                if ((int)temp_v10 <= (int)*(short *)(param_1 + 1)) {
                  __aeabi_idivmod();
                  *(unsigned short *)(param_1 + 1) = temp_v5;
                }
              }
              temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x2c),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v6 = temp_v6 + 1;
              param_1 = param_1 + 8;
              temp_v7 = temp_v7 + 1;
              temp_v12 = (float)((unsigned long long)temp_v14 >> 0x20);
              in_s0 = (temp_v10 + temp_v12) * temp_v15;
              temp_v14 = CONCAT44(temp_v12,(float)temp_v14 + *(float *)(temp_v2 + 0x38) * in_s0);
            } while (temp_v6 < (int)*(unsigned int *)(temp_v2 + 0x28));
          }
          temp_v9 = temp_v9 + 1;
          if (*(int *)(param_3 + 0x1c) <= (int)temp_v9) {
            return temp_v7;
          }
        } while( 1 );
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < param_5);
  }
  return 0;
}

} /* extern "C" */
