#include <stdio.h>
#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {
s32 playerModelPartCompatibleWithBody(void *model, s32 part, u32 group, u32 variant, s32 mode);
void playerModelLoadSlot(void *model, s32 part, const char *path, u32 flags);

// Resolve and load the equipped head, body and leg model resource paths.
void playerLoadEquipmentModelParts(void *model, const PlayerEquipmentAppearance *equipment, u32 flags)
{
    if (!equipment)
        return;
    char path[64];
    EquipmentRecord *record = itemTableGetEquipmentRecord(equipment->head);
    s32 appearance = playerModelPartCompatibleWithBody(model, 0, record->modelGroup, record->model, 0);
    sprintf(path, "player/pl%02d_%03dhd%d.bam", record->modelGroup, record->model, appearance);
    playerModelLoadSlot(model, 0, path, flags);
    record = itemTableGetEquipmentRecord(equipment->body);
    playerModelPartCompatibleWithBody(model, 0, record->modelGroup, record->model, 0);
    sprintf(path, "player/pl%02d_%03dbd0.bam", record->modelGroup, record->model);
    playerModelLoadSlot(model, 1, path, flags);
    record = itemTableGetEquipmentRecord(equipment->legs);
    appearance = playerModelPartCompatibleWithBody(model, 2, record->modelGroup, record->model, 0);
    sprintf(path, "player/pl%02d_%03dlg%d.bam", record->modelGroup, record->model, appearance);
    playerModelLoadSlot(model, 2, path, flags);
}
}
