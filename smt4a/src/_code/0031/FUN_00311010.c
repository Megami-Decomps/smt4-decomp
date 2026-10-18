/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311010` (_code @ 0x311010, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_005c4c18; /* 0x5c4c18 */


void FUN_00311010(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x0031101e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*DAT_005c4c18 + 8))(DAT_005c4c18,param_1,*(unsigned int *)(param_2 + 4));
  return;
}
