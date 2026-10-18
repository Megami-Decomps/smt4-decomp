/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002914bc` (_code @ 0x2914bc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_002914bc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  romwright_code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(romwright_code **)((unsigned int)*(unsigned short *)(param_1 + 4) * 0x44 + 0x5b329c);
  if (UNRECOVERED_JUMPTABLE != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002914dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(unsigned int *)(param_1 + 8));
    return;
  }
  return;
}
