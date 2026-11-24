#include "common.h"
#include "code/Code0033.h"
#include "code/Code0048.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/SaveSlotRecord.h"
#include "ui/PartyPanelStateA.h"

extern "C" {

void statusDisplayBindUnitRecord(SlotRecordA *record, s32 useBaseStats, u32 selection, const u32 *parameters);
void objBInitBlock19D0(SlotRecordA *record, s32 copyPair, u32 c);
void gameGlobalsQueueValues(void *player, s32 mode);
void FUN_00372100(PlayerDataA *player, s32 mode);

/* Previews the stat gain of the party panel's item on the unit in `slot` (the protagonist when both
 * `index` and `stock` are zero): copies the record into the panel, adds the item's gain to the stat
 * its id names and binds the result for display. */
void partyPanelPreviewStatItem(s32 slot, s32 index, u32 stock)
{
    PartyPanelStateA *panel = g_partyPanel;
    if (panel->previewItem == 0) {
        return;
    }
    /* Only the protagonist has no slot. */
    if (slot < 0) {
        if (index != 0) {
            return;
        }
        if (stock != 0) {
            return;
        }
    }
    ConsumableRecordA *item = itemTableGetItemRecord(panel->previewItem);
    if ((item->useFlags & 2) != 0) {
        /* Start from the saved record, then add the item's points to the stat it raises. */
        u32 gain;
        if (index == 0 && stock == 0) {
            panel->previewPlayer = *(PlayerDataA *)gameGetPlayerData();
            gain = itemGetStatGain(item->id, -1);
        } else {
            panel->previewUnit = *gameGetSlotRecord(slot);
            gain = itemGetStatGain(item->id, slot);
        }
        bool changed = true; /* false for the items that only show the unit as it is */
        switch (item->id) {
        case 0x1f:
        case 0x7a0:
            if (index == 0 && stock == 0) {
                panel->previewPlayer.baseStats.stats[0] += gain;
                panel->previewPlayer.stats[0] += gain;
            } else {
                panel->previewUnit.tableStats[2] += gain;
                panel->previewUnit.baseStats[0] += gain;
            }
            break;
        case 0x20:
        case 0x7a1:
            if (index == 0 && stock == 0) {
                panel->previewPlayer.baseStats.stats[2] += gain;
                panel->previewPlayer.stats[2] += gain;
            } else {
                panel->previewUnit.tableStats[4] += gain;
                panel->previewUnit.baseStats[2] += gain;
            }
            break;
        case 0x21:
        case 0x7a2:
            if (index == 0 && stock == 0) {
                panel->previewPlayer.baseStats.stats[1] += gain;
                panel->previewPlayer.stats[1] += gain;
            } else {
                panel->previewUnit.tableStats[3] += gain;
                panel->previewUnit.baseStats[1] += gain;
            }
            break;
        case 0x22:
        case 0x7a3:
            if (index == 0 && stock == 0) {
                panel->previewPlayer.baseStats.stats[3] += gain;
                panel->previewPlayer.stats[3] += gain;
            } else {
                panel->previewUnit.tableStats[5] += gain;
                panel->previewUnit.baseStats[3] += gain;
            }
            break;
        case 0x23:
        case 0x7a4:
            if (index == 0 && stock == 0) {
                panel->previewPlayer.baseStats.stats[4] += gain;
                panel->previewPlayer.stats[4] += gain;
            } else {
                panel->previewUnit.tableStats[6] += gain;
                panel->previewUnit.baseStats[4] += gain;
            }
            break;
        case 0x7a5:
            if (index == 0 && stock == 0) {
                panel->previewPlayer.baseStats.hp += gain;
                panel->previewPlayer.maxHp += gain;
            } else {
                panel->previewUnit.tableStats[0] += gain;
                panel->previewUnit.maxHp += gain;
            }
            break;
        case 0x7a6:
            if (index == 0 && stock == 0) {
                panel->previewPlayer.baseStats.mp += gain;
                panel->previewPlayer.maxMp += gain;
            } else {
                panel->previewUnit.tableStats[1] += gain;
                panel->previewUnit.maxMp += gain;
            }
            break;
        case 0x7b7:
        case 0x7b8:
        case 0x7b9:
        case 0x7ba:
        case 0x7bb:
        case 0x7bc:
        case 0x7bd:
        case 0x7be:
        case 0x7bf:
        case 0x7c0:
        case 0x7c1:
        case 0x7c2:
            changed = false;
            break;
        default:
            break;
        }
        if (!changed) {
            FUN_0033449c(0);
            if (index == 0 && stock == 0) {
                gameGlobalsQueueValues(gameGetPlayerData(), 0);
            } else {
                statusDisplayBindUnitRecord(gameGetSlotRecord(slot), 0, 0, NULL);
            }
        } else {
            FUN_0033449c(1);
            if (index == 0 && stock == 0) {
                gameGlobalsQueueValues(gameGetPlayerData(), 0);
                FUN_00372100(&panel->previewPlayer, 0);
            } else {
                statusDisplayBindUnitRecord(gameGetSlotRecord(slot), 0, 0, NULL);
                objBInitBlock19D0(&panel->previewUnit, 0, 0);
            }
        }
    } else {
        FUN_0033449c(0);
    }
}

} /* extern "C" */
