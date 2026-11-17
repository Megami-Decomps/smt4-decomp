/* NON_MATCHING: same block-ordering difference as FUN_0026d3e0: retail lays out the stock and active-party `unk42 == 0` arms after the non-stock path; armcc here keeps each pair adjacent. */
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

struct BtlUnitView {
    u8 unk00[0x28];
    BtlUnitExtra *extra;
};
}

extern "C" {
extern u32 g_btlScriptUnit;
s32 appGetRemainingCapacity(u16 item);
s32 FUN_0029a9d4(u16 item, u32 flag);
s32 listCursorGetRowIfUnblocked(void *selection);
s32 objectPartRunUnlessLocked(void *selection);
void partyWidgetSetValue(PartyPanelWidget *widget, s32 value);
void partyWidgetSetCost(PartyPanelWidget *widget, s32 cost);
s32 partyWidgetGetCost(PartyPanelWidget *widget);

// Set the price shown beside every preview widget affected by the selected item, then compute the
// value for the selected active-party or stock unit and publish it on that unit's widget.
void FUN_0026d144(void *selection, s32 stockOnly)
{
    PartyPanelState *panel = g_partyPanel;
    SaveSlotTableIV *slots = gameGetSlotTable();
    s32 value = 0;
    s32 index;

    bool scripted = false;
    if (panel->previewItem == 0x7d && static_cast<void *>(btlGetMainState()) != NULL && g_btlScriptUnit != 0) {
        BtlUnitExtra *extra = reinterpret_cast<BtlUnitView *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->extra;
        scripted = extra != NULL && extra->kind == 8;
    }
    if (!scripted) {
        if (panel->selection < 0) {
            partyWidgetSetCost(panel->characters[0], -FUN_0029a9d4(panel->previewItem, 1));
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

    if (stockOnly) {
        if (panel->alternate) {
            index = objectPartRunUnlessLocked(selection);
            index += listCursorGetRowIfUnblocked(selection) * 4;
        } else {
            index = listCursorGetRowIfUnblocked(selection) * 4 + panel->page * 12;
            index += objectPartRunUnlessLocked(selection);
        }
    } else {
        if (listCursorGetRowIfUnblocked(selection) < 1) {
            index = objectPartRunUnlessLocked(selection);
            s32 unit;
            if (index != 0) {
                unit = slots->active[index - 1];
            } else {
                unit = -1;
            }
            FUN_002621b4(panel->selection, unit, panel->previewItem, &value);
            partyWidgetSetValue(panel->characters[index], value);
            FUN_00298d28(value, partyWidgetGetCost(panel->characters[index]));
            return;
        }
        if (panel->alternate) {
            index = objectPartRunUnlessLocked(selection);
            index += listCursorGetRowIfUnblocked(selection) * 4;
        } else {
            index = listCursorGetRowIfUnblocked(selection) * 4 + panel->page * 12;
            index += objectPartRunUnlessLocked(selection);
        }
        index -= 4;
    }
    FUN_002621b4(panel->selection, panel->entries[index].packedIndex,
                 panel->previewItem, &value);
    partyWidgetSetValue(panel->demons[index], value);
    FUN_00298d28(value, partyWidgetGetCost(panel->demons[index]));
}
}
