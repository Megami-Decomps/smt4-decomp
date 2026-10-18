/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239b84` (_code @ 0x239b84, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_00472a3c; /* 0x472a3c */


void FUN_00239b84(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((param_1 != 0) && (DAT_00472a3c != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00239ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*DAT_00472a3c + 4))();
    return;
  }
  return;
}
