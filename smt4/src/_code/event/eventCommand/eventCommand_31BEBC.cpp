#include "event/SpatialEffectTask.h"
#include "event/EventTaskBuffer.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 FUN_002c1d5c(void);

// Allocate state and start an event task when the event subsystem is available.
u32 eventCommand_31BEBC(void)
{
    u8 kind = scrGetArg(0);
    EventTaskBuffer *buffer = NULL;
    if (!FUN_002c1d5c()) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\eventCommand.cpp", 1052);
        buffer = static_cast<EventTaskBuffer *>(asdMemAlloc(0x100, 0x100, 0, 8, 1));
        buffer->task = FUN_00244e1c(kind, &buffer->state, 0.0f, 0.0f, 0.0f, 1.0f, 0, 1);
    }
    scrSetResult(reinterpret_cast<s32>(buffer));
    return 1;
}
}
