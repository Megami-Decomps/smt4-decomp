/* NON_MATCHING: retail is messageBannerInitSelection(0, 0) inlined from the same source file, with the mode value (0 for unk7F) kept in its own register r5 and 11 loaded before the text buffer address; a duplicated static inline (inlined, extern or static) folds the mode away and keeps the 0 in one register. */
#include "ui/MessageMain.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {

u32 scrGetArg(u32 index);
void uiSpriteStateInitFromSource(void *record, u32 value0, u32 value4, const void *source, u16 value38, f32 value20);
void pairSetFirstResetSecond(void *pair, s32 first);
void spriteStartAnimationByIndex(void *widget, s32 mode);

/* Script command: open the banner message window with the text id from argument 0. */
u32 FUN_00310730(void)
{
    u32 textId = scrGetArg(0);
    MessageWindow *panel = g_messageMain.banner;
    u32 slot;

    panel->wideValue = 1;
    panel->counterState = 1;
    slot = gameGetSlotTable()->money;
    panel->counterValue = slot;
    panel->counterBase = slot;
    panel->alternateAnimation = 0;
    panel->unk080 = 0;
    panel->unk0A1 = 0;
    uiSpriteStateInitFromSource(&panel->sprites[12], 14, -1, &panel->parameters, 11, 1.0f);
    pairSetFirstResetSecond(&panel->sprites[12], 0);
    spriteStartAnimationByIndex(&panel->sprites[12], 6);

    panel = g_messageMain.banner;
    panel->unk081 = 0;
    panel->counterDelta = textId;
    panel->counterElapsed = textId;
    panel->unk080 = 1;
    return 1;
}

} /* extern "C" */
