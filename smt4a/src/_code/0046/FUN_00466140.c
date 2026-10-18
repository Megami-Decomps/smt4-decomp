/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466140` (_code @ 0x466140, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_005c0f84; /* 0x5c0f84 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001cc644. */
/* Supplied declaration required: FUN_001d0b34. */
extern int FUN_00461d28(int, unsigned int);
/* Supplied declaration required: FUN_00461e58. */
/* Supplied declaration required: FUN_00461f10. */
/* Supplied declaration required: FUN_00461fe0. */


void FUN_00466140(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  
  temp_v4 = 0;
  do {
    if ((temp_v4 < 0x10) && (temp_v5 = *(int *)(param_1 + temp_v4 * 4 + 0x90), temp_v5 != 0)) {
      FUN_00461f10(temp_v5,0x7f);
      FUN_00461e58(temp_v5);
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x10);
  temp_v4 = 0;
  temp_v9 = 1.6666667e-05f;
  temp_v10 = 1.0f;
  while( 1 ) {
    temp_v5 = *(int *)(param_1 + 0x6c);
    if ((temp_v5 == 0) &&
       (temp_v8 = (float)VectorUnsignedToFloat
                                 ((unsigned int)*(unsigned char *)(param_1 + 0x75) *
                                  (unsigned int)*(unsigned short *)(param_1 + 0x76),(unsigned char)(in_fpscr >> 0x16) & 3),
       (int)(temp_v8 * *(float *)(param_1 + 100) * temp_v9 * *(float *)(param_1 + 0x70)) < 0x3f800000))
    {
      *(unsigned int *)(param_1 + 0x70) = 0;
      return;
    }
    if (DAT_005c0f84 <= temp_v4) {
      return;
    }
    if (temp_v5 != 0) {
      *(int *)(param_1 + 0x6c) = temp_v5 - 1;
    }
    else {
      temp_v8 = (float)VectorUnsignedToFloat
                               ((unsigned int)*(unsigned char *)(param_1 + 0x75) * (unsigned int)*(unsigned short *)(param_1 + 0x76),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x70) =
           *(float *)(param_1 + 0x70) - temp_v10 / (temp_v8 * temp_v9 * *(float *)(param_1 + 100));
    }
    temp_v0 = *(short *)(param_1 + 0x7c);
    temp_v1 = 0;
    temp_v3 = temp_v0;
    if (temp_v0 < *(short *)(param_1 + 0x7a)) {
      temp_v3 = temp_v0 + 1;
    }
    temp_v5 = 0;
    if (temp_v0 < *(short *)(param_1 + 0x7a)) {
      *(short *)(param_1 + 0x7c) = temp_v3;
    }
    do {
      if (temp_v5 < 0x10) {
        temp_v7 = param_1 + temp_v5 * 4;
        temp_v6 = *(int *)(temp_v7 + 0x90);
        if (temp_v6 != 0) {
          FUN_00461fe0(temp_v6);
          temp_v2 = FUN_00461d28(temp_v6,0);
          if ((temp_v2 < 0) && (*(int *)(temp_v7 + 0x90) != 0)) {
            FUN_001d0b34();
            (**(romwright_code **)(**(int **)(param_1 + 0x84) + 0xc))
                      (*(int **)(param_1 + 0x84),*(unsigned int *)(temp_v7 + 0x90));
            *(unsigned int *)(temp_v7 + 0x90) = 0;
          }
          if (*(char *)(temp_v6 + 5) != '\0') {
            temp_v1 = 1;
          }
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x10);
    if (!temp_v1) break;
    temp_v4 = temp_v4 + 1;
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
  }
  FUN_001cc644(param_1);
  *(unsigned char *)(param_1 + 0xf) = 1;
  return;
}
