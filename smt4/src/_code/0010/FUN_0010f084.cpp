#include "ui/MessageMain.h"

struct Unk49381c {
    /* 0x00 */ u8 unk00[0x0D];
    /* 0x0D */ u8 busy;
};

extern "C" {

extern MessageGlobals g_messageMain;
extern Unk49381c DAT_0049381c;

s32 FUN_002c1658(s32 id, s32 mode);

/* Reports whether the given owner is still busy: any of the checked activities runs, or the
 * message window belongs to it and is still waiting. */
s32 FUN_0010f084(u32 owner)
{
    MessageWork *window;

    if (FUN_002c1658(0, 1) != 0 || FUN_002c1658(9, 2) != 0 || FUN_002c1658(6, 2) != 0 ||
        FUN_002c1658(10, 2) != 0 || DAT_0049381c.busy != 0) {
        return 1;
    }
    window = g_messageMain.state;
    if (window->box == owner && window->unkA34 == 1 && FUN_002c1658(1, 1) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
