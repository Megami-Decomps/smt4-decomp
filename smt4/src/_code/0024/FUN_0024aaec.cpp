#include "romwright_types.h"

extern "C" {

int FUN_002c52f8(void);

/* Supplied declaration required: FUN_002c52f8. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


unsigned int FUN_0024aaec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 8) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(param_1 + 8) & 1) != 0) {
      FUN_002c52f8();
    }
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*(unsigned int *)(param_1 + 8) & 0xfffffffe);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return 0;
}

} /* extern "C" */
