#include "battle/btlHelp.h"
#include "battle/BtlMainAccess.h"

extern "C" {
// Submit a request for the current target unless either battle guard flag is set.
u32 FUN_0027dbc8(u32 request, u8 value)
{
    BtlMainState* state = btlGetMainState();
    u32 flags = state->battleFlags;

    if ((flags & 0x40) != 0) {
        return 0;
    }
    if ((flags & 0x100) != 0) {
        return 0;
    }
    s32 mode = -1;
    u32 target = state->dialog.messageHandle;
    return (u32)FUN_0022a4ac(0, 0, request, target, NULL, value, mode);
}
}
