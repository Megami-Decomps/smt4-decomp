/* The message banner's setup (Apocalypse): the bodies of messageBannerInitCounter, panelSetTarget and
 * panelSetMode3, which their callers in other units inline (the banner script commands FUN_003a69c0 and
 * FUN_003bfcd8, messageBannerStartCounter). */
#ifndef SMT4A_UI_MESSAGEBANNERSELECTION_H
#define SMT4A_UI_MESSAGEBANNERSELECTION_H

#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
u32 gameDataBlocks2GetWord4(void);
}

/* messageBannerInitCounter's body: initializes the banner's value (the money, or the data block's word when
 * `useDataBlock`), its animation mode and its sprite. */
static __inline u32 messageBannerInitCounterInline(u8 messageId, s32 useDataBlock)
{
    MessageWindowA *banner = g_messageMain.banner;
    banner->wideValue = 1;
    banner->counterState = 1;

    if (useDataBlock == 0) {
        u32 value = gameGetSlotTable()->money;
        banner->counterValue = value;
        banner->counterBase = value;
    } else {
        u32 value = gameDataBlocks2GetWord4();
        banner->counterValue = value;
        banner->counterBase = value;
    }

    banner->alternateAnimation = messageId;
    banner->unk0092 = 0;
    banner->popupShown = 0;
    banner->unk016D = 0;
    uiSpriteStateInitFromSource(&banner->sprites[17], 8, 0xFFFFFFFFu, &banner->parameters, 11, 1.0f);
    pairSetFirstResetSecond(&banner->sprites[17], 0);
    uiSpriteSelectAnim(&banner->sprites[17], 6);
    return 1;
}

/* panelSetTarget's body: starts the banner's counter at `value` with the given flag. */
static __inline u32 panelSetTargetInline(u32 value, u8 flag)
{
    MessageWindowA *panel = g_messageMain.banner;

    panel->unk0093 = flag;
    panel->counterDelta = value;
    panel->counterElapsed = value;
    panel->unk0092 = 1;
    panel->stepActive = 0;
    return 1;
}

/* panelSetMode3's body: starts the banner's countdown at `value` with the given flag. */
static __inline u32 panelSetMode3Inline(u32 value, u8 flag)
{
    MessageWindowA *panel = g_messageMain.banner;

    panel->counterState = 3;
    panel->counterDelta = value;
    panel->counterElapsed = value;
    panel->unk0093 = flag;
    panel->counterDuration = 0;
    return 1;
}

#endif
