#include "ui/MessageMainA.h"
#include "shard/Shard003A.h"
#include "ui/UiSpriteApi.h"

extern "C" {

extern u32 soundApplyValueOrStop(u32 handle, u32 value);

/* Script command: resets the panel to state 4, releasing the object at +0x18C. */
u32 scrCommResetPanel(void)
{
    MessageWindowA *panel = g_messageMain.banner;

    uiSpriteSelectAnim(&panel->sprites[17], 2);
    panel->popupEnabled = 4;
    if (panel->unk018C != 0) {
        soundApplyValueOrStop(panel->unk018C, 0);
        panel->unk018C = 0;
    }
    return 1;
}

} /* extern "C" */
