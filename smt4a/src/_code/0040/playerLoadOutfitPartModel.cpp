#include "common.h"
#include <stdio.h>
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
u32 connectionTableFindVariant(void *owner, u32 part, u32 group, u32 model, u32 flags);
void namedResourceSlotAssign(void *owner, u32 part, const char *path, u32 flags);
u32 virtualSlotAlwaysTrue(u32 group, u32 model); /* answers 1 */

/* Loads the model of one outfit part of the player (0 head, 1 body, 2 legs); a model the check rejects
 * falls back to group 8, model 0. */
void playerLoadOutfitPartModel(void *owner, u32 part, u32 flags)
{
    PlayerDataA *equipment = gameGetPlayerData();
    char path[64];
    switch (part) {
    case 0: {
        EquipmentRecordA *record = itemTableGetEquipmentRecord(equipment->equipped.head);
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
        EquipmentRecordA *record = itemTableGetEquipmentRecord(equipment->equipped.body);
        u32 variant = connectionTableFindVariant(owner, 1, record->modelGroup, record->model, 0);
        if (virtualSlotAlwaysTrue(record->modelGroup, record->model)) {
            sprintf(path, "player/pl%02d_%03dbd%d.bam", record->modelGroup, record->model, variant);
        } else {
            sprintf(path, "player/pl%02d_%03dbd0.bam", 8, 0);
        }
        break;
    }
    case 2: {
        EquipmentRecordA *record = itemTableGetEquipmentRecord(equipment->equipped.legs);
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
}

} /* extern "C" */
