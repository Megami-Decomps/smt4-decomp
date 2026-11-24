#include "event/eventCommand.h"
#include "gamedata/GameFlags.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 jobIsValid(s32 job);
u32 gameFlagIsSet(s32 flag);

void commonBgStopAndResetFade(void);
void FUN_002d6658(s32 arg);
s32 FUN_002ef6b8(s32 id, u32 flagWasSet);

/* Script command: starts the event job for arg0 (once, marking flag 0x800 + arg0) and waits until it ends. */
u8 FUN_001ed4e0(void)
{
    s32 id = scrGetArg(0);
    s32 valid;

    if (g_eventCommand.movieJob == 0) {
        FUN_002d6658(0);
        commonBgStopAndResetFade();
        s32 flag = eventFlagForScene(id);
        g_eventCommand.movieJob = FUN_002ef6b8(id, gameFlagIsSet(flag));
        gameFlagSetValue(flag, 1, 1);
    }
    valid = jobIsValid(g_eventCommand.movieJob);
    if (valid == 0) {
        g_eventCommand.movieJob = 0;
    }
    return valid == 0;
}

} /* extern "C" */
