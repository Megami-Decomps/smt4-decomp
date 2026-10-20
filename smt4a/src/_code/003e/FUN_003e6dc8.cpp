/* NON_MATCHING: the early exits share one return path and the constant 1 is kept in r5 across the calls; retail returns r0 as left by the failed test (two exits) and rebuilds the constant 1 before the last store */
#include "common.h"

extern "C" {

typedef struct ScriptProcess {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 unk108;
} ScriptProcess;

typedef struct TalkEvent {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ s32 running;
    /* 0x10 */ u32 owner;
    /* 0x14 */ ScriptProcess *process;
    /* 0x18 */ u32 script;
} TalkEvent;

extern s32 g_btlCamera;

extern s32 FUN_0013def0(s32 arg);
extern u32 btlGetMainState(void);
extern void FUN_003f14a0(void);
extern void btlTalkBustUpDestroy(void);
extern void holderStopJob2(u32 state);
extern void objectJobStop(u32 state);
extern void FUN_00290ba4(u32 state);
extern void FUN_003d9164(void);
extern ScriptProcess *FUN_00275bc8(u32 owner, u32 script);
extern void scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);

/* Starts the talk event's script process once both FUN_0013def0 checks report 3, after shutting
 * down the battle state. Always returns 0. */
s32 FUN_003e6dc8(TalkEvent *event)
{
    if (event->owner != 0 && event->script != 0) {
        if (FUN_0013def0(0) == 3 && FUN_0013def0(1) == 3) {
            u32 state = btlGetMainState();

            FUN_003f14a0();
            btlTalkBustUpDestroy();
            holderStopJob2(state);
            objectJobStop(state);
            FUN_00290ba4(state);
            if (g_btlCamera != 0) {
                FUN_003d9164();
            }
            event->state = 6;
            event->running = 0;
            event->process = FUN_00275bc8(event->owner, event->script);
            event->process->unk108 = 1;
            scrScriptProcessStartEntry(event->process, 0);
            scrScriptProcessStartEntry(event->process, 4);
            event->running = 1;
        }
    }
    return 0;
}

} /* extern "C" */
