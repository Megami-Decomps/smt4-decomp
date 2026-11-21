/* NON_MATCHING: retail reaches the position through its own base register (add r0, r4, #4; ldrd / ldm) and keeps
 * source/size/flush in other registers (sl/fp also saved); the SDK prototype (s64 position before the buffer) is right. */
#include "common.h"
#include "nn/Result.h"

extern "C" {
s32 nn_fs_CTR_MPCore_detail_UserFileSystem_TryWriteFile(s32 *written, u32 handle, s64 position, const void *buffer, u32 size, bool flush); // declcheck: local (protos__code.h has only the decompiler's placeholder types)

/* Writes `size` bytes at the cursor's position, advancing it; returns the first failing result, else 0. */
s32 FUN_00356cc0(void *cursor, s32 *written, const void *data, u32 size, bool flush)
{
    __packed struct FileWriteCursor {
        u32 handle;
        s64 position;
    };
    FileWriteCursor *state = static_cast<FileWriteCursor *>(cursor);
    s32 total = 0;
    const u8 *source = static_cast<const u8 *>(data);
    while (size != 0) {
        u32 handle = flush ? state->handle & ~1u : state->handle | 1;
        state->handle = handle;
        s32 completed;
        s32 result = nn_fs_CTR_MPCore_detail_UserFileSystem_TryWriteFile(&completed, handle & ~1u, state->position, source, size, flush);
        if (nnResultIsFailure(result))
            return result;
        total += completed;
        state->position += completed;
        if ((u32)completed == size || completed == 0)
            break;
        source += completed;
        size -= completed;
    }
    *written = total;
    return 0;
}
}
