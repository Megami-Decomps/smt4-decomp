/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003daedc` (_code @ 0x3daedc, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152bec(void);
int FUN_002a775c(unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00152bec. */
/* Supplied declaration required: FUN_002a775c. */


void FUN_003daedc(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  param_1 = param_1 + param_2 * 0x10;
  if (*(int **)(param_1 + 0x968) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x968) + 4))();
    *(unsigned int *)(param_1 + 0x968) = 0;
  }
  if (*(int *)(param_1 + 0x960) != 0) {
    if (-1 < *(int *)(*(int *)(*(int *)(param_1 + 0x960) + 8) + 0xc)) {
      FUN_00152bec();
    }
    FUN_002a775c(*(unsigned int *)(param_1 + 0x960));
    *(unsigned int *)(param_1 + 0x960) = 0;
  }
  *(unsigned int *)(param_1 + 0x96c) = 0;
  return;
}

} /* extern "C" */
