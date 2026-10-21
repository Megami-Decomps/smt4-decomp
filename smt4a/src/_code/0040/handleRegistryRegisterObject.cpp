/* NON_MATCHING: romwright 0.5.0 decompilation of `handleRegistryRegisterObject` (_code @ 0x40ace8, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001006ec(int, int, int);

extern int *FUN_001006c2(int, unsigned int);
/* Supplied declaration required: FUN_001006ec. */


/* WARNING: Removing unreachable block (ram,0x0040ad60) */
/* WARNING: Removing unreachable block (ram,0x0040ad6c) */

void handleRegistryRegisterObject(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  int *piVar4;
  int *piVar5;
  int temp_v2;
  int *piVar7;
  unsigned int temp_v3;
  
  if (*(int *)(param_2 + 0x268) == 0) {
    piVar7 = *(int **)(param_1 + 0x1c);
    if (piVar7 != *(int **)(param_1 + 0x20)) {
      *(int **)(param_1 + 0x1c) = piVar7 + 1;
      if (piVar7 != (int *)0x0) {
        *piVar7 = param_2;
      }
    }
    else {
      temp_v0 = ((int)piVar7 - *(int *)(param_1 + 0x18)) >> 2;
      if (temp_v0 < (unsigned int)(((int)*(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) >> 2)) {
        *(int **)(param_1 + 0x1c) = piVar7 + 1;
        if (piVar7 != (int *)0x0) {
          *piVar7 = piVar7[-1];
        }
        *piVar7 = param_2;
      }
      else {
        temp_v3 = temp_v0 + (temp_v0 >> 1) + (temp_v0 >> 3);
        if (temp_v3 < temp_v0 + 0x20) {
          temp_v3 = temp_v0 + 0x20;
        }
        piVar2 = (int *)FUN_001006c2(temp_v3 << 2,0);
        piVar5 = piVar2;
        for (piVar4 = *(int **)(param_1 + 0x18); piVar4 != piVar7; piVar4 = piVar4 + 1) {
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar4;
          }
          piVar5 = piVar5 + 1;
        }
        piVar4 = (int *)((((int)piVar7 - *(int *)(param_1 + 0x18)) & 0xfffffffcU) + (int)piVar2);
        if (piVar4 != (int *)0x0) {
          *piVar4 = param_2;
        }
        piVar5 = *(int **)(param_1 + 0x1c);
        piVar4 = (int *)((((int)piVar7 - *(int *)(param_1 + 0x18)) & 0xfffffffcU) + (int)piVar2);
        for (; piVar7 != piVar5; piVar7 = piVar7 + 1) {
          piVar4 = piVar4 + 1;
          if (piVar4 != (int *)0x0) {
            *piVar4 = *piVar7;
          }
        }
        temp_v1 = *(int *)(param_1 + 0x18);
        temp_v2 = *(int *)(param_1 + 0x1c);
        FUN_001006ec(temp_v1,(*(int *)(param_1 + 0x20) - temp_v1) >> 2,0);
        *(int **)(param_1 + 0x20) = piVar2 + temp_v3;
        *(int **)(param_1 + 0x1c) = piVar2 + ((temp_v2 - temp_v1) >> 2) + 1;
        *(int **)(param_1 + 0x18) = piVar2;
      }
    }
    *(int *)(param_2 + 0x268) = param_1;
  }
  return;
}

} /* extern "C" */
