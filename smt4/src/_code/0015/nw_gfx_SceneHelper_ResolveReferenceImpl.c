/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneHelper_ResolveReferenceImpl` (_code @ 0x150254, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


void nw_gfx_SceneHelper_ResolveReferenceImpl(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int *puVar5;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar8;
  int temp_v4;
  int temp_v5;
  int *piVar11;
  
  if (*(int *)(param_2 + 0xc) != 0) {
    return;
  }
  temp_v4 = 0;
  temp_v2 = *(int *)(param_1 + 8);
  if (*(int *)(temp_v2 + 0x20) < 1) {
    return;
  }
  while( 1 ) {
    if (*(int *)(temp_v2 + 0x24) != 0) {
      temp_v5 = temp_v2 + 0x24 + *(int *)(temp_v2 + 0x24);
    }
    else {
      temp_v5 = 0;
    }
    piVar11 = (int *)(temp_v5 + temp_v4 * 4);
    temp_v5 = *piVar11;
    if (temp_v5 != 0) {
      temp_v5 = (int)piVar11 + temp_v5;
    }
    else {
      temp_v5 = 0;
    }
    if (*(int *)(param_2 + 8) == temp_v5) break;
    temp_v4 = temp_v4 + 1;
    if (*(int *)(temp_v2 + 0x20) <= temp_v4) {
      return;
    }
  }
  temp_v2 = *(int *)(param_1 + 0xc);
  if (temp_v2 != 0) {
    if (temp_v2 == param_2) {
      return;
    }
    nw_gfx_SceneNode_IsCircularReference();
    if (temp_v2 != 0) {
      return;
    }
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    return;
  }
  temp_v3 = *(unsigned int *)(param_1 + 0x20);
  piVar11 = (int *)(param_1 + 0x14);
  temp_v1 = temp_v3 & 0x3fffffff;
  if ((int)temp_v1 <= (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2) {
    if (temp_v1 != 0) {
      temp_v1 = temp_v1 << 1;
    }
    else {
      temp_v1 = 1;
    }
    if ((temp_v3 & 0x3fffffff) < temp_v1) {
      if ((*piVar11 == 0) || ((temp_v3 & 0xc0000000) != 0x40000000)) {
        temp_v0 = 0;
        if (temp_v0) {
          *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 0x10);
        }
        return;
      }
      puVar2 = (unsigned int *)(**(romwright_code **)(*(int *)*piVar11 + 8))((int *)*piVar11,temp_v1 << 2,0x20);
      temp_v2 = 0;
      puVar3 = *(unsigned int **)(param_1 + 0x18);
      puVar8 = *(unsigned int **)(param_1 + 0x1c);
      puVar5 = puVar2;
      if (puVar3 != puVar8) {
        do {
          if (puVar5 != (unsigned int *)0x0) {
            *puVar5 = *puVar3;
          }
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar3 != puVar8);
        temp_v2 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(romwright_code **)(*(int *)*piVar11 + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar2 + temp_v2;
      *(unsigned int **)(param_1 + 0x18) = puVar2;
      *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v1;
    }
  }
  temp_v0 = 1;
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    **(int **)(param_1 + 0x1c) = param_2;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  if (temp_v0) {
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 0x10);
  }
  return;
}
