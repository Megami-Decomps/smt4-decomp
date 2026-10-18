/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00521d98` (_code @ 0x521d98, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_00521d98(unsigned int *param_1,unsigned int *param_2,int param_3)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  if (param_1 <= param_2) {
    do {
      if (param_1 != param_2) {
        puVar1 = (unsigned int *)param_1[2];
        if (puVar1 == (unsigned int *)0x0 || puVar1 == param_1) {
          if (param_1[1] != 0) {
            (**(romwright_code **)(*(int *)*param_1 + 4))();
          }
        }
        else {
          puVar1[3] = param_1[3];
          *(unsigned int *)(param_1[3] + 8) = param_1[2];
          param_1[2] = 0;
          param_1[3] = 0;
        }
        param_1[1] = 0;
        param_1[1] = param_2[1];
        temp_v0 = param_2[3];
        param_1[3] = temp_v0;
        *(unsigned int **)(temp_v0 + 8) = param_1;
        param_1[2] = (unsigned int)param_2;
        param_2[3] = (unsigned int)param_1;
      }
      param_3 = param_3 - 1;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
    return;
  }
  puVar1 = param_2 + param_3 * 4;
  puVar6 = param_1 + param_3 * 4;
  do {
    puVar5 = puVar6 + -4;
    puVar4 = puVar1 + -4;
    if (puVar5 != puVar4) {
      puVar3 = (unsigned int *)puVar6[-2];
      if (puVar3 == (unsigned int *)0x0 || puVar3 == puVar5) {
        if (puVar6[-3] != 0) {
          (**(romwright_code **)(*(int *)*puVar5 + 4))();
        }
      }
      else {
        puVar3[3] = puVar6[-1];
        *(unsigned int *)(puVar6[-1] + 8) = puVar6[-2];
        puVar6[-2] = 0;
        puVar6[-1] = 0;
      }
      puVar6[-3] = 0;
      puVar6[-3] = puVar1[-3];
      temp_v0 = puVar1[-1];
      puVar6[-1] = temp_v0;
      *(unsigned int **)(temp_v0 + 8) = puVar5;
      puVar6[-2] = (unsigned int)puVar4;
      puVar1[-1] = (unsigned int)puVar5;
    }
    param_3 = param_3 - 1;
    puVar1 = puVar4;
    puVar6 = puVar5;
  } while (param_3 != 0);
  return;
}
