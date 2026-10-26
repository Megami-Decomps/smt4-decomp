#include "shard/Shard0042.h"

extern "C" {

typedef struct FileHolder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 base;
} FileHolder;

extern u32 nn_fs_detail_FileBase_TryRead(u32 *base, s32 *buffer, u32 size, u32 offset);

void fileHolderTryRead(FileHolder *file, s32 *buffer, u32 size, u32 offset)
{
    nn_fs_detail_FileBase_TryRead(&file->base, buffer, size, offset);
}

} /* extern "C" */
