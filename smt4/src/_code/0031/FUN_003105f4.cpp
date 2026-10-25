#include "shard/W8Match1_ScriptPhase.h"
extern "C" {
void scrScriptProcessStartEntry(u32, s32);
void buttonHelpSetPreset(s32);
s32 scrRunOpcodesStub(u32);

// Runs the phase's script entry and advances the owner when it finishes.
u32 FUN_003105f4(ScriptPhaseWork* work)
{
    u32 result = 0;
    switch (work->scriptState) {
    case 0:
        scrScriptProcessStartEntry(work->scriptProcess, 0x1B);
        buttonHelpSetPreset(0x3C);
        ++work->scriptState;
        break;
    case 1:
        if (scrRunOpcodesStub(work->scriptProcess) == 2) {
            work->scriptState = 0;
            work->state = 6;
            result = 2;
        }
        break;
    }
    return result;
}
}
