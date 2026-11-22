/* NON_MATCHING: 113 lines; retail loads the 0 result into r0 before the table dispatch (its out-of-range and break paths return it, the NULL test copies the menu to r1). A result variable that is set to 0 and returned unchanged (with the cases returning 1) is IDENTICAL, but such a dead local is steering. */

#include "battle/btlUI.h"

/* Returns whether the battle menu uses its alternate layout for the active (and, in state 0x27, the previous) command state. */
extern "C" u32 FUN_0035fa18(const BtlUiObjCA *menu)
{
    // Keep the byte-aligned shared UI object's size and alignment unchanged.
    struct CommandStateView {
        u8 prefix[0x387C];
        s32 current;
        s32 previous;
    };
    typedef char CommandStateOffsets[
        offsetof(CommandStateView, current) == 0x387C &&
        offsetof(CommandStateView, previous) == 0x3880 ? 1 : -1];
    const CommandStateView *states = (const CommandStateView *)menu;
    if (menu == NULL)
        return 0;
    switch ((u32)states->current) {
    case 0x00:
    case 0x01:
    case 0x02:
    case 0x03:
    case 0x04:
    case 0x05:
    case 0x06:
    case 0x07:
    case 0x08:
    case 0x09:
    case 0x0A:
    case 0x0B:
    case 0x0C:
    case 0x0D:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1A:
    case 0x1B:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x29:
    case 0x2B:
    case 0x2C:
    case 0x2D:
        break;
    case 0x0E:
    case 0x0F:
    case 0x10:
    case 0x18:
    case 0x19:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x28:
    case 0x2A:
    case 0x2E:
    case 0x2F:
    case 0x30:
        return 1;
    case 0x27:
        s32 previousState = states->previous;
        if (previousState == 0x1D || previousState == 0x20)
            return 1;
        if (previousState == 0x1E || previousState == 0x19)
            return 1;
        break;
    }
    return 0;
}
