/* NON_MATCHING: the scale literal is loaded before the two integer arguments rather than after them; the remaining instructions match retail. */
#include "event/EventTaskBuffer.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "shard/scrGetArg.h"
#include "shard/scrGetArg.h"

extern "C" {
s32 FUN_002c1d5c(void);
void *FUN_00244e1c(u32 kind, EventTaskBuffer *buffer, u8 mode, u8 enabled,
                   f32 x, f32 y, f32 z, f32 scale);
void scrSetResult(const void *result);

// Allocate state and start an event task when the event subsystem is available.
u32 eventCommand_31BEBC(void)
{
    u8 kind = scrGetArg(0);
    EventTaskBuffer *buffer = NULL;
    if (!FUN_002c1d5c()) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\eventCommand.cpp", 1052);
        buffer = static_cast<EventTaskBuffer *>(asdMemAlloc(0x100, 0x100, 0, 8, 1));
        buffer->task = FUN_00244e1c(kind, buffer, 0, 1, 0.0f, 0.0f, 0.0f, 1.0f);
    }
    scrSetResult(buffer);
    return 1;
}
}
