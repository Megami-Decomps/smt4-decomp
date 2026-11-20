/* NON_MATCHING: ported from smt4a fileHandleSeek; only the tail differs (retail stores result before `asr r0, r0, #31`, build sign-extends into r1 first). */
#include "common.h"
#include "util/PlatformResultCheck.h"

struct SeekableFile {
    u8 unk00[4];       /* 0x00 */
    u8 base[0x14];     /* 0x04 (the nn::fs file object) */
    s32 lastResult;    /* 0x18 */
    u8 deferError;     /* 0x1C */
};

extern "C" {

u32 nn_fs_detail_FileBase_TrySeek(void *file, s64 offset, s32 origin); // declcheck: local (protos__code.h only has the decompiler's undefined4/longlong prototype)

static __inline u32 seekFile(SeekableFile *file, s64 offset, s32 mode)
{
    return nn_fs_detail_FileBase_TrySeek(file->base, offset, mode);
}

/* Seeks the file by `offset` from the origin (0 begin, 1 current, 2 end); records the result when deferred, else reports failures. */
s32 fileHandleSeek(SeekableFile *file, s32 offset, s32 origin)
{
    s32 mode;

    if (origin == 0) {
        mode = 0;
    } else if (origin == 1) {
        mode = 1;
    } else if (origin == 2) {
        mode = 2;
    }
    if (file->deferError != 0) {
        file->lastResult = seekFile(file, offset, mode);
        return file->lastResult >= 0;
    }
    u32 result = seekFile(file, offset, mode);

    checkPlatformResult(result, __current_pc());
    return 1;
}

} /* extern "C" */
