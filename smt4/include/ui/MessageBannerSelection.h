/* The message banner's setup (Shin Megami Tensei IV): the bodies of messageBannerInitSelection,
 * messageTargetSetValue and messageBannerSetCountdown, which their callers in other units inline (the banner
 * script commands FUN_00310730 and FUN_00321b9c, messageSetTargetState). */
#ifndef SMT4_UI_MESSAGEBANNERSELECTION_H
#define SMT4_UI_MESSAGEBANNERSELECTION_H

#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
u32 gameDataBlocks2GetWord4(void);
}

/* Initializes the banner's selected value (the money, or the current value when `useCurrentValue`), its
 * animation mode and the default widget settings. */
static __inline u32 messageBannerInitSelectionInline(u8 mode, s32 useCurrentValue)
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

/* messageTargetSetValue's body: starts the banner's counter at `value` with the given flag. */
static __inline u32 messageTargetSetValueInline(u32 value, u8 flag)
{
    MessageWindow *target = g_messageMain.banner;

    target->unk081 = flag;
    target->counterDelta = value;
    target->counterElapsed = value;
    target->unk080 = 1;
    return 1;
}

/* messageBannerSetCountdown's body: starts the banner's countdown at `value` with the given flag. */
static __inline u32 messageBannerSetCountdownInline(u32 value, u8 flag)
{
    MessageWindow *target = g_messageMain.banner;

    g_messageMain.banner->counterState = 3;
    target->counterDelta = value;
    target->counterElapsed = value;
    target->unk081 = flag;
    target->counterDuration = 0;
    return 1;
}

#endif
