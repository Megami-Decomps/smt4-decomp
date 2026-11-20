#include "event/SpatialEffectTask.h"
#include "event/EventTaskRequest.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "script/ScriptArgs.h"

extern "C" {
f32 scriptReadStackValueAsFloat(u32 index);
s32 eventIsSkipping(void);

// Create a tracked request for the selected event task at the script's float arguments 1-2 with
// scale argument 3, when task creation is permitted.
u32 scrCommStartSpatialEventTaskAtXY(void)
{
    u8 kind = static_cast<u8>(scrGetArg(0));
    f32 x = scriptReadStackValueAsFloat(1);
    f32 y = scriptReadStackValueAsFloat(2);
    f32 scale = scriptReadStackValueAsFloat(3);
    EventTaskRequest *request = NULL;
    if (eventIsSkipping() == 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\eventCommand.cpp", 1612);
        request = static_cast<EventTaskRequest *>(
            asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventTaskRequest), 1));
        request->task = spatialEffectTaskCreate(kind, &request->active, x, y, 0.0f, scale, 0, 1);
    }
    scrSetResult(reinterpret_cast<s32>(request));
    return 1;
}
}
