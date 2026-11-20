/* NON_MATCHING: 10 lines. The widgets' unit id, cost and value go through one-instruction accessors armlink
 * inlined (partyWidgetGetUnitId, partyWidgetGetCost, partyWidgetSetCost, partyWidgetSetValue: inlined.txt rows).
 * Only the reserve-row comparison differs: retail gives the slot and the selected index the other registers. */
#include "battle/BtlMainAccess.h"
#include "network/DataStore/DataStoreMain.h"
#include "code/Code002a.h"
#include "ui/PartyPanelStateA.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "code/Code004b_Smt4a.h"

extern "C" {

struct UnitState {
    u8 pad00[0x28];
    u8 *action;              /* 0x28 */
};

extern u32 g_btlScriptUnit;        /* 0x57113c */

UnitState *btlUnitGet(u32 unit); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 skillGetCostWithRankReduction(u32 skillId, s32 flag); // declcheck: local (the shared declaration does not compile here or changes this unit)
SlotRecordA *btlMainGetUnk14(void);
s32 listCursorGetRowIfUnblocked(u32 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 skillApplyToTarget(s32 target, s32 slot, u32 skillId, u32 *out); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Refreshes the skill-cost preview of the party panel rows for the current skill/target and the
 * entry of list position `id` (`direct` selects the unpaged layout). */
void partyPanelRefreshSkillPreview(u32 id, s32 direct)
{
    PartyPanelStateA *panel = g_partyPanel;
    SaveSlotTableA *slots = gameGetSlotTable();
    u32 out = 0;
    s32 index;

    s32 skipPreview = 0;
    if (panel->previewItem == 125 && reinterpret_cast<s32>(btlGetMainState()) != 0 && g_btlScriptUnit != 0) {
        UnitState *unit = btlUnitGet(g_btlScriptUnit);
        if (unit->action != 0 && *(u16 *)(unit->action + 0x1BE) == 8) {
            skipPreview = 1;
        }
    }
    if (!skipPreview) {
        if (panel->selection < 0 && partyWidgetGetUnitId(panel->characters[0]) == -1) {
            partyWidgetSetCost(panel->characters[0], -skillGetCostWithRankReduction(panel->previewItem, 1));
        } else if (panel->selection < 0 && partyWidgetGetUnitId(panel->characters[0]) == -2) {
            SlotRecordA *unit = btlMainGetUnk14();
            if (unit != NULL) {
                partyWidgetSetCost(panel->characters[0], -skillGetAdjustedCost(unit, panel->previewItem));
            }
        } else {
            for (s32 i = 0; i < 3; i++) {
                if (slots->reserve[i] == panel->selection) {
                    SlotRecordA *record = gameGetSlotRecord(partyWidgetGetUnitId(panel->characters[i + 1]));
                    partyWidgetSetCost(panel->characters[i + 1], -skillGetAdjustedCost(record, panel->previewItem));
                }
            }
            for (s32 i = 0; i < 24; i++) {
                if ((s32)panel->entries[i].packedIndex == panel->selection) {
                    SlotRecordA *record = gameGetSlotRecord(partyWidgetGetUnitId(panel->demons[i]));
                    partyWidgetSetCost(panel->demons[i], -skillGetAdjustedCost(record, panel->previewItem));
                }
            }
        }
    }

    /* In the list layout, the first row contains the player and reserve characters. */
    if (!direct && listCursorGetRowIfUnblocked(id) < 1) {
        s32 position = listCursorGetRowOfChildIfUnblocked((void *)id);
        if (position == 0) {
            skillApplyToTarget(panel->selection, -1, panel->previewItem, &out);
        } else {
            skillApplyToTarget(panel->selection, slots->reserve[position - 1], panel->previewItem, &out);
        }
        partyWidgetSetValue(panel->characters[position], out);
        statusPreviewMpChange(out, partyWidgetGetCost(panel->characters[position]));
        return;
    }
    if (direct != 0) {
        if (panel->alternate != 0) {
            index = listCursorGetRowOfChildIfUnblocked((void *)id) + listCursorGetRowIfUnblocked(id) * 4;
        } else {
            index = listCursorGetRowIfUnblocked(id) * 4 + panel->page * 12 + listCursorGetRowOfChildIfUnblocked((void *)id);
        }
    } else {
        if (panel->alternate != 0) {
            index = listCursorGetRowOfChildIfUnblocked((void *)id) + listCursorGetRowIfUnblocked(id) * 4 - 4;
        } else {
            index = listCursorGetRowIfUnblocked(id) * 4 + panel->page * 12 + listCursorGetRowOfChildIfUnblocked((void *)id) - 4;
        }
    }
    skillApplyToTarget(panel->selection, panel->entries[index].packedIndex, panel->previewItem, &out);
    partyWidgetSetValue(panel->demons[index], out);
    statusPreviewMpChange(out, partyWidgetGetCost(panel->demons[index]));
}

} /* extern "C" */
