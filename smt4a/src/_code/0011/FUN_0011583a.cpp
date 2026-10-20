/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011583a` (_code @ 0x11583a, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0011583a(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x00115850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(*(int *)(param_1 + 4) + (unsigned int)*(unsigned char *)(param_2 + 0x24) * 4) + 0x10))();
  return;
}

} /* extern "C" */
