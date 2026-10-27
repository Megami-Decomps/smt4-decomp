#include "sys/FilePaths.h"
#include "sys/ProcessResult.h"
#include "common.h"
#include "nn/Result.h"

extern "C" {

typedef struct ArchiveStream {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 position;
    /* 0x0C */ u32 sizeLow;
    /* 0x10 */ u32 sizeHigh;
} ArchiveStream;

typedef struct ArchiveOpenWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ArchiveStream stream;
} ArchiveOpenWork;

nn::Result FUN_001883b0(u32 *handle, const s16 *convertedPath, u32 mode);

static nn::Result archiveOpen(ArchiveStream *stream, const s16 *convertedPath, u32 mode)
{
    stream->sizeLow = 0;
    stream->sizeHigh = 0;
    stream->state = 0;
    stream->position = 0;
    return FUN_001883b0(&stream->handle, convertedPath, mode);
}

/* Convert a path, reset archive bookkeeping and open it in access mode 2 when `mode` is 1, else 1; returns an nn::Result. */
nn::Result archiveStreamOpenConverted(ArchiveOpenWork *work, const char *path, s32 mode)
{
    s16 convertedPath[250];
    nn::Result result;

    if (pathBuildWide(path, convertedPath, 1) == 0) {
        result = 0xE0E046BC;
        FUN_0013ebd8(result);
        return result;
    }
    if (mode == 1) {
        result = archiveOpen(&work->stream, convertedPath, 2);
    } else {
        result = archiveOpen(&work->stream, convertedPath, 1);
    }
    FUN_0013ebd8(result);
    return result;
}

} /* extern "C" */
