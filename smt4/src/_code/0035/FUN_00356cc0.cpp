/* NON_MATCHING: retail 44 vs built 45 rows; packed file-offset arithmetic and write-loop register allocation differ. */
#include "common.h"

extern "C" {
u32 nn_fs_CTR_MPCore_detail_UserFileSystem_TryWriteFile(s32 *, u32, const void *, u32, s64, u8);

u32 FUN_00356cc0(void *cursor, s32 *written, const void *data, u32 size, u8 flush)
{
    __packed struct FileWriteCursor {
        u32 handle;
        s64 position;
    };
    FileWriteCursor *state = static_cast<FileWriteCursor *>(cursor);
    s32 total = 0;
    const u8 *source = static_cast<const u8 *>(data);
    while (size != 0) {
        if (flush == 0)
            state->handle |= 1;
        else
            state->handle &= ~1u;
        s32 completed;
        u32 result = nn_fs_CTR_MPCore_detail_UserFileSystem_TryWriteFile(
            &completed, state->handle & ~1u, source, size, state->position, flush);
        if (static_cast<s32>(result) < 0)
            return result;
        total += completed;
        state->position += completed;
        if (static_cast<u32>(completed) == size || completed == 0)
            break;
        source += completed;
        size -= completed;
    }
    *written = total;
    return 0;
}
}
