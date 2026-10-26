/* NON_MATCHING: zero constants and saved arguments use different registers, changing text-buffer setup and return scheduling. */
#include "ui/MessageMain.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
extern MessageGlobals g_messageMain;
u32 scrGetArg(u32 index);
int pairSetFirstResetSecond(void *pair, s32 value);
int FUN_002bd954(void *widget, s32 kind, u32 selection, void *text, s32 capacity, f32 scale);
int spriteStartAnimationByIndex(void *widget, s32 mode);

/* Begin a script message using the current game slot and requested message id. */
u32 FUN_00321b9c(void)
{
    u32 messageId = scrGetArg(0);
    MessagePanel *panel = g_messageMain.banner;
    g_messageMain.banner->unk7D = 1;
    panel->unk7C = 1;
    u32 slot = gameGetSlotTable()->money;
    panel->unk6C = slot;
    panel->unk78 = slot;
    panel->unk7F = 0;
    panel->unk80 = 0;
    panel->unkA1 = 0;
    FUN_002bd954(panel->widget754, 14, (u32)-1, panel->textBuffer, 11, 1.0f);
    pairSetFirstResetSecond(panel->widget754, 0);
    spriteStartAnimationByIndex(panel->widget754, 6);
    panel = g_messageMain.banner;
    g_messageMain.banner->unk81 = 0;
    panel->unk70 = messageId;
    panel->unk74 = messageId;
    panel->unk80 = 1;
    return 1;
}
}
