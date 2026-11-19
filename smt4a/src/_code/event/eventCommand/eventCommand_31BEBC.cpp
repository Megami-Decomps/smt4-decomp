#include "event/SpatialEffectTask.h"
#include "event/EventTaskRequest.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 FUN_00162ea4(void);

// Create a tracked request for the selected event task when task creation is permitted.
u32 eventCommand_31BEBC(void)
{
    u8 kind = static_cast<u8>(scrGetArg(0));
    EventTaskRequest *request = NULL;
    if (FUN_00162ea4() == 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\eventCommand.cpp", 1592);
        request = static_cast<EventTaskRequest *>(
            asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventTaskRequest), 1));
        request->task = FUN_0031ba34(kind, &request->active, 0.0f, 0.0f, 0.0f, 1.0f, 0, 1);
    }
    scrSetResult(reinterpret_cast<s32>(request));
    return 1;
}
}
