/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e840` (_code @ 0x15e840, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0015e840(int param_1,int *param_2)

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
  int aiStack_38 [5];
  
  if (*(char *)(param_1 + 0x56) == '\0') {
    return;
  }
  temp_v4 = 0;
  aiStack_38[0] = *param_2;
  aiStack_38[1] = param_2[1];
  aiStack_38[2] = param_2[2];
  aiStack_38[3] = param_2[3];
  temp_v0 = *(int *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x55) != '\0') {
    do {
      temp_v5 = param_1 + temp_v4 * 4;
      temp_v2 = 0;
      temp_v1 = *(int *)(temp_v5 + 0x2c);
      piVar3 = (int *)aiStack_38[temp_v4];
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
