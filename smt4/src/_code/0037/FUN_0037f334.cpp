/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f334` (_code @ 0x37f334, 0x214 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_002b7430(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);
int nw_snd_internal_driver_SequenceTrack_Close(void);
int nw_snd_internal_driver_SequenceTrack_UpdateChannelLength(int);

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
extern unsigned long long FUN_00235804(float);
extern float FUN_00282c30(int, int, int);
/* Supplied declaration required: FUN_002b7430. */
extern unsigned int FUN_002bd440(void);
extern int FUN_0037d70c(int, unsigned int);
/* Supplied declaration required: nw_snd_internal_driver_SequenceTrack_Close. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceTrack_UpdateChannelLength. */


void FUN_0037f334(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
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
                            ((unsigned int)*(unsigned char *)(param_1 + 0x76) * (unsigned int)*(unsigned short *)(param_1 + 0x78),
                             (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = temp_v11 * *(float *)(param_1 + 100) * 1.6666667e-05f;
  temp_v10 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11 == 0.0f) << 0x1e);
  if (!romwright_subpiece_4_1_0(temp_v10 >> 0x1e,0)) {
    temp_v14 = CONCAT44(temp_v11,0x4d7fb0ff);
    temp_v6 = 0x4e200000;
    temp_v7 = 0;
    temp_v15 = FUN_00235804((*(float *)(param_1 + 0x68) * 2.6811186e+08f) / temp_v11);
    temp_v2 = (unsigned int)((unsigned long long)temp_v15 >> 0x20);
    temp_v8 = (unsigned int)temp_v15 >= 0x4e200000;
    temp_v3 = temp_v2 - !temp_v8;
    if (temp_v2 == 0 && temp_v8 <= temp_v2) {
      do {
        temp_v9 = temp_v6 < (unsigned int)temp_v15;
        temp_v6 = temp_v6 - (unsigned int)temp_v15;
        temp_v8 = 0;
        temp_v7 = temp_v7 - ((int)((unsigned long long)temp_v15 >> 0x20) + (unsigned int)temp_v9);
        temp_v3 = 0;
        do {
          if (temp_v3 < 0x10) {
            temp_v5 = param_1 + temp_v3 * 4;
            temp_v4 = *(int *)(temp_v5 + 0x8c);
            if (temp_v4 != 0) {
              nw_snd_internal_driver_SequenceTrack_UpdateChannelLength(temp_v4);
              temp_v0 = FUN_0037d70c(temp_v4,1);
              if ((temp_v0 < 0) && (*(int *)(temp_v5 + 0x8c) != 0)) {
                nw_snd_internal_driver_SequenceTrack_Close();
                (**(romwright_code **)(**(int **)(param_1 + 0x80) + 0xc))
                          (*(int **)(param_1 + 0x80),*(unsigned int *)(temp_v5 + 0x8c));
                *(unsigned int *)(temp_v5 + 0x8c) = 0;
              }
              if (*(char *)(temp_v4 + 5) != '\0') {
                temp_v8 = 1;
              }
            }
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x10);
        if (!temp_v8) {
          if (*(char *)(param_1 + 0xd) != '\0') {
            temp_v1 = FUN_002bd440();
            FUN_002b7430(temp_v1,param_1 + 0x50);
            *(unsigned char *)(param_1 + 0xd) = 0;
          }
          temp_v3 = 0;
          do {
            if ((temp_v3 < 0x10) && (temp_v4 = param_1 + temp_v3 * 4, *(int *)(temp_v4 + 0x8c) != 0)) {
              nw_snd_internal_driver_SequenceTrack_Close();
              (**(romwright_code **)(**(int **)(param_1 + 0x80) + 0xc))
                        (*(int **)(param_1 + 0x80),*(unsigned int *)(temp_v4 + 0x8c));
              *(unsigned int *)(temp_v4 + 0x8c) = 0;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 0x10);
          *(unsigned char *)(param_1 + 0xf) = 1;
          return;
        }
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
        temp_v11 = (float)VectorUnsignedToFloat
                                  ((unsigned int)*(unsigned char *)(param_1 + 0x76) *
                                   (unsigned int)*(unsigned short *)(param_1 + 0x78),(unsigned char)(temp_v10 >> 0x16) & 3);
        temp_v13 = (float)temp_v14;
        temp_v11 = temp_v11 * (float)temp_v12 * *(float *)(param_1 + 100);
        temp_v14 = CONCAT44(temp_v11,temp_v13);
        temp_v10 = (temp_v10 & 0xfffffff) |
                 ((unsigned int)(temp_v11 == (float)((unsigned long long)temp_v12 >> 0x20)) << 0x1e);
        if (romwright_subpiece_4_1_0(temp_v10 >> 0x1e,0)) {
          return;
        }
        temp_v15 = FUN_00235804(temp_v13 / temp_v11);
        temp_v2 = (unsigned int)((unsigned long long)temp_v15 >> 0x20);
        temp_v8 = temp_v6 <= (unsigned int)temp_v15;
        temp_v3 = temp_v2 - (temp_v7 + !temp_v8);
      } while (temp_v2 <= temp_v7 && (unsigned int)temp_v8 <= temp_v2 - temp_v7);
    }
    temp_v13 = (float)((unsigned long long)temp_v14 >> 0x20);
    temp_v11 = (float)FUN_00282c30((unsigned int)temp_v15 - temp_v6,
                                 (int)((unsigned long long)temp_v15 >> 0x20) - (temp_v7 + ((unsigned int)temp_v15 < temp_v6))
                                 ,temp_v3);
    *(float *)(param_1 + 0x68) = temp_v11 * temp_v13 * 3.7297867e-09f;
  }
  return;
}

} /* extern "C" */
