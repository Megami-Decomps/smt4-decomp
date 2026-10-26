/* NON_MATCHING: corrected completion values and u64 create-file size; retail retains separate completion exits and tests sign bits with ands, whereas the build merges exits. */
#include "sys/ProcessResult.h"
#include "common.h"
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
s32 FUN_002bb5a4(SaveStream *stream, u8 *buffer, s32 mode);

static s32 saveStreamOpen(SaveStream *stream, u8 *buffer, s32 mode)
{
    stream->unk0C = 0;
    stream->unk10 = 0;
    stream->unk04 = 0;
    stream->unk08 = 0;
    return FUN_002bb5a4(stream, buffer, mode);
}

/* Create the record `id` with `size` bytes and open the owner's stream on it; returns an nn::Result. */
s32 FUN_002e1380(SaveStreamOwner *owner, u32 id, u32 size)
{
    u8 buffer[496];
    s32 result;

    if (pathBuildWide(id, buffer, 2) == NULL) {
        result = 0xE0E046BC;
        FUN_002c3510(result);
        return result;
    }
    FUN_002ad888();
    result = FUN_002ad80c(reinterpret_cast<const u16 *>(buffer), size);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_002c3510(result);
        return result;
    }
    result = saveStreamOpen(&owner->stream, buffer, 2);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_002c3510(result);
        return result;
    }
    FUN_002c3510(0);
    return 0;
}

} /* extern "C" */
