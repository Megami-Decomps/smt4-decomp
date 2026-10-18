/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044f2c8` (_code @ 0x44f2c8, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0044f2c8(int param_1,int param_2)

{
/* irregular: irregular input(s): in_d8, in_s18; 1 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned long long in_d8;
  unsigned int temp_v8;
  unsigned int in_s18;
  
  temp_v8 = (unsigned int)((unsigned long long)in_d8 >> 0x20);
  temp_v7 = *(unsigned int *)(param_2 + 8);
  temp_v2 = *(unsigned int *)(param_1 + 0x14);
  temp_v0 = temp_v2 & 0x3fffffff;
  if ((int)temp_v0 <= (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) >> 4) {
    if (temp_v0 != 0) {
      temp_v0 = temp_v0 << 1;
    }
    else {
      temp_v0 = 1;
    }
    if ((temp_v2 & 0x3fffffff) < temp_v0) {
      piVar2 = *(int **)(param_1 + 8);
      if (piVar2 == (int *)0x0) {
        return;
      }
      if ((temp_v2 & 0xc0000000) != 0x40000000) {
        return;
      }
      puVar3 = (unsigned int *)(**(romwright_code **)(*piVar2 + 8))(piVar2,temp_v0 << 4,0x20);
      if (puVar3 == (unsigned int *)0x0) {
        return;
      }
      temp_v3 = 0;
      puVar7 = *(unsigned int **)(param_1 + 0xc);
      puVar8 = *(unsigned int **)(param_1 + 0x10);
      puVar4 = puVar3;
      if (puVar7 != puVar8) {
        do {
          if (puVar4 != (unsigned int *)0x0) {
            temp_v4 = puVar7[1];
            temp_v5 = puVar7[2];
            temp_v6 = puVar7[3];
            *puVar4 = *puVar7;
            puVar4[1] = temp_v4;
            puVar4[2] = temp_v5;
            puVar4[3] = temp_v6;
          }
          puVar7 = puVar7 + 4;
          puVar4 = puVar4 + 4;
        } while (puVar7 != puVar8);
        puVar7 = *(unsigned int **)(param_1 + 0xc);
        temp_v3 = (*(int *)(param_1 + 0x10) - (int)puVar7) >> 4;
      }
      if (puVar7 != (unsigned int *)0x0) {
        puVar4 = *(unsigned int **)(param_1 + 0x10);
        if (puVar7 < puVar4) {
          puVar8 = (unsigned int *)((int)puVar4 - (int)puVar7);
        }
        if (puVar7 < puVar4) {
          temp_v2 = ((unsigned int)puVar8 & 0x1f) >> 4;
        }
        else {
          temp_v2 = 0;
        }
        for (temp_v1 = temp_v2 + 1; temp_v1 < (((int)puVar4 - (int)puVar7) >> 4) + 1; temp_v1 = temp_v1 + 2) {
        }
        *(unsigned int **)(param_1 + 0x10) = puVar7;
        (**(romwright_code **)(**(int **)(param_1 + 8) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x10) = puVar3 + temp_v3 * 4;
      *(unsigned int **)(param_1 + 0xc) = puVar3;
      *(unsigned int *)(param_1 + 0x14) = (*(unsigned int *)(param_1 + 0x14) & 0xc0000000) | temp_v0;
    }
  }
  puVar3 = *(unsigned int **)(param_1 + 0x10);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = temp_v8;
    puVar3[1] = temp_v7;
    puVar3[2] = in_s18;
    puVar3[3] = param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x10;
  return;
}
