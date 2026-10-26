/* NON_MATCHING: the 49-entry jump table now matches (every command state is a label); retail lays the shared `return 0` out right after the table dispatch and tests the menu through a copied pointer, so the surrounding layout differs. */
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
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 26:
        case 27:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 41:
        case 43:
        case 44:
        case 45:
            break;
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
