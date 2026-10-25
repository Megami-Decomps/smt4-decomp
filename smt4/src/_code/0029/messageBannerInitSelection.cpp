#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;
u32 FUN_002d8c28(void);
const u32 *gameGetSlotTable(void);
void FUN_002bd954(void *widget, u32 kind, s32 id, void *context, u32 style, f32 scale);
void pairSetFirstResetSecond(void *widget, s32 value);
void spriteStartAnimationByIndex(void *widget, s32 animation);

/* Initializes the banner's selected value and default widget settings. */
u32 messageBannerInitSelection(u8 mode, s32 useCurrentValue)
{
    MessagePanel *panel = g_messageMain.banner;
    panel->unk7D = 1;
    panel->unk7C = 1;
    if (useCurrentValue == 0) {
        u32 value = *gameGetSlotTable();
        panel->unk6C = value;
        panel->unk78 = value;
    } else {
        u32 value = FUN_002d8c28();
        panel->unk6C = value;
        panel->unk78 = value;
    }
    panel->unk80 = 0;
    panel->unk7F = mode;
    panel->unkA1 = 0;
    FUN_002bd954(panel->widget754, 14, -1, panel->textBuffer, 11, 1.0f);
    pairSetFirstResetSecond(panel->widget754, 0);
    spriteStartAnimationByIndex(panel->widget754, 6);
    return 1;
}
}
