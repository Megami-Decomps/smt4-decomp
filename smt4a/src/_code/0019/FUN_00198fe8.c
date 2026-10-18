/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00198fe8` (_code @ 0x198fe8, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;


void FUN_00198fe8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  puVar2 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar1 = puVar2 + 4, puVar1 != param_2) {
    temp_v2 = *puVar1;
    temp_v0 = puVar2[5];
    temp_v3 = puVar2[6];
    temp_v4 = puVar2[7];
    if (!(param_1[1] < temp_v0 || temp_v0 - param_1[1] < (unsigned int)(*param_1 <= temp_v2))) {
      temp_v1 = (int)puVar1 - (int)param_1;
      if (0 < temp_v1 >> 4) {
        puVar3 = puVar1;
        puVar4 = puVar2 + 8;
        if (temp_v1 * 0x8000000 < 0) {
          *puVar1 = *puVar2;
          puVar2[5] = puVar2[1];
          puVar2[6] = puVar2[2];
          puVar2[7] = puVar2[3];
          puVar3 = puVar2;
          puVar4 = puVar1;
        }
        for (temp_v1 = temp_v1 >> 5; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
          temp_v5 = puVar3[-3];
          temp_v6 = puVar3[-2];
          temp_v7 = puVar3[-1];
          puVar4[-4] = puVar3[-4];
          puVar4[-3] = temp_v5;
          puVar4[-2] = temp_v6;
          puVar4[-1] = temp_v7;
          temp_v5 = puVar3[-7];
          temp_v6 = puVar3[-6];
          temp_v7 = puVar3[-5];
          puVar4[-8] = puVar3[-8];
          puVar4[-7] = temp_v5;
          puVar4[-6] = temp_v6;
          puVar4[-5] = temp_v7;
          puVar3 = puVar3 + -8;
          puVar4 = puVar4 + -8;
        }
      }
      param_1[1] = temp_v0;
      *param_1 = temp_v2;
      param_1[2] = temp_v3;
      param_1[3] = temp_v4;
      puVar2 = puVar1;
    }
    else {
      temp_v5 = puVar2[1];
      puVar3 = puVar1;
      puVar4 = puVar1;
      if (temp_v0 <= temp_v5 && (unsigned int)(*puVar2 <= temp_v2) <= temp_v0 - temp_v5) {
        do {
          puVar4 = puVar2;
          temp_v6 = puVar4[2];
          temp_v7 = puVar4[3];
          *puVar3 = *puVar4;
          puVar3[1] = temp_v5;
          puVar3[2] = temp_v6;
          puVar3[3] = temp_v7;
          temp_v5 = puVar4[-3];
          puVar3 = puVar4;
          puVar2 = puVar4 + -4;
        } while (temp_v0 <= temp_v5 && (unsigned int)(puVar4[-4] <= temp_v2) <= temp_v0 - temp_v5);
      }
      *puVar4 = temp_v2;
      puVar4[1] = temp_v0;
      puVar4[2] = temp_v3;
      puVar4[3] = temp_v4;
      puVar2 = puVar1;
    }
  }
  return;
}
