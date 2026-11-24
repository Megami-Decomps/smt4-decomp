/* NON_MATCHING: retail materialises archivePathDeviceCreateFile's zero high size word in r5 before fileSystemRequireReady (one more saved register, a 496-byte frame) and later clears the stream with a fresh zero in r0, passing the stream address through r3; the build uses `mov r3, #0` at the call and pads the frame to 500. Same in Apocalypse's FUN_00359608. */
#include "sys/ProcessResult.h"
#include "common.h"
#include "nn/Result.h"
#include "nn/fs/ArchiveCreateFile.h"

extern "C" {

typedef struct SaveStream {
    /* 0x00 */ u32 handle;
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
u32 fileSystemRequireReady(void);

static s32 saveStreamOpen(SaveStream *stream, u8 *buffer, s32 mode)
{
    stream->unk0C = 0;
    stream->unk10 = 0;
    stream->unk04 = 0;
    stream->unk08 = 0;
    return archivePathDeviceOpen(&stream->handle, reinterpret_cast<const u16 *>(buffer), mode);
}

/* Records `result` as the process result and hands it back. */
static __inline nn::Result fileRecordResult(nn::Result result)
{
    processResultSetValue(result);
    return result;
}

/* Create the record `id` with `size` bytes and open the owner's stream on it; returns an nn::Result. */
nn::Result FUN_002e1380(SaveStreamOwner *owner, u32 id, u32 size)
{
    u8 buffer[496];
    nn::Result result;
    if (pathBuildWide(id, buffer, 2) == NULL) {
        result = 0xE0E046BC;
        processResultSetValue(result);
        return result;
    }
    fileSystemRequireReady();
    result = archivePathDeviceCreateFile(reinterpret_cast<const u16 *>(buffer), size);
    if ((s32)(result & 0x80000000) < 0) {
        processResultSetValue(result);
        return result;
    }
    result = saveStreamOpen(&owner->stream, buffer, 2);
    if ((s32)(result & 0x80000000) < 0) {
        processResultSetValue(result);
        return result;
    }
    return fileRecordResult(0);
}

} /* extern "C" */
