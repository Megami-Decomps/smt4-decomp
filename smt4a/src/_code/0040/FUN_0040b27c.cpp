#include "common.h"
#include <stdio.h>
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
u32 connectionTableFindVariant(void *owner, u32 part, u32 group, u32 model, u32 flags);
void namedResourceSlotAssign(void *owner, u32 part, const char *path, u32 flags);
u32 virtualSlotAlwaysTrue(u32 group, u32 model); /* answers 1 */

/* Replaces one outfit part (0 head, 1 body, 2 legs) of the model with the equipment's; changing the head
 * also refreshes the body, changing the body the head and legs. A model the check rejects falls back to
 * group 8, model 0. */
void FUN_0040b27c(void *owner, u32 part, u16 equipment, u32 flags)
{
    EquipmentRecordA *record = itemTableGetEquipmentRecord(equipment);
    char path[64];
    switch (part) {
    case 0: {
        if (record->slot != 4) {
            return;
        }
        u32 variant = connectionTableFindVariant(owner, 0, record->modelGroup, record->model, 0);
        if (virtualSlotAlwaysTrue(record->modelGroup, record->model)) {
            sprintf(path, "player/pl%02d_%03dhd%d.bam", record->modelGroup, record->model, variant);
        } else {
            variant = connectionTableFindVariant(owner, 0, 8, 0, 0);
            sprintf(path, "player/pl%02d_%03dhd%d.bam", 8, 0, variant);
        }
        break;
    }
    case 1: {
        if (record->slot != 5) {
            return;
        }
        u32 variant = connectionTableFindVariant(owner, 1, record->modelGroup, record->model, 0);
        if (virtualSlotAlwaysTrue(record->modelGroup, record->model)) {
            sprintf(path, "player/pl%02d_%03dbd%d.bam", record->modelGroup, record->model, variant);
        } else {
            sprintf(path, "player/pl%02d_%03dbd0.bam", 8, 0);
        }
        break;
    }
    case 2: {
        if (record->slot != 6) {
            return;
        }
        u32 variant = connectionTableFindVariant(owner, 2, record->modelGroup, record->model, 0);
        if (virtualSlotAlwaysTrue(record->modelGroup, record->model)) {
            sprintf(path, "player/pl%02d_%03dlg%d.bam", record->modelGroup, record->model, variant);
        } else {
            variant = connectionTableFindVariant(owner, 2, 8, 0, 0);
            sprintf(path, "player/pl%02d_%03dlg%d.bam", 8, 0, variant);
        }
        break;
    }
    }
    namedResourceSlotAssign(owner, part, path, flags);
    if (part == 0) {
        PlayerDataA *player = gameGetPlayerData();
        record = itemTableGetEquipmentRecord(player->equipped.body);
        u32 variant = connectionTableFindVariant(owner, 1, record->modelGroup, record->model, equipment);
        if (virtualSlotAlwaysTrue(record->modelGroup, record->model)) {
            sprintf(path, "player/pl%02d_%03dbd%d.bam", record->modelGroup, record->model, variant);
        } else {
            variant = connectionTableFindVariant(owner, 1, 8, 0, equipment);
            sprintf(path, "player/pl%02d_%03dbd%d.bam", 8, 0, variant);
        }
        namedResourceSlotAssign(owner, 1, path, flags);
    } else if (part == 1) {
        PlayerDataA *player = gameGetPlayerData();
        record = itemTableGetEquipmentRecord(player->equipped.head);
        u32 variant = connectionTableFindVariant(owner, 0, record->modelGroup, record->model, equipment);
        if (virtualSlotAlwaysTrue(record->modelGroup, record->model)) {
            sprintf(path, "player/pl%02d_%03dhd%d.bam", record->modelGroup, record->model, variant);
        } else {
            variant = connectionTableFindVariant(owner, 0, 8, 0, equipment);
            sprintf(path, "player/pl%02d_%03dhd%d.bam", 8, 0, variant);
        }
        namedResourceSlotAssign(owner, 0, path, flags);
        record = itemTableGetEquipmentRecord(player->equipped.legs);
        variant = connectionTableFindVariant(owner, 2, record->modelGroup, record->model, equipment);
        if (virtualSlotAlwaysTrue(record->modelGroup, record->model)) {
            sprintf(path, "player/pl%02d_%03dlg%d.bam", record->modelGroup, record->model, variant);
        } else {
            variant = connectionTableFindVariant(owner, 2, 8, 0, equipment);
            sprintf(path, "player/pl%02d_%03dlg%d.bam", 8, 0, variant);
        }
        namedResourceSlotAssign(owner, 2, path, flags);
    }
}

} /* extern "C" */
