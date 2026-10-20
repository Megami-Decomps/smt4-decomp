/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneNode_AttachChild` (_code @ 0x2c00b4, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_SceneNode_IsCircularReference(void);

typedef int romwright_code(...);
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


int nw_gfx_SceneNode_AttachChild(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned int *puVar7;
  unsigned int *puVar8;
  
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
      piVar3 = *(int **)(param_1 + 0x14);
      if ((piVar3 == (int *)0x0) || ((temp_v2 & 0xc0000000) != 0x40000000)) {
        temp_v0 = 0;
        if (temp_v0 != 0) {
          *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 0x10);
        }
        return temp_v0;
      }
      puVar4 = (unsigned int *)(**(romwright_code **)(*piVar3 + 8))(piVar3,temp_v1 << 2,0x20);
      puVar5 = *(unsigned int **)(param_1 + 0x18);
      puVar8 = *(unsigned int **)(param_1 + 0x1c);
      temp_v0 = 0;
      puVar7 = puVar4;
      if (puVar5 != puVar8) {
        do {
          if (puVar7 != (unsigned int *)0x0) {
            *puVar7 = *puVar5;
          }
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar5 != puVar8);
        temp_v0 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar4 + temp_v0;
      *(unsigned int **)(param_1 + 0x18) = puVar4;
      *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v1;
    }
  }
  temp_v0 = 1;
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    **(int **)(param_1 + 0x1c) = param_2;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  if (temp_v0 != 0) {
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 0x10);
  }
  return temp_v0;
}

} /* extern "C" */
