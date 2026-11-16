#include "camp/CampScript.h"

extern "C" {
void campResetScreen(void);
void scrScriptProcessStartEntry(ScriptProcess *script, u32 entry);
void partyPanelRefreshFromSlotTable(void);
s32 scrRunOpcodesStub(ScriptProcess *script);

/* Runs the camp script entry and restores the camp screen when it finishes. */
u32 campRunScriptEntry(CampScriptState *state)
{
    u32 result = 0;
    switch (state->scriptState) {
    case 0:
        scrScriptProcessStartEntry(state->script, 0x10);
        ++state->scriptState;
        break;
    case 1:
        if (scrRunOpcodesStub(state->script) == 2) {
            state->unk14C = 0;
            state->unk144 = 1;
            state->scriptState = 0;
            partyPanelRefreshFromSlotTable();
            campResetScreen();
            result = 3;
        }
        break;
    }
    return result;
}
}
