/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_CTR_MPCore_detail_UserFileSystem_TryGetFileSize` (_code @ 0x2a856c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int nn_fs_CTR_MPCore_detail_UserFileSystem_TryGetFileSize(long long *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1 != (long long *)0x0 && param_2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002a858c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,param_1);
    return temp_v0;
  }
  return 0xe0e046bc;
}
