/* NON_MATCHING: final success result is materialized in r4 before r0, rather than r0 before r4. */
#include "shard/W6_W6Match1_PositionedStream.h"

#include "sys/ProcessResult.h"
extern "C" void asdFatalError();
extern "C" void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

static __inline u32 fileRecordResult(u32 result)
{
    FUN_002c3510(result);
    return result;
}

static __inline void positionedFileClose(PositionedFileStream *stream)
{
    if ((stream->handle & ~1u) != 0) {
        if (stream->handle & 1)
            asdFatalError();
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(stream->handle & ~1u);
        stream->handle = 0;
    }
}

// Read at an absolute offset, closing the file when seeking or reading fails.
extern "C" s32 FUN_002102ec(PositionedFileStream *stream, u32 offset, void *buffer, u32 size)
{
    s32 result = stream->vtable->seek(stream, (u64)offset);
    FUN_002c3510(result);
    if ((s32)(result & 0x80000000) < 0) {
        positionedFileClose(stream);
        return result;
    }
    u32 completed;
    result = stream->vtable->transfer(stream, &completed, buffer, size);
    if (completed == 0)
        result = (s32)0xd9004586;
    FUN_002c3510(result);
    if ((s32)(result & 0x80000000) < 0) {
        positionedFileClose(stream);
        return result;
    }
    return fileRecordResult(0);
}
