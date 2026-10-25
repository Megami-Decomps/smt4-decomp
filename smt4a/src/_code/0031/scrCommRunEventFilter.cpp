/* NON_MATCHING: switch recreates native NOPs, but compiler duplicates the frame-zero epilogue and shares the false predicate exit; retail branches back to a padded shared zero exit. */
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {
u32 scrGetCommandFrame();
s32 FUN_002e589c();
void FUN_002e5864(u32);
void eventFilterStart(u32);
s32 eventEffectIsStateThree();

// Start the event filter on frame zero, drive its duration, then wait for completion.
bool scrCommRunEventFilter()
{
    switch (scrGetCommandFrame()) {
    case 0:
        eventFilterStart(scrGetArg(0));
        break;
    default:
        if (FUN_002e589c() != 0) {
            FUN_002e5864(scrGetArg(1));
            return false;
        }
        return eventEffectIsStateThree() != 0;
    }
    return false;
}
}
