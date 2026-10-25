/* NON_MATCHING: the 0.0f z literal is loaded after the two integer-argument moves in retail (same scheduling miss as eventCommand_31BEBC). */
#include "event/EventTaskRequest.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/scrGetArg.h"
#include "shard/scrGetArg.h"

extern "C" {
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 kind, u32 bytes, u32 flags);
void *FUN_0031ba34(u32 kind, EventTaskRequest *request, u8 mode, u8 enabled,
                  f32 x, f32 y, f32 z, f32 scale);
f32 scriptReadStackValueAsFloat(u32 index);
s32 FUN_00162ea4(void);
void scrSetResult(EventTaskRequest *request);

// Create a tracked request for the selected event task at the script's float arguments 1-2 with
// scale argument 3, when task creation is permitted.
u32 FUN_003c3be8(void)
{
    u8 kind = static_cast<u8>(scrGetArg(0));
    f32 x = scriptReadStackValueAsFloat(1);
    f32 y = scriptReadStackValueAsFloat(2);
    f32 scale = scriptReadStackValueAsFloat(3);
    EventTaskRequest *request = NULL;
    if (FUN_00162ea4() == 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\eventCommand.cpp", 1612);
        request = static_cast<EventTaskRequest *>(
            asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventTaskRequest), 1));
        request->task = FUN_0031ba34(kind, request, 0, 1, x, y, 0.0f, scale);
    }
    scrSetResult(request);
    return 1;
}
}
