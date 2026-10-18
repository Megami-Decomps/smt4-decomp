/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d828` (_code @ 0x15d828, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e8e0; /* 0x44e8e0 */
extern romwright_code *DAT_0044e8e4; /* 0x44e8e4 */


void FUN_0015d828(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  if (*(int *)*param_1 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x0015d850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0044e8e0)();
    return;
  }
  if (*(int *)*param_1 == 0x40000000) {
                    /* WARNING: Could not recover jumptable at 0x0015d848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0044e8e4)();
    return;
  }
  return;
}
