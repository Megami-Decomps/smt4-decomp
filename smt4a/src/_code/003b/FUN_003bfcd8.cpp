/* NON_MATCHING: scheduling only: retail loads the 1.0f scale before the panel stores and keeps the panel in r0 before `return 1`. */
#include "ui/MessageMainA.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

u32 scrGetArg(u32 index);
void uiSpriteStateInitFromSource(void *sprite, s32 anim, s32 frame, void *source, f32 scale, s32 layer);
void pairSetFirstResetSecond(void *pair, s32 first);

/* Opens the message panel and starts its sprite; `mode` selects the panel variant. */
static __inline void messagePanelOpen(u8 mode)
{
    MessageWindowA *panel = g_messageMain.banner;
    u32 slot;

    panel->wideValue = 1;
    panel->counterState = 1;
    slot = gameGetSlotTable()->money;
    panel->counterValue = slot;
    panel->counterBase = slot;
    panel->alternateAnimation = mode;
    panel->unk0092 = 0;
    panel->popupShown = 0;
    panel->unk016D = 0;
    uiSpriteStateInitFromSource(&panel->sprites[17], 8, -1, &panel->parameters, 1.0f, 11);
    pairSetFirstResetSecond(&panel->sprites[17], 0);
    uiSpriteSelectAnim(&panel->sprites[17], 6);
}

/* Sets the panel's current and target value and marks it ready. */
static __inline void messagePanelSetValue(u32 value)
{
    MessageWindowA *panel = g_messageMain.banner;

    panel->unk0093 = 0;
    panel->counterDelta = value;
    panel->counterElapsed = value;
    panel->unk0092 = 1;
    panel->stepActive = 0;
}

/* Script command: opens the message panel in its argument-driven mode. */
u32 FUN_003bfcd8(void)
{
    u32 value = scrGetArg(0);

    messagePanelOpen(0);
    messagePanelSetValue(value);
    return 1;
}

} /* extern "C" */
