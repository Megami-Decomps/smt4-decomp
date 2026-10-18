/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024aab4` (_code @ 0x24aab4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile. */


unsigned int FUN_0024aab4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 8) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(param_1 + 8) & 1) != 0) {
      FUN_002c52f8();
    }
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*(unsigned int *)(param_1 + 8) & 0xfffffffe);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return 0;
}
