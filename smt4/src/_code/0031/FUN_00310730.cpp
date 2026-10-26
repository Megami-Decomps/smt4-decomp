/* NON_MATCHING: retail is messageBannerInitSelection(0, 0) inlined from the same source file, with the mode value (0 for unk7F) kept in its own register r5 and 11 loaded before the text buffer address; a duplicated static inline (inlined, extern or static) folds the mode away and keeps the 0 in one register. */
#include "ui/MessageMain.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
extern MessageGlobals g_messageMain;

u32 scrGetArg(u32 index);
void FUN_002bd954(void *record, u32 value0, u32 value4, const void *source, u16 value38, f32 value20);
void pairSetFirstResetSecond(void *pair, s32 first);
void spriteStartAnimationByIndex(void *widget, s32 mode);

/* Script command: open the banner message window with the text id from argument 0. */
u32 FUN_00310730(void)
{
    u32 textId = scrGetArg(0);
    MessagePanel *panel = g_messageMain.banner;
    u32 slot;

    panel->unk7D = 1;
    panel->unk7C = 1;
    slot = gameGetSlotTable()->money;
    panel->unk6C = slot;
    panel->unk78 = slot;
    panel->unk7F = 0;
    panel->unk80 = 0;
    panel->unkA1 = 0;
    FUN_002bd954(panel->widget754, 14, -1, panel->textBuffer, 11, 1.0f);
    pairSetFirstResetSecond(panel->widget754, 0);
    spriteStartAnimationByIndex(panel->widget754, 6);

    panel = g_messageMain.banner;
    panel->unk81 = 0;
    panel->unk70 = textId;
    panel->unk74 = textId;
    panel->unk80 = 1;
    return 1;
}

} /* extern "C" */
