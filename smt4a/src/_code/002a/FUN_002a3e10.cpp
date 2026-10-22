/* NON_MATCHING: The movie/seen-flag registers are reversed, and completion clears the job in an outlined branch instead of a predicated store. */
#include "event/eventCommand.h"

namespace {
struct MovieEventGlobals {
    /* 0x00 */ EventCommandGlobals command;
    /* 0x08 */ u32 movieJob;
};
}
extern "C" {
extern MovieEventGlobals g_eventCommand;
s32 scrGetArg(u32 index);
s32 querySlotHasHandle(void);
void FUN_00342334(s32 enabled);
void commonBgStopAndResetFade(void);
u32 gameFlagIsSet(s32 flag);
u32 mobiclipProcessCreate(s32 movie, u32 alreadySeen);
void gameFlagSetValue(s32 flag, s32 value, s32 notify);
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
        s32 seenFlag = movie + 0x800;
        u32 alreadySeen = gameFlagIsSet(seenFlag);
        g_eventCommand.movieJob = mobiclipProcessCreate(movie, alreadySeen);
        gameFlagSetValue(seenFlag, 1, 1);
    }
    if (!jobIsValid(g_eventCommand.movieJob)) {
        g_eventCommand.movieJob = 0;
        FUN_00342334(1);
        return 1;
    }
    return 0;
}
}
