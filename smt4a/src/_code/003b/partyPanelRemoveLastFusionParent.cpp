/* NON_MATCHING: allocation only: retail decrements the fusion-parent count in r0 (and indexes the demon flag with
 * it), the build uses r1. A single-use `u8` copy of the flag matches but only steers the register, so it is not
 * written. */
#include "ui/PartyPanelStateA.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"
#include "shard/Shard0031.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
void partyPanelRefreshFusionAvailability(void);
void partyPanelChangeState(s32 mode, s32 enabled);
void partyPanelShowButtonHelp(void);
void partyPanelPlayInputCue(void);

/* Takes the last fusion parent off the panel's list, clears the pending transition of its widget (a party row
 * or a stock cell) and refreshes the panel's fusion marks. */
void partyPanelRemoveLastFusionParent(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    SaveSlotTableA *party = gameGetSlotTable();
    if (!panel)
        return;
    --panel->fusionParentCount;
    if (!panel->fusionParentIsDemon[panel->fusionParentCount]) {
        for (s32 i = 0; i < 3; ++i) {
            if (party->reserve[i] >= 0 &&
                gameGetSlotRecord(party->reserve[i])->id == panel->fusionParentIds[panel->fusionParentCount]) {
                partyWidgetSetTransitionPending(panel->characters[i], 0);
                break;
            }
        }
    } else {
        for (s32 i = 0; i < 24; ++i) {
            if ((s32)panel->entries[i].packedIndex >= 0 &&
                gameGetSlotRecord((s32)panel->entries[i].packedIndex)->id == panel->fusionParentIds[panel->fusionParentCount]) {
                partyWidgetSetTransitionPending(panel->demons[i], 0);
                break;
            }
        }
    }
    partyPanelRefreshFusionAvailability();
    panel->pendingState = 8;
    partyPanelChangeState(0, 1);
    partyPanelShowButtonHelp();
    partyPanelPlayInputCue();
}
}
