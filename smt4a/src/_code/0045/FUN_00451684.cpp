/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00451684` (_code @ 0x451684, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0059dae4; /* 0x59dae4 */


void FUN_00451684(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  if (*(int *)*param_1 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x004516ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0059dae4)();
    return;
  }
  if (*(int *)*param_1 == 0x40000000) {
                    /* WARNING: Could not recover jumptable at 0x004516a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(*(romwright_code * *)((unsigned char *)&DAT_0059dae4 + 0x4)))();
    return;
  }
  return;
}

} /* extern "C" */
