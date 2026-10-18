/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004188ec` (_code @ 0x4188ec, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_004188ec(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 8) + 0xc))();
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      if ((char)piVar1[1] == '\0') {
        return;
      }
      (**(romwright_code **)(*piVar1 + 0x10))();
      if (*(int **)(param_1 + 8) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 8) + 4))();
      }
      *(unsigned int *)(param_1 + 8) = 0;
    }
  }
  *(unsigned char *)(param_1 + 4) = 1;
  return;
}
