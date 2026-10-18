/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9440` (_code @ 0x3a9440, 0x1f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_0022d7b0. */
/* Supplied declaration required: FUN_00230cc0. */
/* Supplied declaration required: FUN_00231bb8. */
/* Supplied declaration required: FUN_00231bcc. */
extern int FUN_0023360c(int);
extern int FUN_00233718(int);
/* Supplied declaration required: FUN_00240d5c. */
extern int FUN_0029e924(int);
/* Supplied declaration required: FUN_0039fc20. */
/* Supplied declaration required: FUN_003a9df4. */


void FUN_003a9440(int param_1)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  float temp_v6;
  float temp_v7 [5];
  
  FUN_00231bb8(param_1 + 200,temp_v7);
  FUN_0039fc20(param_1 + 200,temp_v7 + 2);
  if (((int)(temp_v7[0] + temp_v7[2]) < 0x43a00000) &&
     ((unsigned int)(temp_v7[0] + temp_v7[2]) < 0xc3a00000)) {
    temp_v6 = *(float *)(param_1 + 0x594);
    temp_v7[0] = temp_v6;
    FUN_00230cc0(param_1 + 200,1,0);
    temp_v7[1] = 1.4013e-45f;
    temp_v7[0] = temp_v6;
    FUN_00231bcc(param_1 + 200,0x47c,0);
    temp_v7[1] = 1.4013e-45f;
    temp_v7[0] = temp_v6;
    FUN_00231bcc(param_1 + 200,0x47d,0);
    temp_v7[1] = 1.4013e-45f;
    temp_v7[0] = temp_v6;
    FUN_00231bcc(param_1 + 200,0x47e,0);
    temp_v7[1] = 1.4013e-45f;
    temp_v7[0] = temp_v6;
    FUN_00231bcc(param_1 + 200,0x47f,0);
    temp_v7[1] = 1.4013e-45f;
    temp_v7[0] = temp_v6;
    FUN_00231bcc(param_1 + 200,0x480,0);
    temp_v7[1] = 1.4013e-45f;
    temp_v7[0] = temp_v6;
    FUN_00231bcc(param_1 + 200,0x481,0);
    if (*(int *)(param_1 + 0x28) != 0) {
      temp_v1 = FUN_0029e924(param_1 + 0x20);
      temp_v2 = FUN_00233718(param_1 + 0x20);
      temp_v5 = 0;
      if (temp_v5 < temp_v2) {
        do {
          if ((*(int *)(param_1 + 0x14) != 2) ||
             (temp_v3 = FUN_00240d5c(param_1 + 0x20), temp_v3 != temp_v5)) {
            FUN_003a9df4(param_1,temp_v5,0,
                         (int)*(short *)(param_1 + 0x5a8 + (temp_v1 + temp_v5) * 0x20 + 4));
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < temp_v2);
      }
      if ((0 < *(int *)(param_1 + 0x28)) && (*(int *)(param_1 + 0x14) == 2)) {
        temp_v1 = FUN_0023360c(param_1 + 0x20);
        temp_v0 = *(short *)(param_1 + 0x5a8 + temp_v1 * 0x20 + 4);
        temp_v4 = FUN_00240d5c(param_1 + 0x20);
        FUN_003a9df4(param_1,temp_v4,1,(int)temp_v0);
      }
      FUN_0022d7b0(param_1,temp_v6);
      return;
    }
  }
  return;
}
