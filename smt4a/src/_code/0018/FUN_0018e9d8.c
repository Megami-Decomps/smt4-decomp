/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018e9d8` (_code @ 0x18e9d8, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


int FUN_0018e9d8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  unsigned int *puVar6;
  unsigned int temp_v2;
  unsigned int *puVar8;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v0 = *(int *)(param_1 + 0xc);
  if (((temp_v0 != 0) && ((temp_v0 == param_2 || (nw_gfx_SceneNode_IsCircularReference(), temp_v0 != 0))))
     || (*(int *)(param_2 + 0xc) != 0)) {
    return 0;
  }
  temp_v2 = *(unsigned int *)(param_1 + 0x20);
  temp_v1 = temp_v2 & 0x3fffffff;
  if ((int)temp_v1 <= (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2) {
    if (temp_v1 != 0) {
      temp_v1 = temp_v1 << 1;
    }
    else {
      temp_v1 = 1;
    }
    if ((temp_v2 & 0x3fffffff) < temp_v1) {
      piVar2 = *(int **)(param_1 + 0x14);
      if (((piVar2 == (int *)0x0) || ((temp_v2 & 0xc0000000) != 0x40000000)) ||
         (puVar3 = (unsigned int *)(**(romwright_code **)(*piVar2 + 8))(piVar2,temp_v1 << 2,0x20),
         puVar3 == (unsigned int *)0x0)) {
        if (temp_v3 != 0) {
          *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 0x10);
        }
        return temp_v3;
      }
      temp_v0 = 0;
      puVar4 = *(unsigned int **)(param_1 + 0x18);
      puVar8 = *(unsigned int **)(param_1 + 0x1c);
      puVar6 = puVar3;
      if (puVar4 != puVar8) {
        do {
          if (puVar6 != (unsigned int *)0x0) {
            *puVar6 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (puVar4 != puVar8);
        temp_v0 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar3 + temp_v0;
      *(unsigned int **)(param_1 + 0x18) = puVar3;
      *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v1;
    }
  }
  temp_v3 = 1;
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    **(int **)(param_1 + 0x1c) = param_2;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  if (temp_v3 != 0) {
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 0x10);
  }
  return temp_v3;
}
