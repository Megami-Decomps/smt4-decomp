/* NON_MATCHING: romwright 0.5.0 decompilation of `ptrListRemoveClearOwner` (_code @ 0x1aea28, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


void ptrListRemoveClearOwner(int param_1,int param_2)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int *piVar4;
  int *piVar5;
  int temp_v2;
  
  piVar4 = *(int **)(param_1 + 0x18);
  if (*(int **)(param_1 + 0x1c) != piVar4) {
    while (*piVar4 != param_2) {
      piVar4 = piVar4 + 1;
      if (*(int **)(param_1 + 0x1c) == piVar4) {
        return;
      }
    }
    *(unsigned int *)(param_2 + 0x268) = 0;
    piVar2 = *(int **)(param_1 + 0x1c);
    if (*(int **)(param_1 + 0x18) != piVar2) {
      piVar5 = piVar4 + 1;
      if (piVar2 != piVar5) {
        temp_v0 = ((int)piVar2 - (int)piVar5) >> 2;
        if (0 < temp_v0) {
          temp_v2 = 0;
          if (piVar5 >= piVar2) {
            temp_v1 = 0;
          }
          else {
            temp_v1 = -(((int)piVar2 - (int)piVar5) * 0x20000000 >> 0x1f);
            if (temp_v1 == 1) {
              temp_v2 = 1;
              *piVar4 = *piVar5;
            }
          }
          for (; temp_v1 < temp_v0; temp_v1 = temp_v1 + 2) {
            piVar4[temp_v2] = piVar5[temp_v2];
            piVar4[temp_v2 + 1] = piVar5[temp_v2 + 1];
            temp_v2 = temp_v2 + 2;
          }
        }
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - 4;
    }
  }
  return;
}

} /* extern "C" */
