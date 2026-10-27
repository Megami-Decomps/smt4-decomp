#include "shard/W8Match1_ScriptPhase.h"
#include "gamedata/GameFlags.h"
#include "sys/RuntimeObjects.h"

extern "C" {
u32 scrRunOpcodesStub(u32 process);
void FUN_0026e630(u32 value);


u32 FUN_002ccb7c(ScriptPhaseWork *work)
{
    u32 result = 0;
    if (scrRunOpcodesStub(work->scriptProcess) == 2) {
        work->scriptState = 0;
        FUN_0026e630(0x28);
        gameFlagSetValue(0x551, 1, 1);
        work->flags &= ~8u;
        u32 flags = work->flags;
        u32 state = 6;
        if (flags & 8) {
            state = 2;
        } else if (flags & 1) {
            state = 3;
        } else if (flags & 4) {
            state = 4;
        } else if (flags & 2) {
            state = 5;
        }
        work->state = state;
        eventQueueAddUnique(0x100017e);
        result = 2;
    }
    return result;
}
}
