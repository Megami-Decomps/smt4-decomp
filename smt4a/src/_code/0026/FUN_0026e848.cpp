#include "ui/PartyPanelStateA.h"

extern "C" {

void uiSpriteSetKeyframe(TimerSlot *sprite, s32 a, s32 b);
void slotPlacementAssignSlotPosition(PartyPanelWidget *widget, u32 value);

/* Flips the panel's page, plays the page animation (5) and moves each of the 4 + 24 widgets to the new page. */
void FUN_0026e848(void)
{
    PartyPanelStateA *screen;
    s32 i;

    screen = g_partyPanel;
    g_partyPanel->page = g_partyPanel->page ^ 1;
    uiSpriteSetKeyframe(&screen->sprites[PARTY_PANEL_SPRITE_PAGE], 5, 0);
    i = 0;
    do {
        slotPlacementAssignSlotPosition(screen->characters[i], screen->page);
        i = i + 1;
    } while (i < 4);
    i = 0;
    do {
        slotPlacementAssignSlotPosition(screen->demons[i], screen->page);
        i = i + 1;
    } while (i < 0x18);
}

} /* extern "C" */
