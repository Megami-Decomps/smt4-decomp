/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022c7dc` (_code @ 0x22c7dc, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0022c7dc(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  if (param_2 <= param_3) {
    puVar4 = (unsigned int *)(*(int *)(param_1 + 4) + param_2 * 0x10);
    puVar6 = (unsigned int *)(*(int *)(param_1 + 4) + param_3 * 0x10);
    do {
      if (puVar4 != puVar6) {
        puVar1 = (unsigned int *)puVar4[2];
        if (puVar1 == (unsigned int *)0x0 || puVar1 == puVar4) {
          if (puVar4[1] != 0) {
            (**(romwright_code **)(*(int *)*puVar4 + 4))();
          }
        }
        else {
          puVar1[3] = puVar4[3];
          *(unsigned int *)(puVar4[3] + 8) = puVar4[2];
          puVar4[2] = 0;
          puVar4[3] = 0;
        }
        puVar4[1] = 0;
        puVar4[1] = puVar6[1];
        temp_v0 = puVar6[3];
        puVar4[3] = temp_v0;
        *(unsigned int **)(temp_v0 + 8) = puVar4;
        puVar4[2] = (unsigned int)puVar6;
        puVar6[3] = (unsigned int)puVar4;
      }
      param_4 = param_4 - 1;
      puVar4 = puVar4 + 4;
      puVar6 = puVar6 + 4;
    } while (param_4 != 0);
    return;
  }
  puVar4 = (unsigned int *)(param_2 * 0x10 + param_4 * 0x10 + *(int *)(param_1 + 4));
  puVar6 = (unsigned int *)(param_3 * 0x10 + param_4 * 0x10 + *(int *)(param_1 + 4));
  do {
    puVar5 = puVar4 + -4;
    puVar1 = puVar6 + -4;
    if (puVar5 != puVar1) {
      puVar3 = (unsigned int *)puVar4[-2];
      if (puVar3 == (unsigned int *)0x0 || puVar3 == puVar5) {
        if (puVar4[-3] != 0) {
          (**(romwright_code **)(*(int *)*puVar5 + 4))();
        }
      }
      else {
        puVar3[3] = puVar4[-1];
        *(unsigned int *)(puVar4[-1] + 8) = puVar4[-2];
        puVar4[-2] = 0;
        puVar4[-1] = 0;
      }
      puVar4[-3] = 0;
      puVar4[-3] = puVar6[-3];
      temp_v0 = puVar6[-1];
      puVar4[-1] = temp_v0;
      *(unsigned int **)(temp_v0 + 8) = puVar5;
      puVar4[-2] = (unsigned int)puVar1;
      puVar6[-1] = (unsigned int)puVar5;
    }
    param_4 = param_4 - 1;
    puVar4 = puVar5;
    puVar6 = puVar1;
  } while (param_4 != 0);
  return;
}

} /* extern "C" */
