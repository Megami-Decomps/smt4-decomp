#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 FUN_002e589c(void);
void FUN_002e5864(u32 duration);
void eventFilterStart(u32 filter);
s32 eventEffectIsStateThree(void);

/* Script command: starts the event filter (argument 0) on frame zero. Later frames hand the
 * duration (argument 1) over when FUN_002e589c asks for it, otherwise report whether the filter
 * effect has reached state three. */
bool scrCommRunEventFilter(void)
{
    switch (scrGetCommandFrame()) {
    case 0:
        eventFilterStart(scrGetArg(0));
        break;
    default:
        if (FUN_002e589c() == 0) {
            return eventEffectIsStateThree() != 0;
        }
        FUN_002e5864(scrGetArg(1));
        break;
    }
    return false;
}
}
