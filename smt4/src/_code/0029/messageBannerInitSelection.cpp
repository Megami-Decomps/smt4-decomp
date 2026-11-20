#include "ui/MessageBannerSelection.h"
#include "code/Code0029_Smt4.h"

extern "C" {

/* Initializes the banner's selected value and default widget settings (the banner script commands inline the
 * same body, messageBannerInitSelectionInline). */
u32 messageBannerInitSelection(u8 mode, s32 useCurrentValue)
{
    MessageWindow *panel = g_messageMain.banner;
    panel->wideValue = 1;
    panel->counterState = 1;
    if (useCurrentValue == 0) {
        u32 value = gameGetSlotTable()->money;
        panel->counterValue = value;
        panel->counterBase = value;
    } else {
        u32 value = gameDataBlocks2GetWord4();
        panel->counterValue = value;
        panel->counterBase = value;
    }
    panel->alternateAnimation = mode;
    panel->unk080 = 0;
    panel->unk0A1 = 0;
    uiSpriteStateInitFromSource(&panel->sprites[12], 14, -1, &panel->parameters, 11, 1.0f);
    pairSetFirstResetSecond(&panel->sprites[12], 0);
    spriteStartAnimationByIndex(&panel->sprites[12], 6);
    return 1;
}
}
