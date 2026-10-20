/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002399ec` (_code @ 0x2399ec, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00472a38; /* 0x472a38 */


void FUN_002399ec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((param_1 != 0) && ((*(int * *)((unsigned char *)&DAT_00472a38 + 0x4)) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00239a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*(*(int * *)((unsigned char *)&DAT_00472a38 + 0x4)) + 4))();
    return;
  }
  return;
}

} /* extern "C" */
