/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d91c` (_code @ 0x15d91c, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0044e8e0; /* 0x44e8e0 */


void FUN_0015d91c(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  if (*(int *)*param_1 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x0015d944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0044e8e0)();
    return;
  }
  if (*(int *)*param_1 == 0x40000000) {
                    /* WARNING: Could not recover jumptable at 0x0015d93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(*(romwright_code * *)((unsigned char *)&DAT_0044e8e0 + 0x4)))();
    return;
  }
  return;
}

} /* extern "C" */
