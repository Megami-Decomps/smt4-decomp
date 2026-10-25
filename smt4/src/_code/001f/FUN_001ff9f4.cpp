/* NON_MATCHING: failure-report argument scheduling and final success-result materialization differ. */
#include "shard/W6_W6Match1_PositionedStream.h"

#include "sys/ProcessResult.h"
extern "C" void FUN_00254824(u32 result);
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

// Read at an absolute offset, reporting failures and closing the failed file.
extern "C" s32 FUN_001ff9f4(PositionedFileStream *stream, u32 offset, void *buffer, u32 size)
{
    s32 result = stream->vtable->seek(stream, (u64)offset);
    FUN_002c3510(result);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_00254824(result);
        positionedFileClose(stream);
        return result;
    }
    u32 completed;
    result = stream->vtable->transfer(stream, &completed, buffer, size);
    if (completed == 0)
        result = (s32)0xd9004586;
    FUN_002c3510(result);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_00254824(result);
        positionedFileClose(stream);
        return result;
    }
    return fileRecordResult(0);
}
