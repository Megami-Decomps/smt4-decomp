/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7520` (_code @ 0x4f7520, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_004f7520(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  param_1 = param_1 + param_2 * 0x10;
  if (*(int **)(param_1 + 0x968) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x968) + 4))();
    *(unsigned int *)(param_1 + 0x968) = 0;
  }
  if (*(int *)(param_1 + 0x960) != 0) {
    FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(param_1 + 0x960) + 4));
    if (*(int **)(param_1 + 0x960) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x960) + 4))();
      *(unsigned int *)(param_1 + 0x960) = 0;
    }
  }
  *(unsigned int *)(param_1 + 0x96c) = 0;
  return;
}
