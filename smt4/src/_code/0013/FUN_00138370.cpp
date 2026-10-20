/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138370` (_code @ 0x138370, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int *DAT_0044e7ac; /* 0x44e7ac */


void FUN_00138370(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x0013838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*DAT_0044e7ac + 0xc))(DAT_0044e7ac,param_1,0);
  return;
}

} /* extern "C" */
