/* NON_MATCHING: the scale literal is loaded before the two final integer-argument moves. */
#include "event/EventTaskRequest.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/scrGetArg.h"

extern "C" {
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 kind, u32 bytes, u32 flags);
void *FUN_0031ba34(u32 kind, EventTaskRequest *request, u8 mode, u8 enabled,
                  f32 x, f32 y, f32 z, f32 scale);
s32 FUN_00162ea4(void);
void scrSetResult(EventTaskRequest *request);

// Create a tracked request for the selected event task when task creation is permitted.
u32 eventCommand_31BEBC(void)
{
    u8 kind = static_cast<u8>(scrGetArg(0));
    EventTaskRequest *request = NULL;
    if (FUN_00162ea4() == 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\eventCommand.cpp", 1592);
        request = static_cast<EventTaskRequest *>(
            asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventTaskRequest), 1));
        request->task = FUN_0031ba34(kind, request, 0, 1, 0.0f, 0.0f, 0.0f, 1.0f);
    }
    scrSetResult(request);
    return 1;
}
}
