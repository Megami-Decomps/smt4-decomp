/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_CTR_MPCore_detail_UserFileSystem_TrySetPriorityForFile` (_code @ 0x355eac, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void nn_fs_CTR_MPCore_detail_UserFileSystem_TrySetPriorityForFile(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00355ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*param_1 + 0x14))();
    return;
  }
  return;
}
