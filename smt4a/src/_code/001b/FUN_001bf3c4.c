/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bf3c4` (_code @ 0x1bf3c4, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *FUN_001b7420(int, int *, unsigned int, unsigned int);
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


int * FUN_001bf3c4(int param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned int *puVar7;
  unsigned int temp_v3;
  unsigned int *puVar9;
  int *piVar10;
  
  temp_v1 = (**(romwright_code **)(*param_4 + 8))(param_4,0x148,4);
  if (temp_v1 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)FUN_001b7420(temp_v1,param_4,param_2,param_3);
  }
  (**(romwright_code **)(*piVar10 + 0x24))(piVar10,param_4);
  if (param_1 == 0) {
    return piVar10;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  temp_v0 = 0;
  if (piVar3 != (int *)0x0) {
    if (piVar3 == piVar10) {
      return piVar10;
    }
    nw_gfx_SceneNode_IsCircularReference();
    if (piVar3 != (int *)0x0) {
      return piVar10;
    }
  }
  if (piVar10[3] != 0) {
    return piVar10;
  }
  temp_v3 = *(unsigned int *)(param_1 + 0x20);
  temp_v2 = temp_v3 & 0x3fffffff;
  if ((int)temp_v2 <= (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2) {
    if (temp_v2 != 0) {
      temp_v2 = temp_v2 << 1;
    }
    else {
      temp_v2 = 1;
    }
    if ((temp_v3 & 0x3fffffff) < temp_v2) {
      if (((*(int *)(param_1 + 0x14) == 0) || ((temp_v3 & 0xc0000000) != 0x40000000)) ||
         (puVar4 = (unsigned int *)
                   (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                             (*(int **)(param_1 + 0x14),temp_v2 << 2,0x20),
         puVar4 == (unsigned int *)0x0)) {
        if (temp_v0) {
          piVar10[3] = *(int *)(param_1 + 0x10);
        }
        return piVar10;
      }
      temp_v1 = 0;
      puVar5 = *(unsigned int **)(param_1 + 0x18);
      puVar9 = *(unsigned int **)(param_1 + 0x1c);
      puVar7 = puVar4;
      if (puVar5 != puVar9) {
        do {
          if (puVar7 != (unsigned int *)0x0) {
            *puVar7 = *puVar5;
          }
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar5 != puVar9);
        temp_v1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar4 + temp_v1;
      *(unsigned int **)(param_1 + 0x18) = puVar4;
      *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v2;
    }
  }
  temp_v0 = 1;
  if (*(unsigned int **)(param_1 + 0x1c) != (unsigned int *)0x0) {
    **(unsigned int **)(param_1 + 0x1c) = (unsigned int)piVar10;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  if (temp_v0) {
    piVar10[3] = *(int *)(param_1 + 0x10);
  }
  return piVar10;
}
