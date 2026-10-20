/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d385c` (_code @ 0x3d385c, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00589528; /* 0x589528 */


void FUN_003d385c(void)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x003d3864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(*(romwright_code * *)((unsigned char *)&DAT_00589528 + 0x4)))();
  return;
}

} /* extern "C" */
