/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012f1c8` (_code @ 0x12f1c8, 0x21c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004218c8; /* 0x4218c8 */

/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


int * FUN_0012f1c8(int param_1,int param_2,int *param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int temp_v1;
  unsigned int *puVar7;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar10;
  int temp_v4;
  int temp_v5;
  
  piVar2 = (int *)(**(romwright_code **)(*param_4 + 8))(param_4,0x4c,4);
  if (piVar2 != (int *)0x0) {
    piVar2[2] = param_2;
    *piVar2 = (int)&DAT_004218c8;
    piVar2[1] = (int)param_4;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[10] = 0;
    *(unsigned char *)(piVar2 + 0xb) = 1;
    *(unsigned char *)(piVar2 + 0xc) = 1;
    piVar2[0xe] = 3;
    piVar2[0xd] = 0;
    temp_v1 = *param_3;
    temp_v2 = param_3[1];
    temp_v4 = param_3[2];
    temp_v5 = param_3[3];
    piVar2[3] = 0;
    piVar2[0xf] = temp_v1;
    piVar2[0x10] = temp_v2;
    piVar2[0x11] = temp_v4;
    piVar2[0x12] = temp_v5;
    if (param_2 != 0) {
      *(unsigned char *)(piVar2 + 0xc) = (unsigned char)*(unsigned int *)(param_2 + 0x18) & 1;
    }
  }
  (**(romwright_code **)(*piVar2 + 0x24))(piVar2,param_4);
  if (param_1 == 0) {
    return piVar2;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 != (int *)0x0) {
    if (piVar3 == piVar2) {
      return piVar2;
    }
    nw_gfx_SceneNode_IsCircularReference();
    if (piVar3 != (int *)0x0) {
      return piVar2;
    }
  }
  if (piVar2[3] != 0) {
    return piVar2;
  }
  temp_v3 = *(unsigned int *)(param_1 + 0x20) & 0x3fffffff;
  if ((int)temp_v3 <= (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2) {
    if (temp_v3 == 0) {
      temp_v3 = 1;
    }
    else {
      temp_v3 = temp_v3 << 1;
    }
    if ((*(unsigned int *)(param_1 + 0x20) & 0x3fffffff) < temp_v3) {
      if ((*(int *)(param_1 + 0x14) == 0) ||
         ((*(unsigned int *)(param_1 + 0x20) & 0xc0000000) != 0x40000000)) {
        temp_v0 = 0;
        if (temp_v0) {
          piVar2[3] = *(int *)(param_1 + 0x10);
        }
        return piVar2;
      }
      puVar4 = (unsigned int *)
               (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                         (*(int **)(param_1 + 0x14),temp_v3 << 2,0x20);
      temp_v1 = 0;
      puVar5 = *(unsigned int **)(param_1 + 0x18);
      puVar10 = *(unsigned int **)(param_1 + 0x1c);
      puVar7 = puVar4;
      if (puVar5 != puVar10) {
        do {
          if (puVar7 != (unsigned int *)0x0) {
            *puVar7 = *puVar5;
          }
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar5 != puVar10);
        temp_v1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar4 + temp_v1;
      *(unsigned int **)(param_1 + 0x18) = puVar4;
      *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v3;
    }
  }
  temp_v0 = 1;
  if (*(unsigned int **)(param_1 + 0x1c) != (unsigned int *)0x0) {
    **(unsigned int **)(param_1 + 0x1c) = (unsigned int)piVar2;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  if (temp_v0) {
    piVar2[3] = *(int *)(param_1 + 0x10);
  }
  return piVar2;
}
