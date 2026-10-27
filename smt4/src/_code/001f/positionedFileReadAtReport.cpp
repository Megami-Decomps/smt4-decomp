#include "shard/W6_W6Match1_PositionedStream.h"

#include "nn/Result.h"
#include "sys/ProcessResult.h"
extern "C" void FUN_00254824(u32 result, ...);
extern "C" void asdFatalError();
extern "C" void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

static __inline nn::Result fileRecordResult(nn::Result result)
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

// Read at an absolute offset, reporting failures and closing the failed file.
extern "C" nn::Result positionedFileReadAtReport(PositionedFileStream *stream, u32 offset, void *buffer, u32 size)
{
    u64 position = offset;
    nn::Result result = stream->vtable->seek(stream, position);
    FUN_002c3510(result);
    u32 failed = result & 0x80000000;
    if ((s32)failed < 0) {
        FUN_00254824(result, failed);
        positionedFileClose(stream);
        return result;
    }
    u32 completed;
    result = stream->vtable->transfer(stream, &completed, buffer, size);
    if (completed == 0)
        result = 0xd9004586;
    FUN_002c3510(result);
    failed = result & 0x80000000;
    if ((s32)failed < 0) {
        FUN_00254824(result, failed);
        positionedFileClose(stream);
        return result;
    }
    return fileRecordResult(0);
}
