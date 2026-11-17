/* NON_MATCHING: zero constants and saved arguments use different registers, changing text-buffer setup and return scheduling. */
#include "ui/MessageMain.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
u32 scrGetArg(u32 index);
int pairSetFirstResetSecond(void *pair, s32 value);
int uiSpriteStateInitFromSource(void *widget, s32 kind, u32 selection, void *text, s32 capacity, f32 scale);
int spriteStartAnimationByIndex(void *widget, s32 mode);

/* Begin a script message using the current game slot and requested message id. */
u32 FUN_00321b9c(void)
{
    u32 messageId = scrGetArg(0);
    MessageWindow *panel = g_messageMain.banner;
    g_messageMain.banner->wideValue = 1;
    panel->counterState = 1;
    u32 slot = gameGetSlotTable()->money;
    panel->counterValue = slot;
    panel->counterBase = slot;
    panel->alternateAnimation = 0;
    panel->unk080 = 0;
    panel->unk0A1 = 0;
    uiSpriteStateInitFromSource(&panel->sprites[12], 14, (u32)-1, &panel->parameters, 11, 1.0f);
    pairSetFirstResetSecond(&panel->sprites[12], 0);
    spriteStartAnimationByIndex(&panel->sprites[12], 6);
    panel = g_messageMain.banner;
    g_messageMain.banner->unk081 = 0;
    panel->counterDelta = messageId;
    panel->counterElapsed = messageId;
    panel->unk080 = 1;
    return 1;
}
}
