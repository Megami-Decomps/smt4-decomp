/* NON_MATCHING: retail loads r1=10 before the color select and lays out its literal pool as [g_eventCommand, 1.0f] one word closer; built schedules r1 last */
#include "common.h"
#include "script/ScriptArgs.h"
#include "util/ScrGetCommandFrame.h"
#include "util/ScrGetCommandFrame.h"

extern "C" {

typedef struct EventCommandState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 current;
    /* 0x14 */ s32 target;
} EventCommandState;

extern EventCommandState *g_eventCommand;
void eventSetUnderMessageFade(u32 color, s32 frames, s32 a, f32 scale);

/* Script command: on the first frame starts a 10-frame fade (to 0xff or 0xffffffff by argument 0); finishes once the state's two counters match. */
u8 FUN_001ed55c(void)
{
    if (scrGetCommandFrame() == 0) {
        u32 color = scrGetArg(0) == 0 ? 0xff : 0xffffffff;

        eventSetUnderMessageFade(color, 10, 0, 1.0f);
        return 0;
    }
    return g_eventCommand->current == g_eventCommand->target;
}

} /* extern "C" */
