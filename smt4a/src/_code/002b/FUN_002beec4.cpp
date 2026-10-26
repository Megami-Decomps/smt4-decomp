/* NON_MATCHING: failure-report argument scheduling and final success-result materialization differ. */
#include "shard/W6_W6Match1_PositionedStream.h"

#include "sys/ProcessResult.h"
#include "util/vcallSlot12IfValid.h"
extern "C" void FUN_0032ca54(u32 result);
extern "C" void sysFatalBreak();

static __inline u32 fileRecordResult(u32 result)
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
extern "C" s32 FUN_002beec4(PositionedFileStream *stream, u32 offset, void *buffer, u32 size)
{
    s32 result = stream->vtable->seek(stream, (u64)offset);
    FUN_0013ebd8(result);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_0032ca54(result);
        positionedFileClose(stream);
        return result;
    }
    u32 completed;
    result = stream->vtable->transfer(stream, &completed, buffer, size);
    if (completed == 0)
        result = (s32)0xd9004586;
    FUN_0013ebd8(result);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_0032ca54(result);
        positionedFileClose(stream);
        return result;
    }
    return fileRecordResult(0);
}
