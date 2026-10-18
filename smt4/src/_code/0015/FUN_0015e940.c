/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e940` (_code @ 0x15e940, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;


void FUN_0015e940(int param_1,int *param_2)

{
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7 [5];
  
  temp_v4 = 0;
  temp_v7[0] = *param_2;
  temp_v7[1] = param_2[1];
  temp_v7[2] = param_2[2];
  temp_v7[3] = param_2[3];
  temp_v0 = *(int *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x55) != '\0') {
    do {
      temp_v5 = param_1 + temp_v4 * 4;
      temp_v2 = 0;
      temp_v1 = *(int *)(temp_v5 + 0x2c);
      piVar3 = (int *)temp_v7[temp_v4];
      piVar4 = (int *)(*(int *)(temp_v5 + 0x1c) + temp_v0 * 0x280);
      do {
        temp_v6 = *piVar4;
        temp_v3 = temp_v6;
        if (temp_v6 < 0) {
          temp_v3 = -temp_v6;
        }
        temp_v2 = temp_v2 + 1;
        temp_v3 = temp_v3 * *(int *)(param_1 + 0x44) >> 7;
        if (temp_v6 < 0) {
          temp_v3 = -temp_v3;
        }
        temp_v1 = (*(int *)(param_1 + 0x4c) * temp_v1 + *(int *)(param_1 + 0x48) * (*piVar3 - temp_v3)) >>
                7;
        *piVar4 = temp_v1;
        *piVar3 = temp_v6;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (temp_v2 < 0xa0);
      *(int *)(temp_v5 + 0x2c) = temp_v1;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(unsigned char *)(param_1 + 0x55));
  }
  temp_v4 = *(int *)(param_1 + 0x40) + 1;
  *(unsigned int *)(param_1 + 0x40) = temp_v4;
  if (*(unsigned int *)(param_1 + 0x3c) <= temp_v4) {
    *(unsigned int *)(param_1 + 0x40) = 0;
  }
  return;
}
