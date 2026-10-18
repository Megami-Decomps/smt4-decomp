/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneTraverser_VisitSkeletalModel` (_code @ 0x366ed8, 0x158 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Supplied declaration required: FUN_0023669c. */
/* Supplied declaration required: FUN_003f7580. */


void nw_gfx_SceneTraverser_VisitSkeletalModel(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int temp_v2;
  int temp_v3;
  int temp_v4 [4];
  int temp_v5 [2];
  int temp_v6 [3];
  
  temp_v5[0] = param_2;
  FUN_0023669c(*(int *)(param_1 + 8) + 8,temp_v5);
  temp_v6[0] = param_2;
  FUN_003f7580(*(int *)(param_1 + 8) + 0x28,temp_v6);
  temp_v2 = *(int *)(param_1 + 8);
  temp_v1 = *(unsigned int *)(temp_v2 + 0x44);
  temp_v0 = temp_v1 & 0x3fffffff;
  if ((int)temp_v0 <= (*(int *)(temp_v2 + 0x40) - *(int *)(temp_v2 + 0x3c)) >> 2) {
    if (temp_v0 != 0) {
      temp_v0 = temp_v0 << 1;
    }
    else {
      temp_v0 = 1;
    }
    if ((temp_v1 & 0x3fffffff) < temp_v0) {
      piVar2 = *(int **)(temp_v2 + 0x38);
      if ((piVar2 == (int *)0x0) || ((temp_v1 & 0xc0000000) != 0x40000000)) {
        if (*(int *)(param_2 + 0x28) != 0) {
          temp_v4[0] = param_2;
          FUN_0023669c(*(int *)(param_1 + 8) + 0xe8,temp_v4);
        }
        return;
      }
      puVar3 = (unsigned int *)(**(romwright_code **)(*piVar2 + 8))(piVar2,temp_v0 << 2,0x20);
      puVar4 = *(unsigned int **)(temp_v2 + 0x3c);
      puVar7 = *(unsigned int **)(temp_v2 + 0x40);
      temp_v3 = 0;
      puVar6 = puVar3;
      if (puVar4 != puVar7) {
        do {
          if (puVar6 != (unsigned int *)0x0) {
            *puVar6 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (puVar4 != puVar7);
        temp_v3 = (*(int *)(temp_v2 + 0x40) - *(int *)(temp_v2 + 0x3c)) >> 2;
      }
      if (*(int *)(temp_v2 + 0x3c) != 0) {
        (**(romwright_code **)(**(int **)(temp_v2 + 0x38) + 0xc))();
      }
      *(unsigned int **)(temp_v2 + 0x40) = puVar3 + temp_v3;
      *(unsigned int **)(temp_v2 + 0x3c) = puVar3;
      *(unsigned int *)(temp_v2 + 0x44) = (*(unsigned int *)(temp_v2 + 0x44) & 0xc0000000) | temp_v0;
    }
  }
  if (*(int **)(temp_v2 + 0x40) != (int *)0x0) {
    **(int **)(temp_v2 + 0x40) = param_2;
  }
  *(int *)(temp_v2 + 0x40) = *(int *)(temp_v2 + 0x40) + 4;
  if (*(int *)(param_2 + 0x28) != 0) {
    temp_v4[0] = param_2;
    FUN_0023669c(*(int *)(param_1 + 8) + 0xe8,temp_v4);
  }
  return;
}
