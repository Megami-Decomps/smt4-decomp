/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f338` (_code @ 0x36f338, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e8f0; /* 0x44e8f0 */
extern romwright_code *DAT_0044e8f4; /* 0x44e8f4 */


void FUN_0036f338(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (((int *)*param_1)[1] != 0) {
    temp_v0 = *(int *)*param_1;
    if (temp_v0 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x0036f36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0044e8f0)();
      return;
    }
    if (temp_v0 == 0x40000000) {
                    /* WARNING: Could not recover jumptable at 0x0036f364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0044e8f4)();
      return;
    }
  }
  return;
}
