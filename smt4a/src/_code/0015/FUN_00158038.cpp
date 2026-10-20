/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158038` (_code @ 0x158038, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_00158038(int param_1)

{
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int temp_v1;
  
  piVar5 = *(int **)(param_1 + 0x24);
  if (*(int **)(param_1 + 0x28) != piVar5) {
    do {
      temp_v0 = piVar5[1];
      piVar5[1] = temp_v0 - 1;
      if (temp_v0 - 1 >= 1) {
        piVar5 = piVar5 + 2;
      }
      else {
        if ((int *)*piVar5 != (int *)0x0) {
          (**(romwright_code **)(*(int *)*piVar5 + 4))();
          *piVar5 = 0;
        }
        piVar2 = *(int **)(param_1 + 0x28);
        if (*(int **)(param_1 + 0x24) != piVar2) {
          piVar3 = piVar5 + 2;
          if ((piVar2 != piVar3) && (temp_v0 = (int)piVar2 - (int)piVar3, 0 < temp_v0 >> 3)) {
            piVar2 = piVar5;
            piVar4 = piVar5 + -2;
            if (temp_v0 * 0x10000000 < 0) {
              *piVar5 = *piVar3;
              piVar5[1] = piVar5[3];
              piVar2 = piVar3;
              piVar4 = piVar5;
            }
            for (temp_v0 = temp_v0 >> 4; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
              temp_v1 = piVar2[3];
              piVar4[2] = piVar2[2];
              piVar4[3] = temp_v1;
              temp_v1 = piVar2[5];
              piVar4[4] = piVar2[4];
              piVar4[5] = temp_v1;
              piVar2 = piVar2 + 4;
              piVar4 = piVar4 + 4;
            }
          }
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - 8;
        }
      }
    } while (*(int **)(param_1 + 0x28) != piVar5);
  }
  return;
}

} /* extern "C" */
