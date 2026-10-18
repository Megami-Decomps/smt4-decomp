/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f770` (_code @ 0x37f770, 0x228 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_00472360; /* 0x472360 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002357a0. */
/* Supplied declaration required: FUN_002b7430. */
extern unsigned int FUN_002bd440(void);
extern int FUN_0037d70c(int, unsigned int);
/* Supplied declaration required: FUN_0037d824. */
/* Supplied declaration required: FUN_0037d8c8. */
/* Supplied declaration required: FUN_0037d998. */


void FUN_0037f770(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v3 = 0;
  do {
    if ((temp_v3 < 0x10) && (temp_v4 = *(int *)(param_1 + temp_v3 * 4 + 0x8c), temp_v4 != 0)) {
      FUN_0037d8c8(temp_v4,0x7f);
      FUN_0037d824(temp_v4);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x10);
  temp_v3 = 0;
  temp_v8 = 1.6666667e-05f;
  temp_v9 = 1.0f;
  while( 1 ) {
    temp_v4 = *(int *)(param_1 + 0x6c);
    if ((temp_v4 == 0) &&
       (temp_v7 = (float)VectorUnsignedToFloat
                                 ((unsigned int)*(unsigned char *)(param_1 + 0x76) *
                                  (unsigned int)*(unsigned short *)(param_1 + 0x78),(unsigned char)(in_fpscr >> 0x16) & 3),
       (int)(temp_v7 * *(float *)(param_1 + 100) * temp_v8 * *(float *)(param_1 + 0x70)) < 0x3f800000))
    {
      *(unsigned int *)(param_1 + 0x70) = 0;
      return;
    }
    if (DAT_00472360 <= temp_v3) {
      return;
    }
    if (temp_v4 != 0) {
      *(int *)(param_1 + 0x6c) = temp_v4 - 1;
    }
    else {
      temp_v7 = (float)VectorUnsignedToFloat
                               ((unsigned int)*(unsigned char *)(param_1 + 0x76) * (unsigned int)*(unsigned short *)(param_1 + 0x78),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x70) =
           *(float *)(param_1 + 0x70) - temp_v9 / (temp_v7 * temp_v8 * *(float *)(param_1 + 100));
    }
    temp_v0 = 0;
    temp_v4 = 0;
    do {
      if (temp_v4 < 0x10) {
        temp_v6 = param_1 + temp_v4 * 4;
        temp_v5 = *(int *)(temp_v6 + 0x8c);
        if (temp_v5 != 0) {
          FUN_0037d998(temp_v5);
          temp_v1 = FUN_0037d70c(temp_v5,0);
          if ((temp_v1 < 0) && (*(int *)(temp_v6 + 0x8c) != 0)) {
            FUN_002357a0();
            (**(romwright_code **)(**(int **)(param_1 + 0x80) + 0xc))
                      (*(int **)(param_1 + 0x80),*(unsigned int *)(temp_v6 + 0x8c));
            *(unsigned int *)(temp_v6 + 0x8c) = 0;
          }
          if (*(char *)(temp_v5 + 5) != '\0') {
            temp_v0 = 1;
          }
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x10);
    if (!temp_v0) break;
    temp_v3 = temp_v3 + 1;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    temp_v2 = FUN_002bd440();
    FUN_002b7430(temp_v2,param_1 + 0x50);
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  temp_v3 = 0;
  do {
    if ((temp_v3 < 0x10) && (temp_v4 = param_1 + temp_v3 * 4, *(int *)(temp_v4 + 0x8c) != 0)) {
      FUN_002357a0();
      (**(romwright_code **)(**(int **)(param_1 + 0x80) + 0xc))
                (*(int **)(param_1 + 0x80),*(unsigned int *)(temp_v4 + 0x8c));
      *(unsigned int *)(temp_v4 + 0x8c) = 0;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x10);
  *(unsigned char *)(param_1 + 0xf) = 1;
  return;
}
