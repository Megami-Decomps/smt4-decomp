/* NON_MATCHING: same block-ordering difference as FUN_0026d3e0: retail lays out the stock and active-party `unk42 == 0` arms after the non-stock path; armcc here keeps each pair adjacent. */
#include "battle/BtlMainAccess.h"
#include "ui/PartyPanelState.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "battle/BattleUnitSlot.h"
#include "code/Code0026.h"
#include "ui/PartyPanel.h"

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
extern PartyPanelState *g_partyPanel;
extern u32 g_btlScriptUnit;
PartyDamageSlotsIV *gameGetSlotTable();
s32 FUN_0029a924(u16 item);
s32 FUN_0029a9d4(u16 item, u32 flag);
s32 FUN_0029efa8(void *selection);
s32 objectPartRunUnlessLocked(void *selection);
void partyWidgetSetValue(PartyPanelWidget *widget, s32 value);
void partyWidgetSetCost(PartyPanelWidget *widget, s32 cost);
s32 partyWidgetGetCost(PartyPanelWidget *widget);

// Set the price shown beside every preview widget affected by the selected item, then compute the
// value for the selected active-party or stock unit and publish it on that unit's widget.
void FUN_0026d144(void *selection, s32 stockOnly)
{
    PartyPanelState *panel = g_partyPanel;
    PartyDamageSlotsIV *slots = gameGetSlotTable();
    s32 value = 0;
    s32 index;

    bool scripted = false;
    if (panel->previewItem == 0x7d && static_cast<void *>(btlGetMainState()) != NULL && g_btlScriptUnit != 0) {
        BtlUnitExtra *extra = reinterpret_cast<BtlUnitView *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->extra;
        scripted = extra != NULL && extra->kind == 8;
    }
    if (!scripted) {
        if (panel->pendingSelection.selection < 0) {
            partyWidgetSetCost(panel->characters[0], -FUN_0029a9d4(panel->previewItem, 1));
        } else {
            for (s32 i = 0; i < 3; i++) {
                if (slots->active[i] == panel->pendingSelection.selection) {
                    partyWidgetSetCost(panel->characters[i + 1], -FUN_0029a924(panel->previewItem));
                }
            }
            for (s32 i = 0; i < 24; i++) {
                if (panel->previewUnits[i].packedIndex == panel->pendingSelection.selection) {
                    partyWidgetSetCost(panel->demons[i], -FUN_0029a924(panel->previewItem));
                }
            }
        }
    }

    if (stockOnly) {
        if (panel->unk42) {
            index = objectPartRunUnlessLocked(selection);
            index += FUN_0029efa8(selection) * 4;
        } else {
            index = FUN_0029efa8(selection) * 4 + panel->unk2C * 12;
            index += objectPartRunUnlessLocked(selection);
        }
    } else {
        if (FUN_0029efa8(selection) < 1) {
            index = objectPartRunUnlessLocked(selection);
            s32 unit;
            if (index != 0) {
                unit = slots->active[index - 1];
            } else {
                unit = -1;
            }
            FUN_002621b4(panel->pendingSelection.selection, unit, panel->previewItem, &value);
            partyWidgetSetValue(panel->characters[index], value);
            FUN_00298d28(value, partyWidgetGetCost(panel->characters[index]));
            return;
        }
        if (panel->unk42) {
            index = objectPartRunUnlessLocked(selection);
            index += FUN_0029efa8(selection) * 4;
        } else {
            index = FUN_0029efa8(selection) * 4 + panel->unk2C * 12;
            index += objectPartRunUnlessLocked(selection);
        }
        index -= 4;
    }
    FUN_002621b4(panel->pendingSelection.selection, panel->previewUnits[index].packedIndex,
                 panel->previewItem, &value);
    partyWidgetSetValue(panel->demons[index], value);
    FUN_00298d28(value, partyWidgetGetCost(panel->demons[index]));
}
}
