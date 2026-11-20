#include "ui/UiSpriteApi.h"
#include "ui/PartyPanelState.h"

extern "C" {

int slotPlacementAssignSlotAndPosition(PartyPanelWidget *widget, u32 slot);

void FUN_002932d8(void)
{
    PartyPanelState *scene = g_partyPanel;
    int i;

    g_partyPanel->page = g_partyPanel->page ^ 1;
    uiSpriteSetKeyframe(&scene->sprites[PARTY_PANEL_SPRITE_PAGE], 5, 0);
    i = 0;
    do {
        slotPlacementAssignSlotAndPosition(scene->characters[i], scene->page);
        i++;
    } while (i < 4);
    i = 0;
    do {
        slotPlacementAssignSlotAndPosition(scene->demons[i], scene->page);
        i++;
    } while (i < 0x18);
}

} /* extern "C" */
