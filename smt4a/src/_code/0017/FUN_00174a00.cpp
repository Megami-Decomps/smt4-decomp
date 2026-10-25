/* NON_MATCHING: only the order of the two argument set-ups before the second TryRead call (retail: add r0, r4, #4 then mov r1, sp) */
/* Reads from a file. In result-recording mode the result is stored in the file and the call reports success; otherwise a
 * failure is fatal. Returns 1 on success. */
#include "nn/Result.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {
struct FileHandle {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 base[0x14];     /* nn::fs::detail::FileBase */
    /* 0x18 */ s32 result;
    /* 0x1C */ u8 recordResult;
};

s32 nn_fs_detail_FileBase_TryRead(void *file, s32 *bytesRead, void *buffer, u32 size);

static inline void throwFatalIfFailed(s32 result, u32 address)
{
    if (nnResultIsFailure(result)) {
        FUN_0016e800(result, address);
    }
}

s32 FUN_00174a00(FileHandle *file, void *buffer, u32 size, s32 *bytesRead)
{
    if (file->recordResult != 0) {
        file->result = nn_fs_detail_FileBase_TryRead(file->base, bytesRead, buffer, size);
        return nnResultIsSuccess(file->result);
    }
    s32 count;
    s32 result = nn_fs_detail_FileBase_TryRead(file->base, &count, buffer, size);
    throwFatalIfFailed(result, __current_pc());
    *bytesRead = count;
    return 1;
}
}
