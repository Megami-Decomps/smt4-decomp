#include "ui/MessageMain.h"
#include "code/Code0029_Smt4.h"

extern "C" {
u32 FUN_002d8c28(void);
const u32 *gameGetSlotTable(void);
void uiSpriteStateInitFromSource(void *widget, u32 kind, s32 id, void *context, u32 style, f32 scale);
void pairSetFirstResetSecond(void *widget, s32 value);
void spriteStartAnimationByIndex(void *widget, s32 animation);

/* Initializes the banner's selected value and default widget settings. */
u32 messageBannerInitSelection(u8 mode, s32 useCurrentValue)
{
    MessageWindow *panel = g_messageMain.banner;
    panel->wideValue = 1;
    panel->counterState = 1;
    if (useCurrentValue == 0) {
        u32 value = *gameGetSlotTable();
        panel->counterValue = value;
        panel->counterBase = value;
    } else {
        u32 value = FUN_002d8c28();
        panel->counterValue = value;
        panel->counterBase = value;
    }
    panel->unk080 = 0;
    panel->alternateAnimation = mode;
    panel->unk0A1 = 0;
    uiSpriteStateInitFromSource(&panel->sprites[12], 14, -1, &panel->parameters, 11, 1.0f);
    pairSetFirstResetSecond(&panel->sprites[12], 0);
    spriteStartAnimationByIndex(&panel->sprites[12], 6);
    return 1;
}
}
