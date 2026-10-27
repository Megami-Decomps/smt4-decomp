#include "shard/W6_W6Match1_PositionedStream.h"

#include "nn/Result.h"
#include "sys/ProcessResult.h"
#include "sys/RuntimeObjects.h"
extern "C" void FUN_0032ca54(u32 result, ...);
extern "C" void sysFatalBreak();

static __inline nn::Result fileRecordResult(nn::Result result)
{
    FUN_0013ebd8(result);
    return result;
}

static __inline void positionedFileClose(PositionedFileStream *stream)
{
    if ((stream->handle & ~1u) != 0) {
        if (stream->handle & 1)
            sysFatalBreak();
        vcallSlot12IfValid(stream->handle & ~1u);
        stream->handle = 0;
    }
}

// Read at an absolute offset, reporting failures and closing the failed file.
extern "C" nn::Result positionedFileReadAtReport(PositionedFileStream *stream, u32 offset, void *buffer, u32 size)
{
    u64 position = offset;
    nn::Result result = stream->vtable->seek(stream, position);
    FUN_0013ebd8(result);
    u32 failed = result & 0x80000000;
    if ((s32)failed < 0) {
        FUN_0032ca54(result, failed);
        positionedFileClose(stream);
        return result;
    }
    u32 completed;
    result = stream->vtable->transfer(stream, &completed, buffer, size);
    if (completed == 0)
        result = 0xd9004586;
    FUN_0013ebd8(result);
    failed = result & 0x80000000;
    if ((s32)failed < 0) {
        FUN_0032ca54(result, failed);
        positionedFileClose(stream);
        return result;
    }
    return fileRecordResult(0);
}
