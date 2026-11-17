#include "ui/MessageMainA.h"

struct InputBlockState {
    /* 0x00 */ u8 unk00[0xd];
    /* 0x0D */ u8 blocked;
};

extern "C" {
extern InputBlockState DAT_005e2040;
s32 padQueryLogicalKey(u32 input, u32 mode);

/* Whether a skip or cancel input is active: inputs 0, 9, 6 and 10, the block flag, or input 1 while
 * message box `box` is shown in the state that accepts it. */
u32 msgIsSkipInputActive(u32 box)
{
    if (padQueryLogicalKey(0, 1) != 0 || padQueryLogicalKey(9, 2) != 0 || padQueryLogicalKey(6, 2) != 0 ||
        padQueryLogicalKey(10, 2) != 0 || DAT_005e2040.blocked) {
        return 1;
    }
    if (g_messageMain.window->box == box && g_messageMain.window->unk19E8 == 1 &&
        padQueryLogicalKey(1, 1) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
