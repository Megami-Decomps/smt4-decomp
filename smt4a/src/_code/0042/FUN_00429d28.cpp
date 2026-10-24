#include "common.h"

struct FileWrapper {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 base[1];
};

extern "C" {

u32 nn_fs_detail_FileBase_TrySeek(void *file, s64 offset, s32 origin);

/* Virtual slot: seeks the wrapped file base. */
u32 FUN_00429d28(FileWrapper *self, s64 offset, s32 origin)
{
    return nn_fs_detail_FileBase_TrySeek(self->base, offset, origin);
}

} /* extern "C" */
