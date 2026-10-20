/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb688` (_code @ 0x2bb688, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdFatalError(void);

/* Supplied declaration required: asdFatalError. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


int FUN_002bb688(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 8) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(param_1 + 8) & 1) != 0) {
      asdFatalError();
    }
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*(unsigned int *)(param_1 + 8) & 0xfffffffe);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return param_1;
}

} /* extern "C" */
