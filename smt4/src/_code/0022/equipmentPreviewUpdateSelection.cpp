/* NON_MATCHING: selected-list address scheduling and cold model-request branch placement differ; -O2 candidate. */
#include "shard/S2Scene3a.h"

struct PlayerEquipmentPreview {
    u16 equipment[7];
    u8 remaining[0x7e];
};
extern "C" {
s32 flaggedValueHolderGetTotal(Scene3aSlotInfo *);
u32 FUN_003c2d54(Scene3aSlotInfo *);
void FUN_002996d8(u32);
s32 FUN_00299fc0();
s32 FUN_002ae3c0(u32);
void FUN_0029963c(u32, u16);
const PlayerEquipmentPreview *gameGetPlayerData();
void *__aeabi_memcpy4(void *, const void *, u32);
void FUN_00299370(PlayerEquipmentPreview *);
void FUN_0029a0cc(PlayerEquipmentPreview *);

void equipmentPreviewUpdateSelection(Scene3a *scene)
{
    s32 slot = scene->slot;
    u32 item = scene->lists[slot].entries[flaggedValueHolderGetTotal(&scene->slotInfo[slot])].id;
    if (FUN_003c2d54(&scene->slotInfo[scene->slot]) || scene->selectedItem != item) {
        FUN_002996d8(0);
        scene->preview.requested = 0;
        scene->preview.ready = 0;
        scene->selectedItem = item;
    } else if (scene->preview.requested) {
        if (FUN_00299fc0()) {
            FUN_002996d8(1);
            scene->preview.ready = 1;
        }
    } else {
        if (item) {
            if (FUN_002ae3c0(item) == 4)
                FUN_0029963c(0, item);
            if (FUN_002ae3c0(item) == 5)
                FUN_0029963c(1, item);
            if (FUN_002ae3c0(item) == 6)
                FUN_0029963c(2, item);
        }
        scene->preview.requested = 1;
    }
    if (scene->state && scene->equipmentPreview.item != item) {
        scene->equipmentPreview.item = item;
        PlayerEquipmentPreview player;
        __aeabi_memcpy4(&player, gameGetPlayerData(), sizeof(player));
        if (item) {
            switch (FUN_002ae3c0(item)) {
            case 2: player.equipment[0] = item; break;
            case 3: player.equipment[1] = item; break;
            case 4: player.equipment[3] = item; break;
            case 5: player.equipment[4] = item; break;
            case 6: player.equipment[5] = item; break;
            case 7: player.equipment[6] = item; break;
            case 8: player.equipment[2] = item; break;
            }
        }
        FUN_00299370(&player);
        FUN_0029a0cc(&player);
    }
}
}
