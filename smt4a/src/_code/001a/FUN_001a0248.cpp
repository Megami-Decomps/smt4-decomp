#include "common.h"

extern "C" {

void *nn_fs_detail_FileBase_TrySetPosition(void *self);

/* Calls nn_fs_detail_FileBase_TrySetPosition on the member at +0x8 (placed right after, so the call is a linker NOP). */
void *FUN_001a0248(u8 *self)
{
    return nn_fs_detail_FileBase_TrySetPosition(self + 0x8);
}

} /* extern "C" */
