#include "event/eventCommand.h"
#include "gamedata/GameFlags.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 querySlotHasHandle(void);
void commonBgStopAndResetFade(void);
u32 gameFlagIsSet(s32 flag);
u32 mobiclipProcessCreate(s32 movie, u32 alreadySeen);

s32 jobIsValid(u32 job);

/* Starts the selected movie once, marks it seen, and waits until its process has finished. */
u32 FUN_002a3e10(void)
{
    s32 movie = scrGetArg(0);
    if (g_eventCommand.movieJob == 0) {
        if (querySlotHasHandle()) {
            return 0;
        }
        FUN_00342334(0);
        commonBgStopAndResetFade();
        s32 seenFlag = eventFlagForScene(movie);
        u32 alreadySeen = gameFlagIsSet(seenFlag);
        g_eventCommand.movieJob = mobiclipProcessCreate(movie, alreadySeen);
        gameFlagSetValue(seenFlag, 1, 1);
    }
    s32 valid = jobIsValid(g_eventCommand.movieJob);
    if (valid == 0) {
        g_eventCommand.movieJob = valid;
    }
    if (valid == 0) {
        FUN_00342334(1);
        return 1;
    }
    return 0;
}
}
