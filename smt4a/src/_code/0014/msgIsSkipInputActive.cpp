#include "ui/MessageMain.h"

struct InputBlockState {
    /* 0x00 */ u8 unk00[0xd];
    /* 0x0D */ u8 blocked;
};

extern "C" {
extern MessageGlobalsA g_messageMain;
extern InputBlockState DAT_005e2040;
s32 FUN_001517b4(u32 input, u32 mode);

/* Whether a skip or cancel input is active: inputs 0, 9, 6 and 10, the block flag, or input 1 while
 * message box `box` is shown in the state that accepts it. */
u32 msgIsSkipInputActive(u32 box)
{
    if (FUN_001517b4(0, 1) != 0 || FUN_001517b4(9, 2) != 0 || FUN_001517b4(6, 2) != 0 ||
        FUN_001517b4(10, 2) != 0 || DAT_005e2040.blocked) {
        return 1;
    }
    if (g_messageMain.state->box == box && g_messageMain.state->unk19E8 == 1 &&
        FUN_001517b4(1, 1) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
