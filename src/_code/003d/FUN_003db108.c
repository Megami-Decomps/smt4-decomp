/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db108` (_code @ 0x3db108, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_002a7aa0. */


void FUN_003db108(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  param_1 = param_1 + param_2 * 0x10;
  if (*(int **)(param_1 + 0x968) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x968) + 4))();
    *(unsigned int *)(param_1 + 0x968) = 0;
  }
  if (*(int *)(param_1 + 0x960) != 0) {
    if (-1 < *(int *)(*(int *)(*(int *)(param_1 + 0x960) + 8) + 0xc)) {
      FUN_00152af8();
    }
    FUN_002a7aa0(*(unsigned int *)(param_1 + 0x960));
    *(unsigned int *)(param_1 + 0x960) = 0;
  }
  *(unsigned int *)(param_1 + 0x96c) = 0;
  return;
}
