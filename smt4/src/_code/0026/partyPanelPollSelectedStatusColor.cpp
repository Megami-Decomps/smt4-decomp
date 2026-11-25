#include "ui/PartyPanelState.h"
#include "battle/BtlEntry.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
void partyPanelTickWidget(PartyPanelWidget* widget);
s32 ailmentSelectorGetColor(PartyPanelWidget* widget);
}

/* Polls every party row and stock cell and returns the status colour of the last one that shows the selected
 * unit (-1 when none has one). */
extern "C" u32 partyPanelPollSelectedStatusColor()
{
    PartyPanelState* panel = g_partyPanel;
    u32 color = ~0u;
    for (s32 i = 0; i < 4; ++i) {
        partyPanelTickWidget(panel->characters[i]);
        const s16 *selectedId = (const s16 *)FUN_0029acb0();
        if (partyWidgetGetUnitId(panel->characters[i]) < 0) {
            if (*selectedId < 0 && ailmentSelectorGetColor(panel->characters[i]) != -1) {
                color = ailmentSelectorGetColor(panel->characters[i]);
            }
        } else if (gameGetUnitRecord(partyWidgetGetUnitId(panel->characters[i]))->id == *selectedId && ailmentSelectorGetColor(panel->characters[i]) != -1) {
            color = ailmentSelectorGetColor(panel->characters[i]);
        }
    }
    for (s32 i = 0; i < 24; ++i) {
        partyPanelTickWidget(panel->demons[i]);
        const s16 *selectedId = (const s16 *)FUN_0029acb0();
        if (partyWidgetGetUnitId(panel->demons[i]) < 0) {
            if (*selectedId < 0 && ailmentSelectorGetColor(panel->demons[i]) != -1) {
                color = ailmentSelectorGetColor(panel->demons[i]);
            }
        } else if (gameGetUnitRecord(partyWidgetGetUnitId(panel->demons[i]))->id == *selectedId && ailmentSelectorGetColor(panel->demons[i]) != -1) {
            color = ailmentSelectorGetColor(panel->demons[i]);
        }
    }
    return color;
}
