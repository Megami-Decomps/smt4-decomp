/* NON_MATCHING: 6 lines, scheduling, as its Apocalypse twin shopTrackSelectedItemPreview: retail reloads the slot
 * for the second holder address before it reads the selected item's id, the build after. */
#include "shard/S2Scene3a.h"
#include "shop/ShopScreen.h"
#include "code/Code0029_Smt4.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
u32 uiStateHasAnyActiveFlag(Scene3aSlotInfo *);
void statusCameraRestore(u32);
s32 contentGetEntryKind(u32);
void FUN_0029963c(u32, u16);
void *__aeabi_memcpy4(void *, const void *, u32);
void playerRecalcStatsFromEquipment(PlayerDataIV *);
void btlBuildDemonSnapshotFromSaveRecord(PlayerDataIV *);

void equipmentPreviewUpdateSelection(Scene3a *scene)
{
    u32 item = shopSelectedItem(scene)->id;
    if (uiStateHasAnyActiveFlag(&scene->slotInfo[scene->slot]) || scene->selectedItem != item) {
        statusCameraRestore(0);
        scene->preview.requested = 0;
        scene->preview.ready = 0;
        scene->selectedItem = item;
    } else if (scene->preview.requested == 0) {
        if (item) {
            if (contentGetEntryKind(item) == 4)
                FUN_0029963c(0, item);
            if (contentGetEntryKind(item) == 5)
                FUN_0029963c(1, item);
            if (contentGetEntryKind(item) == 6)
                FUN_0029963c(2, item);
        }
        scene->preview.requested = 1;
    } else {
        if (FUN_00299fc0()) {
            statusCameraRestore(1);
            scene->preview.ready = 1;
        }
    }
    if (scene->state && scene->equipmentPreview.item != item) {
        scene->equipmentPreview.item = item;
        PlayerDataIV player;
        __aeabi_memcpy4(&player, gameGetPlayerData(), sizeof(player));
        if (item) {
            switch (contentGetEntryKind(item)) {
            case 2: player.equipment[0] = item; break;
            case 3: player.equipment[1] = item; break;
            case 4: player.equipment[3] = item; break;
            case 5: player.equipment[4] = item; break;
            case 6: player.equipment[5] = item; break;
            case 7: player.equipment[6] = item; break;
            case 8: player.equipment[2] = item; break;
            }
        }
        playerRecalcStatsFromEquipment(&player);
        btlBuildDemonSnapshotFromSaveRecord(&player);
    }
}
}
