/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012c424` (_code @ 0x12c424, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_SceneNode_IsCircularReference(void);

typedef int romwright_code(...);
extern unsigned char DAT_004212f0; /* 0x4212f0 */

extern int *FUN_002b52b4(int, int *, unsigned int *, unsigned int);
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


int * FUN_0012c424(int param_1,unsigned int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  unsigned int temp_v2;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int temp_v3;
  unsigned int *puVar10;
  
  if ((param_2 == (unsigned int *)0x0) || ((~*param_2 & 0x40000122) != 0)) {
    param_2 = (unsigned int *)0x0;
  }
  temp_v1 = (**(romwright_code **)(*param_4 + 8))(param_4,0x17c,4);
  piVar3 = (int *)0x0;
  if (temp_v1 != 0) {
    piVar3 = (int *)FUN_002b52b4(temp_v1,param_4,param_2,param_3);
    piVar3[0x52] = 0;
    *piVar3 = (int)&DAT_004212f0;
    piVar3[0x5c] = 0;
    piVar3[0x5d] = 0;
    piVar3[0x5e] = 0;
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
      if ((*(int *)(param_1 + 0x14) == 0) || ((temp_v3 & 0xc0000000) != 0x40000000)) {
        temp_v0 = 0;
        if (temp_v0) {
          piVar3[3] = *(int *)(param_1 + 0x10);
        }
        return piVar3;
      }
      puVar6 = (unsigned int *)
               (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                         (*(int **)(param_1 + 0x14),temp_v2 << 2,0x20);
      temp_v1 = 0;
      puVar7 = *(unsigned int **)(param_1 + 0x18);
      puVar10 = *(unsigned int **)(param_1 + 0x1c);
      puVar8 = puVar6;
      if (puVar7 != puVar10) {
        do {
          if (puVar8 != (unsigned int *)0x0) {
            *puVar8 = *puVar7;
          }
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (puVar7 != puVar10);
        temp_v1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar6 + temp_v1;
      *(unsigned int **)(param_1 + 0x18) = puVar6;
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
