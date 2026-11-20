/* NON_MATCHING: near-structure (172 rows against 203): same skip test, special-row cases, member/row loops and index maths from the asm; retail has extra armcc nops around calls (inlined stubs) and re-tests `target < 0` before the second special case, with the row pointer reloaded (ldr/rsb/str order) after each skillGetAdjustedCost, which ours schedules differently */
#include "battle/BtlMainAccess.h"
#include "network/DataStore/DataStoreMain.h"
#include "code/Code002a.h"
#include "ui/PartyPanelStateA.h"
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;

extern "C" {

struct SlotTableView {
    u8 pad0000[0x1C9F];
    s8 byIndex[1];           /* 0x1C9F: slot ids, 1-based */
};

struct UnitState {
    u8 pad00[0x28];
    u8 *action;              /* 0x28 */
};

extern u32 g_btlScriptUnit;        /* 0x57113c */

s32 gameGetSlotTable(void);
UnitState *btlUnitGet(u32 unit);
u32 gameGetSlotRecord(u32 slot);
s32 skillGetAdjustedCost(u32 record, u32 skillId);
s32 skillGetCostWithRankReduction(u32 skillId, s32 flag);
u32 btlMainGetUnk14(void);
s32 listCursorGetRowIfUnblocked(u32 id);
s32 skillApplyToTarget(s32 target, s32 slot, u32 skillId, u32 *out);

/* Refreshes the skill-cost preview of the party panel rows for the current skill/target and the
 * entry of list position `id` (`direct` selects the unpaged layout). */
void FUN_0028c2ec(u32 id, s32 direct)
{
    PartyPanelStateA *panel = g_partyPanel;
    SlotTableView *slots = (SlotTableView *)gameGetSlotTable();
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
        if (panel->selection < 0 && panel->characters[0]->slot == -1) {
            panel->characters[0]->value = -skillGetCostWithRankReduction(panel->previewItem, 1);
        } else if (panel->selection < 0 && panel->characters[0]->slot == -2) {
            u32 unit = btlMainGetUnk14();
            if (unit != 0) {
                panel->characters[0]->value = -skillGetAdjustedCost(unit, panel->previewItem);
            }
        } else {
            for (s32 i = 0; i < 3; i++) {
                if (slots->byIndex[i + 1] == panel->selection) {
                    u32 record = gameGetSlotRecord(panel->characters[i + 1]->slot);
                    panel->characters[i + 1]->value = -skillGetAdjustedCost(record, panel->previewItem);
                }
            }
            for (s32 i = 0; i < 24; i++) {
                if (panel->entries[i].packedIndex == panel->selection) {
                    u32 record = gameGetSlotRecord(panel->demons[i]->slot);
                    panel->demons[i]->value = -skillGetAdjustedCost(record, panel->previewItem);
                }
            }
        }
    }

    if (direct != 0) {
        if (panel->alternate != 0) {
            index = listCursorGetRowOfChildIfUnblocked((void *)(id)) + listCursorGetRowIfUnblocked(id) * 4;
        } else {
            index = listCursorGetRowIfUnblocked(id) * 4 + panel->page * 12 + listCursorGetRowOfChildIfUnblocked((void *)(id));
        }
    } else {
        s32 count = listCursorGetRowIfUnblocked(id);
        if (count < 1) {
            s32 position = listCursorGetRowOfChildIfUnblocked((void *)(id));
            s32 slot;
            if (position != 0) {
                slot = slots->byIndex[position];
            } else {
                slot = -1;
            }
            skillApplyToTarget(panel->selection, slot, panel->previewItem, &out);
            panel->characters[position + 1]->result = out;
            statusPreviewMpChange(out, panel->characters[position + 1]->value);
            return;
        }
        if (panel->alternate != 0) {
            index = listCursorGetRowOfChildIfUnblocked((void *)(id)) + count * 4;
        } else {
            index = listCursorGetRowOfChildIfUnblocked((void *)(id)) + count * 4 + panel->page * 12;
        }
        index = index - 4;
    }
    skillApplyToTarget(panel->selection, panel->entries[index].packedIndex, panel->previewItem, &out);
    panel->demons[index]->result = out;
    statusPreviewMpChange(out, panel->demons[index]->value);
}

} /* extern "C" */
