#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "AsdSDK/Source/Gfx/Effect/effGeometry.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: fades (alpha 0xff when argument 0 is set, else 0, over 20 frames) every active
 * action record with status bits 0x1/0x80/0x400 that is not held by status 0x10 with state 2. */
u32 FUN_00312730(void)
{
    s32 show = scrGetArg(0);
    s32 index = 0;
    BtlMainState *state = btlGetMainState();

    for (; index < 109; index++) {
        BtlActionRecord *action = &state->actions[index];
        u32 flags = action->status;
        if ((flags & 0x1) && (flags & 0x80) && (flags & 0x400) &&
            (!(flags & 0x10) || !(action->stateFlags & 2))) {
            if (!show) {
                FUN_002451c4(0, 0, reinterpret_cast<u32>(action), 0, 20, 0);
            } else {
                FUN_002451c4(0, 0, reinterpret_cast<u32>(action), 0xff, 20, 0);
            }
        }
    }
    return 1;
}

} /* extern "C" */
