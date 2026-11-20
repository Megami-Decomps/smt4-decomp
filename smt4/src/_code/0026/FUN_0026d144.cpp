/* NON_MATCHING: 10 lines: only the active-party loop's compare differs (retail loads the slot into r1 and the selection into r0; armcc swaps them). */
#include "battle/BtlMainAccess.h"
#include "ui/PartyPanelState.h"

#include "battle/BattleUnitSlot.h"
#include "code/Code0026.h"
#include "ui/PartyPanel.h"
#include "gamedata/SaveSlotTableIV.h"

namespace {
struct BtlUnitExtra {
    u8 unk000[0x14c];
    u16 kind;
};

struct BtlUnitExtraView {
    u8 unk00[0x28];
    BtlUnitExtra *extra;
};
}

extern "C" {
extern u32 g_btlScriptUnit;
s32 appGetRemainingCapacity(u16 item);
s32 skillGetDiscountedCost(u16 item, u32 flag);
s32 listCursorGetRowIfUnblocked(void *selection);
s32 objectPartRunUnlessLocked(void *selection);

/* Sets the price shown beside every preview widget affected by the selected item, then computes the
 * value for the selected active-party or stock unit and publishes it on that unit's widget. */
void FUN_0026d144(void *selection, s32 stockOnly)
{
    PartyPanelState *panel = g_partyPanel;
    SaveSlotTableIV *slots = gameGetSlotTable();
    s32 value = 0;
    s32 index;

    bool scripted = false;
    if (panel->previewItem == 0x7d && static_cast<void *>(btlGetMainState()) != NULL && g_btlScriptUnit != 0) {
        BtlUnitExtra *extra = reinterpret_cast<BtlUnitExtraView *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->extra;
        scripted = extra != NULL && extra->kind == 8;
    }
    if (!scripted) {
        if (panel->selection < 0) {
            partyWidgetSetCost(panel->characters[0], -skillGetDiscountedCost(panel->previewItem, 1));
        } else {
            for (s32 i = 0; i < 3; i++) {
                if (slots->active[i] == panel->selection) {
                    partyWidgetSetCost(panel->characters[i + 1], -appGetRemainingCapacity(panel->previewItem));
                }
            }
            for (s32 i = 0; i < 24; i++) {
                if (panel->entries[i].packedIndex == panel->selection) {
                    partyWidgetSetCost(panel->demons[i], -appGetRemainingCapacity(panel->previewItem));
                }
            }
        }
    }

    if (stockOnly == 0 && listCursorGetRowIfUnblocked(selection) < 1) {
        index = objectPartRunUnlessLocked(selection);
        if (index == 0) {
            skillApplyToTarget(panel->selection, -1, panel->previewItem, &value);
        } else {
            skillApplyToTarget(panel->selection, slots->active[index - 1], panel->previewItem, &value);
        }
        partyWidgetSetValue(panel->characters[index], value);
        FUN_00298d28(value, partyWidgetGetCost(panel->characters[index]));
    } else {
        if (stockOnly) {
            if (panel->alternate) {
                index = objectPartRunUnlessLocked(selection);
                index += listCursorGetRowIfUnblocked(selection) * 4;
            } else {
                index = listCursorGetRowIfUnblocked(selection) * 4 + panel->page * 12;
                index += objectPartRunUnlessLocked(selection);
            }
        } else {
            if (panel->alternate) {
                index = objectPartRunUnlessLocked(selection);
                index += listCursorGetRowIfUnblocked(selection) * 4;
            } else {
                index = listCursorGetRowIfUnblocked(selection) * 4 + panel->page * 12;
                index += objectPartRunUnlessLocked(selection);
            }
            index -= 4;
        }
        skillApplyToTarget(panel->selection, panel->entries[index].packedIndex,
                     panel->previewItem, &value);
        partyWidgetSetValue(panel->demons[index], value);
        FUN_00298d28(value, partyWidgetGetCost(panel->demons[index]));
    }
}
}
