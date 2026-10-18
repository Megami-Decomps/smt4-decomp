/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5c00` (_code @ 0x3e5c00, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_003e5c00(int param_1)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x5c;
    piVar2 = *(int **)(temp_v0 + 0x24);
    if (piVar2 != (int *)0x0) {
      (**(romwright_code **)(*piVar2 + 4))();
      *(unsigned int *)(temp_v0 + 0x24) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 8) + 4))();
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}
