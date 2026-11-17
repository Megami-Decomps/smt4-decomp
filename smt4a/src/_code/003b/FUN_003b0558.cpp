/* NON_MATCHING: zero is hoisted into a saved register and widget-reset branches merge; retail inline hints differ. */
#include "ui/PartyPanelStateA.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"
#include "shard/Shard0031.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
void FUN_002ade88(void);
void partyPanelChangeState(s32 mode, s32 enabled);
void FUN_0020d934(void);
void FUN_0023fc38(void);

/* Remove the last pending party selection and clear its widget transition flag. */
void FUN_003b0558(void)
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
                panel->characters[i]->transitionPending = 0;
                break;
            }
        }
    } else {
        for (s32 i = 0; i < 24; ++i) {
            if (static_cast<s32>(panel->entries[i].packedIndex) >= 0 &&
                gameGetSlotRecord(static_cast<s32>(panel->entries[i].packedIndex))->id == panel->fusionParentIds[panel->fusionParentCount]) {
                panel->demons[i]->transitionPending = 0;
                break;
            }
        }
    }
    FUN_002ade88();
    panel->pendingState = 8;
    partyPanelChangeState(0, 1);
    FUN_0020d934();
    FUN_0023fc38();
}
}
