/* NON_MATCHING: retail keeps the constant 0 in r5 for both the scrGetArg index and the fade channel and clamps with cmpne/movgt; built reloads 0 and branches around the clamp. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "script/ScriptArgs.h"

struct EventCommand {
    u8 unk00[0x10];
    s32 position; // 0x10
    s32 length;   // 0x14
};

extern "C" {

extern EventCommand *g_eventCommand; /* 0x57f554 */
void eventSetUnderMessageFade(u32 channel, s32 steps, s32 mode, f32 value);

// Script command: start the under-message fade (steps clamped to 4 while FUN_00203d74 is true); while running, report completion.
u8 FUN_0031c444(void)
{
    if (scrGetCommandFrame() != 0) {
        return g_eventCommand->position == g_eventCommand->length;
    }
    s32 steps = scrGetArg(0);
    if (FUN_00203d74() != 0 && steps > 4) {
        steps = 4;
    }
    eventSetUnderMessageFade(0, steps, 0, 1.0f);
    return 0;
}

} /* extern "C" */
