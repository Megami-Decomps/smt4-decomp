#include "event/eventCommand.h"

extern "C" {

void FUN_00259324(u32 a, u32 b, s32 c, f32 d);
s32 FUN_002893d8(void);
u32 scrGetArg(s32 index);

extern EventCommandGlobals g_eventCommand;

/* True once the command's two counters agree; while FUN_002893d8 reports zero it kicks
 * FUN_00259324 off with the first two values from scrGetArg and returns false. */
bool eventCommandIsDone(void)
{
    u32 first;
    u32 second;

    if (FUN_002893d8() == 0) {
        first = scrGetArg(0);
        second = scrGetArg(1);
        FUN_00259324(first, second, 1, 1.0f);
        return false;
    }
    return g_eventCommand.command->unk10 == g_eventCommand.command->unk14;
}

} /* extern "C" */
