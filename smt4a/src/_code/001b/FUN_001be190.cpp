/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001be190` (_code @ 0x1be190, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_SceneNode_IsCircularReference(void);

typedef int romwright_code(...);
extern unsigned char DAT_0055b4b0; /* 0x55b4b0 */

extern int *_ZN9Obj55b680C1EP18AsdAllocatorObjectP12Obj55b680ResPv(int, int *, unsigned int *, unsigned int);
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


int * FUN_001be190(int param_1,unsigned int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int temp_v2;
  unsigned int *puVar9;
  unsigned int temp_v3;
  
  if ((param_2 == (unsigned int *)0x0) || ((~*param_2 & 0x40000222) != 0)) {
    param_2 = (unsigned int *)0x0;
  }
  temp_v1 = (**(romwright_code **)(*param_4 + 8))(param_4,0x188,4);
  temp_v0 = 0;
  piVar3 = (int *)0x0;
  if (temp_v1 != 0) {
    piVar3 = (int *)_ZN9Obj55b680C1EP18AsdAllocatorObjectP12Obj55b680ResPv(temp_v1,param_4,param_2,param_3);
    piVar3[0x52] = 0;
    *piVar3 = (int)&DAT_0055b4b0;
    piVar3[0x5c] = 0;
    piVar3[0x5d] = 0;
    piVar3[0x5e] = 0;
    temp_v2 = param_2[0x38];
    temp_v3 = param_2[0x39];
    piVar3[0x5f] = param_2[0x37];
    piVar3[0x60] = temp_v2;
    piVar3[0x61] = temp_v3;
  }
  (**(romwright_code **)(*piVar3 + 0x24))(piVar3,param_4);
  if (param_1 == 0) {
    return piVar3;
  }
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    if (piVar4 == piVar3) {
      return piVar3;
    }
    nw_gfx_SceneNode_IsCircularReference();
    if (piVar4 != (int *)0x0) {
      return piVar3;
    }
  }
  if (piVar3[3] != 0) {
    return piVar3;
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
         (puVar5 = (unsigned int *)
                   (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                             (*(int **)(param_1 + 0x14),temp_v2 << 2,0x20),
         puVar5 == (unsigned int *)0x0)) {
        if (temp_v0) {
          piVar3[3] = *(int *)(param_1 + 0x10);
        }
        return piVar3;
      }
      temp_v1 = 0;
      puVar6 = *(unsigned int **)(param_1 + 0x18);
      puVar9 = *(unsigned int **)(param_1 + 0x1c);
      puVar7 = puVar5;
      if (puVar6 != puVar9) {
        do {
          if (puVar7 != (unsigned int *)0x0) {
            *puVar7 = *puVar6;
          }
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar6 != puVar9);
        temp_v1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar5 + temp_v1;
      *(unsigned int **)(param_1 + 0x18) = puVar5;
      *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v2;
    }
  }
  temp_v0 = 1;
  if (*(unsigned int **)(param_1 + 0x1c) != (unsigned int *)0x0) {
    **(unsigned int **)(param_1 + 0x1c) = (unsigned int)piVar3;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  if (temp_v0) {
    piVar3[3] = *(int *)(param_1 + 0x10);
  }
  return piVar3;
}

} /* extern "C" */
