/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7520` (_code @ 0x4f7520, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ptrListRemoveClearOwner(unsigned int, unsigned int);

typedef int romwright_code(...);
extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: ptrListRemoveClearOwner. */


void FUN_004f7520(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  param_1 = param_1 + param_2 * 0x10;
  if (*(int **)(param_1 + 0x968) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x968) + 4))();
    *(unsigned int *)(param_1 + 0x968) = 0;
  }
  if (*(int *)(param_1 + 0x960) != 0) {
    ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(param_1 + 0x960) + 4));
    if (*(int **)(param_1 + 0x960) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x960) + 4))();
      *(unsigned int *)(param_1 + 0x960) = 0;
    }
  }
  *(unsigned int *)(param_1 + 0x96c) = 0;
  return;
}

} /* extern "C" */
