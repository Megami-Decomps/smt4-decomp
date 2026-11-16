/* NON_MATCHING: nn::Result and the u64 size taken before FUN_002ad888 restore the frame; retail keeps the create-file failure exit inline (ands r1; bpl) where armcc merges it with the open failure exit, and returns the final 0 through r4. */
#include "sys/ProcessResult.h"
#include "common.h"
#include "nn/Result.h"
#include "nn/fs/ArchiveCreateFile.h"

extern "C" {

typedef struct SaveStream {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
} SaveStream;

typedef struct SaveStreamOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ SaveStream stream;
} SaveStreamOwner;

void *pathBuildWide(u32 id, u8 *buffer, s32 flags);
u32 FUN_002ad888(void);
s32 archivePathDeviceOpen(SaveStream *stream, u8 *buffer, s32 mode);

static s32 saveStreamOpen(SaveStream *stream, u8 *buffer, s32 mode)
{
    stream->unk0C = 0;
    stream->unk10 = 0;
    stream->unk04 = 0;
    stream->unk08 = 0;
    return archivePathDeviceOpen(stream, buffer, mode);
}

/* Create the record `id` with `size` bytes and open the owner's stream on it; returns an nn::Result. */
nn::Result FUN_002e1380(SaveStreamOwner *owner, u32 id, u32 size)
{
    u8 buffer[496];
    nn::Result result;
    if (pathBuildWide(id, buffer, 2) == NULL) {
        result = 0xE0E046BC;
        FUN_002c3510(result);
        return result;
    }
    u64 fileSize = size;
    FUN_002ad888();
    result = FUN_002ad80c(reinterpret_cast<const u16 *>(buffer), fileSize);
    if (result & 0x80000000) {
        FUN_002c3510(result);
        return result;
    }
    result = saveStreamOpen(&owner->stream, buffer, 2);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_002c3510(result);
        return result;
    }
    FUN_002c3510(nn::Result(0));
    return nn::Result(0);
}

} /* extern "C" */
