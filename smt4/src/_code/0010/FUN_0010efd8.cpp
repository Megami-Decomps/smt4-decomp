#include "common.h"

struct MessageWindow {
    /* 0x000 */ u32 unk00;
    /* 0x004 */ s32 owner;
    /* 0x008 */ u8 unk08[0xA2C];
    /* 0xA34 */ u8 state;
};
struct MessageMainState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MessageWindow *window;
};
struct Unk49381c {
    /* 0x00 */ u8 unk00[0x0D];
    /* 0x0D */ u8 busy;
};

extern "C" {

extern MessageMainState g_messageMain;
extern Unk49381c DAT_0049381c;

s32 FUN_002c1658(s32 id, s32 mode);
s32 FUN_002c15fc(s32 id);

/* Reports whether the given owner is still busy: any of the checked activities runs, or the first
 * message window belongs to it and is still waiting. */
s32 FUN_0010efd8(s32 owner)
{
    MessageWindow *window;

    if (FUN_002c1658(0, 1) != 0 || FUN_002c1658(9, 2) != 0 || FUN_002c15fc(6) != 0 ||
        FUN_002c1658(10, 2) != 0 || DAT_0049381c.busy != 0) {
        return 1;
    }
    window = g_messageMain.window;
    if (window->owner == owner && window->state == 1 && FUN_002c1658(1, 1) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
