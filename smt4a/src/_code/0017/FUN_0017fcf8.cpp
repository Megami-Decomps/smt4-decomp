/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fcf8` (_code @ 0x17fcf8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int *DAT_005894d0; /* 0x5894d0 */


void FUN_0017fcf8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x0017fd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*DAT_005894d0 + 0xc))(DAT_005894d0,param_1,0);
  return;
}

} /* extern "C" */
