/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012d06e` (_code @ 0x12d06e, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0012d06e(int param_1)

{
/* irregular: 2 native warning(s); review required */
  romwright_code *UNRECOVERED_JUMPTABLE;
  int *piVar1;
  
  UNRECOVERED_JUMPTABLE = *(romwright_code **)(param_1 + 8);
  piVar1 = (int *)(*(int *)(param_1 + 4) + ((int)*(unsigned int *)(param_1 + 0xc) >> 1));
  if ((*(unsigned int *)(param_1 + 0xc) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(romwright_code **)((unsigned char *)UNRECOVERED_JUMPTABLE + *piVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0012d08a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(piVar1,*(unsigned int *)(param_1 + 0x10));
  return;
}

} /* extern "C" */
