/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00451644` (_code @ 0x451644, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0059daf4; /* 0x59daf4 */
extern romwright_code *DAT_0059daf8; /* 0x59daf8 */


void FUN_00451644(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (((int *)*param_1)[1] != 0) {
    temp_v0 = *(int *)*param_1;
    if (temp_v0 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x00451678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0059daf4)();
      return;
    }
    if (temp_v0 == 0x40000000) {
                    /* WARNING: Could not recover jumptable at 0x00451670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0059daf8)();
      return;
    }
  }
  return;
}

} /* extern "C" */
