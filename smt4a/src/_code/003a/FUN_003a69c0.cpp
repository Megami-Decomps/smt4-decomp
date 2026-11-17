/* NON_MATCHING: panel initialization constants and register allocation differ. */
#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
u32 scrGetArg(u32);

// Prepare the message panel animation and store the requested display value.
u32 FUN_003a69c0(void)
{
    u32 value = scrGetArg(0);
    MessageWindowA *panel = g_messageMain.banner;
    panel->wideValue = 1;
    panel->counterState = 1;
    u32 slot = gameGetSlotTable()->money;
    panel->counterValue = slot;
    panel->counterBase = slot;
    panel->alternateAnimation = 0;
    panel->unk0092 = 0;
    panel->popupShown = 0;
    panel->unk016D = 0;
    uiSpriteStateInitFromSource(&panel->sprites[17], 8, -1, &panel->parameters, 11, 1.0f);
    pairSetFirstResetSecond(&panel->sprites[17], 0);
    uiSpriteSelectAnim(&panel->sprites[17], 6);
    panel = g_messageMain.banner;
    panel->unk0093 = 0;
    panel->counterDelta = value;
    panel->counterElapsed = value;
    panel->unk0092 = 1;
    panel->stepActive = 0;
    return 1;
}
}
