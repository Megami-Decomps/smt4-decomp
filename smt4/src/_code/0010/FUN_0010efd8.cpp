#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"

struct Unk49381c {
    /* 0x00 */ u8 unk00[0x0D];
    /* 0x0D */ u8 busy;
};

extern "C" {

extern Unk49381c DAT_0049381c;

s32 inputQueryButtonState(s32 id, s32 mode);
s32 slotIsActive(s32 id);

/* Reports whether the given owner is still busy: any of the checked activities runs, or the first
 * message window belongs to it and is still waiting. */
s32 FUN_0010efd8(u32 owner)
{
    MessageWindow *window;

    if (inputQueryButtonState(0, 1) != 0 || inputQueryButtonState(9, 2) != 0 || slotIsActive(6) != 0 ||
        inputQueryButtonState(10, 2) != 0 || DAT_0049381c.busy != 0) {
        return 1;
    }
    window = g_messageMain.window;
    if (window->box == owner && window->unkA34 == 1 && inputQueryButtonState(1, 1) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
