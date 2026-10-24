/* NON_MATCHING: only the flag-id computation differs (retail: mov r0, r5 / add r0, r0, #2048 / mov r4, r0 with the scene id in r5; ours adds directly into r5 with the id in r4). */
#include "common.h"

extern "C" {

/* The running event command: the job handle it started at 8. */
struct EventCommand {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 job;
};

extern EventCommand g_eventCommand;
s32 scrGetArg(u32 index);
s32 jobIsValid(s32 job);
u32 gameFlagIsSet(s32 flag);
void gameFlagSetValue(s32 flag, s32 value, s32 notify);
void commonBgStopAndResetFade(void);
void FUN_002d6658(s32 arg);
s32 FUN_002ef6b8(s32 id, u32 flagWasSet);

/* The game flag that marks scene `id` as seen. */
static __inline s32 eventFlagForScene(s32 id)
{
    return id + 0x800;
}

/* Script command: starts the event job for arg0 (once, marking flag 0x800 + arg0) and waits until it ends. */
u8 FUN_001ed4e0(void)
{
    s32 id = scrGetArg(0);
    s32 valid;

    if (g_eventCommand.job == 0) {
        FUN_002d6658(0);
        commonBgStopAndResetFade();
        s32 flag = eventFlagForScene(id);
        g_eventCommand.job = FUN_002ef6b8(id, gameFlagIsSet(flag));
        gameFlagSetValue(flag, 1, 1);
    }
    valid = jobIsValid(g_eventCommand.job);
    if (valid == 0) {
        g_eventCommand.job = 0;
    }
    return valid == 0;
}

} /* extern "C" */
