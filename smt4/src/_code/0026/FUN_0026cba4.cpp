/* NON_MATCHING: early guards, the unit/player arm placement and the isUnit|variant test now match retail; remaining: isUnit/variant saved registers are swapped (r6/r5) and retail places the item-flag-clear tail (FUN_0029c4c8(0)) at the end of the function. */
#include "ui/PartyPanelState.h"
#include "gamedata/GamePlayerData.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "gamedata/ConsumableRecord.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

void __aeabi_memcpy4(void *dest, const void *src, u32 size);
void FUN_0029c4e4(PartyPanelUnitPreview *unit, s32 arg);
void FUN_0029a0cc(PlayerDataIV *player);

/* Shows an item's stat boost preview: copies the player's (or a unit's) record into the panel, adds 3 to the stat
 * the item raises (in both its base and its current value) and refreshes the panel. */
void FUN_0026cba4(s32 id, s32 isUnit, s32 variant)
{
    PartyPanelState *panel = g_partyPanel;
    u32 item = panel->previewItem;
    ConsumableRecord *record;

    if (item == 0) {
        return;
    }
    if (id < 0) {
        if (isUnit != 0) {
            return;
        }
        if (variant != 0) {
            return;
        }
    }
    record = itemTableGetItemRecord(item);
    if ((record->useFlags & 2) == 0) {
        FUN_0029c4c8(0);
        return;
    }
    isUnit |= variant;
    if (isUnit == 0) {
        __aeabi_memcpy4(&panel->previewPlayer, gameGetPlayerData(), 0x8C);
    } else {
        __aeabi_memcpy4(&panel->previewUnit, gameGetUnitRecord(id), 0x604);
    }
    switch (record->id) {
    case 0x1F:
        if (isUnit != 0) {
            panel->previewUnit.stats[0] += 3;
            panel->previewUnit.baseStats[0] += 3;
        } else {
            panel->previewPlayer.baseStats.stats[0] += 3;
            panel->previewPlayer.stats[0] += 3;
        }
        break;
    case 0x20:
        if (isUnit != 0) {
            panel->previewUnit.stats[2] += 3;
            panel->previewUnit.baseStats[2] += 3;
        } else {
            panel->previewPlayer.baseStats.stats[2] += 3;
            panel->previewPlayer.stats[2] += 3;
        }
        break;
    case 0x21:
        if (isUnit != 0) {
            panel->previewUnit.stats[1] += 3;
            panel->previewUnit.baseStats[1] += 3;
        } else {
            panel->previewPlayer.baseStats.stats[1] += 3;
            panel->previewPlayer.stats[1] += 3;
        }
        break;
    case 0x22:
        if (isUnit != 0) {
            panel->previewUnit.stats[3] += 3;
            panel->previewUnit.baseStats[3] += 3;
        } else {
            panel->previewPlayer.baseStats.stats[3] += 3;
            panel->previewPlayer.stats[3] += 3;
        }
        break;
    case 0x23:
        if (isUnit != 0) {
            panel->previewUnit.stats[4] += 3;
            panel->previewUnit.baseStats[4] += 3;
        } else {
            panel->previewPlayer.baseStats.stats[4] += 3;
            panel->previewPlayer.stats[4] += 3;
        }
        break;
    }
    FUN_0029c4c8(1);
    if (isUnit != 0) {
        FUN_0029c4e4(&panel->previewUnit, 0);
    } else {
        FUN_0029a0cc(&panel->previewPlayer);
    }
}

} /* extern "C" */
