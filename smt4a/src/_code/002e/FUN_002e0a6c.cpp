/* NON_MATCHING: final success result is materialized in r4 before r0, rather than r0 before r4. */
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" void FUN_0013ebd8(u32 result);
extern "C" void sysFatalBreak();
extern "C" void vcallSlot12IfValid(u32 handle);

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

// Read at an absolute offset, closing the file when seeking or reading fails.
extern "C" s32 FUN_002e0a6c(PositionedFileStream *stream, u32 offset, void *buffer, u32 size)
{
    s32 result = stream->vtable->seek(stream, (u64)offset);
    FUN_0013ebd8(result);
    if ((s32)(result & 0x80000000) < 0) {
        positionedFileClose(stream);
        return result;
    }
    u32 completed;
    result = stream->vtable->transfer(stream, &completed, buffer, size);
    if (completed == 0)
        result = (s32)0xd9004586;
    FUN_0013ebd8(result);
    if ((s32)(result & 0x80000000) < 0) {
        positionedFileClose(stream);
        return result;
    }
    return fileRecordResult(0);
}
