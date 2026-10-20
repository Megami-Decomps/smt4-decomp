/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004659c8` (_code @ 0x4659c8, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_001cc644(int);
int FUN_001d0b34(void);
int FUN_00461fe0(int);
int VectorUnsignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
extern float FUN_001b4874(int, int, int);
/* Supplied declaration required: FUN_001cc644. */
/* Supplied declaration required: FUN_001d0b34. */
extern int FUN_00461d28(int, unsigned int);
/* Supplied declaration required: FUN_00461fe0. */
extern unsigned long long FUN_00524fb4(float);


void FUN_004659c8(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  unsigned int temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned long long temp_v15;
  
  temp_v12 = 0x378bcf65;
  temp_v11 = (float)VectorUnsignedToFloat
                            ((unsigned int)*(unsigned char *)(param_1 + 0x75) * (unsigned int)*(unsigned short *)(param_1 + 0x76),
                             (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = temp_v11 * *(float *)(param_1 + 100) * 1.6666667e-05f;
  temp_v10 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11 == 0.0f) << 0x1e);
  if (!romwright_subpiece_4_1_0(temp_v10 >> 0x1e,0)) {
    temp_v14 = CONCAT44(temp_v11,0x4d7fb0ff);
    temp_v7 = 0x4e200000;
    temp_v8 = 0;
    temp_v15 = FUN_00524fb4((*(float *)(param_1 + 0x68) * 2.6811186e+08f) / temp_v11);
    temp_v3 = (unsigned int)((unsigned long long)temp_v15 >> 0x20);
    temp_v9 = (unsigned int)temp_v15 >= 0x4e200000;
    temp_v4 = temp_v3 - !temp_v9;
    if (temp_v3 == 0 && temp_v9 <= temp_v3) {
      do {
        temp_v9 = temp_v7 < (unsigned int)temp_v15;
        temp_v7 = temp_v7 - (unsigned int)temp_v15;
        temp_v8 = temp_v8 - ((int)((unsigned long long)temp_v15 >> 0x20) + (unsigned int)temp_v9);
        temp_v0 = *(short *)(param_1 + 0x7c);
        temp_v9 = 0;
        temp_v2 = temp_v0;
        if (temp_v0 < *(short *)(param_1 + 0x7a)) {
          temp_v2 = temp_v0 + 1;
        }
        temp_v4 = 0;
        if (temp_v0 < *(short *)(param_1 + 0x7a)) {
          *(short *)(param_1 + 0x7c) = temp_v2;
        }
        do {
          if (temp_v4 < 0x10) {
            temp_v6 = param_1 + temp_v4 * 4;
            temp_v5 = *(int *)(temp_v6 + 0x90);
            if (temp_v5 != 0) {
              FUN_00461fe0(temp_v5);
              temp_v1 = FUN_00461d28(temp_v5,1);
              if ((temp_v1 < 0) && (*(int *)(temp_v6 + 0x90) != 0)) {
                FUN_001d0b34();
                (**(romwright_code **)(**(int **)(param_1 + 0x84) + 0xc))
                          (*(int **)(param_1 + 0x84),*(unsigned int *)(temp_v6 + 0x90));
                *(unsigned int *)(temp_v6 + 0x90) = 0;
              }
              if (*(char *)(temp_v5 + 5) != '\0') {
                temp_v9 = 1;
              }
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x10);
        if (!temp_v9) {
          FUN_001cc644(param_1);
          *(unsigned char *)(param_1 + 0xf) = 1;
          return;
        }
        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
        temp_v11 = (float)VectorUnsignedToFloat
                                  ((unsigned int)*(unsigned char *)(param_1 + 0x75) *
                                   (unsigned int)*(unsigned short *)(param_1 + 0x76),(unsigned char)(temp_v10 >> 0x16) & 3);
        temp_v13 = (float)temp_v14;
        temp_v11 = temp_v11 * (float)temp_v12 * *(float *)(param_1 + 100);
        temp_v14 = CONCAT44(temp_v11,temp_v13);
        temp_v10 = (temp_v10 & 0xfffffff) |
                 ((unsigned int)(temp_v11 == (float)((unsigned long long)temp_v12 >> 0x20)) << 0x1e);
        if (romwright_subpiece_4_1_0(temp_v10 >> 0x1e,0)) {
          return;
        }
        temp_v15 = FUN_00524fb4(temp_v13 / temp_v11);
        temp_v3 = (unsigned int)((unsigned long long)temp_v15 >> 0x20);
        temp_v9 = temp_v7 <= (unsigned int)temp_v15;
        temp_v4 = temp_v3 - (temp_v8 + !temp_v9);
      } while (temp_v3 <= temp_v8 && (unsigned int)temp_v9 <= temp_v3 - temp_v8);
    }
    temp_v13 = (float)((unsigned long long)temp_v14 >> 0x20);
    temp_v11 = (float)FUN_001b4874((unsigned int)temp_v15 - temp_v7,
                                 (int)((unsigned long long)temp_v15 >> 0x20) - (temp_v8 + ((unsigned int)temp_v15 < temp_v7))
                                 ,temp_v4);
    *(float *)(param_1 + 0x68) = temp_v11 * temp_v13 * 3.7297867e-09f;
  }
  return;
}

} /* extern "C" */
