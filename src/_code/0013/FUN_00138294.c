/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138294` (_code @ 0x138294, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_0044e7ac; /* 0x44e7ac */


void FUN_00138294(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x001382b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*DAT_0044e7ac + 0xc))(DAT_0044e7ac,param_1,0);
  return;
}
