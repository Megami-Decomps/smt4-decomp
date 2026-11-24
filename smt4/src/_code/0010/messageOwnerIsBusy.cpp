#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"
#include "ui/MessageControl.h"

extern "C" {

s32 inputQueryButtonState(s32 id, s32 mode);

/* Reports whether the given owner is still busy: any of the checked activities runs, or the
 * message window belongs to it and is still waiting. */
s32 messageOwnerIsBusy(u32 owner)
{
    MessageWindow *window;

    if (inputQueryButtonState(0, 1) != 0 || inputQueryButtonState(9, 2) != 0 || inputQueryButtonState(6, 2) != 0 ||
        inputQueryButtonState(10, 2) != 0 || g_messageControl.suppressed != 0) {
        return 1;
    }
    window = g_messageMain.window;
    if (window->box == owner && window->unkA34 == 1 && inputQueryButtonState(1, 1) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
