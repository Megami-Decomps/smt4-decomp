/* NON_MATCHING: the suppression tests use different scratch registers; retail saves r7 and r8. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
u32 FUN_004c9160(u32 kind, u32 subject, s32 unused, u32 parameter);

/* Dispatches the help action selected by mode unless the battle state intersects a suppression mask. */
u32 FUN_004c8800(u32 subject, s32 mode, u32 parameter)
{
    BtlMainStateA *state = btlGetMainState();
    if ((state->stateFlags64.bits & g_btlHelp.blockedStates) ||
        (state->stateFlags64.bits & g_btlHelp.blockedTransitions)) {
        return 0;
    }
    u32 kind = 0;
    if (mode == 1) {
        kind = 0x1A;
    } else if (mode == 2) {
        kind = 0x1B;
    } else if (mode == 3) {
        kind = 0x36;
    }
    return FUN_004c9160(kind, subject, 0, parameter);
}

} /* extern "C" */
