/* NON_MATCHING: retail uses a jump table; compiler selects a comparison tree for this switch. */
#include "battle/btlUI.h"

// Select the alternate battle-menu layout for the active and previous command states.
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
    if (menu != NULL) {
        switch ((u32)states->current) {
        case 0xE:
        case 0xF:
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
    }
    return 0;
}
