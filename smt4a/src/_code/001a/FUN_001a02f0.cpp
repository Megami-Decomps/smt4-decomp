#include "common.h"

extern "C" {

void *nn_fs_detail_FileBase_TryRead(void *self);

/* Calls nn_fs_detail_FileBase_TryRead on the member at +0x8 (placed right after, so the call is a linker NOP). */
void *FUN_001a02f0(u8 *self)
{
    return nn_fs_detail_FileBase_TryRead(self + 0x8);
}

} /* extern "C" */
