/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00430f2c` (_code @ 0x430f2c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned int *DAT_005c1488; /* 0x5c1488 */


void FUN_00430f2c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005c1488 != (unsigned int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00430f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)*DAT_005c1488)(DAT_005c1488,param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
