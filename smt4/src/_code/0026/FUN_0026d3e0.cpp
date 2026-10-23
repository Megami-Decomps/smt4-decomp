/* NON_MATCHING: stock/active branch blocks are ordered differently and the final callback shares a backward tail; 113 vs 112 instructions. */
#include "ui/PartyPanelState.h"
#include "shard/W7_W7Match2_PartyDamage.h"
extern "C" {
extern PartyPanelState *g_partyPanel;
PartyDamageSlotsIV *gameGetSlotTable();
s32 FUN_0029efa8(void *selection);
s32 objectPartRunUnlessLocked(void *selection);
void btlItemComputeValues(s32 unit, u16 item, s32 *first, s32 *second);
void FUN_00292be4(PartyPanelWidget *widget, s32 first, s32 second);
void FUN_00298d28(s32 first, s32 second);
void FUN_0026cba4(s32 unit, s32 index, u32 isStock);

// Update item-effect values on the selected active-party or stock unit and its preview widget.
void FUN_0026d3e0(void *selection, s32 stockOnly)
{
    PartyPanelState *panel = g_partyPanel;
    PartyDamageSlotsIV *slots = gameGetSlotTable();
    s32 unit = 0;
    s32 first = 0;
    s32 second = 0;
    s32 index;
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
            if (index) {
                btlItemComputeValues(slots->active[index - 1], panel->previewItem, &first, &second);
                unit = slots->active[index - 1];
            } else {
                btlItemComputeValues(-1, panel->previewItem, &first, &second);
            }
            FUN_00292be4(panel->characters[index], first, second);
            FUN_00298d28(first, second);
            FUN_0026cba4(unit, index, 0);
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
    btlItemComputeValues(panel->previewUnits[index].packedIndex, panel->previewItem, &first, &second);
    FUN_00292be4(panel->demons[index], first, second);
    FUN_00298d28(first, second);
    FUN_0026cba4(panel->previewUnits[index].packedIndex, index, 1);
}
}
