#include <stdio.h>
#include "camp/CampCec/OutfitPreview.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {
u32 connectionTableFindVariant(void *owner, u32 part, u32 group, u32 model, u32 flags);
void namedResourceSlotAssign(void *owner, u32 part, const char *path, u32 flags);
u32 virtualSlotAlwaysTrue(u32 group, u32 model); /* answers 1 */
}

extern "C" void playerLoadOutfitModels(void *owner, const OutfitPreviewEquipment *equipment, u32 flags)
{
    if (equipment == NULL)
        return;

    char path[64];
    EquipmentRecordA *record = itemTableGetEquipmentRecord(equipment->slots[3]);
    u32 variant = connectionTableFindVariant(owner, 0, record->modelGroup, record->model, 0);
    if (virtualSlotAlwaysTrue(record->modelGroup, record->model)) {
        sprintf(path, "player/pl%02d_%03dhd%d.bam", record->modelGroup, record->model, variant);
    } else {
        variant = connectionTableFindVariant(owner, 0, 8, 0, 0);
        sprintf(path, "player/pl%02d_%03dhd%d.bam", 8, 0, variant);
    }
    namedResourceSlotAssign(owner, 0, path, flags);

    record = itemTableGetEquipmentRecord(equipment->slots[4]);
    variant = connectionTableFindVariant(owner, 1, record->modelGroup, record->model, 0);
    if (virtualSlotAlwaysTrue(record->modelGroup, record->model)) {
        sprintf(path, "player/pl%02d_%03dbd%d.bam", record->modelGroup, record->model, variant);
    } else {
        sprintf(path, "player/pl%02d_%03dbd0.bam", 8, 0);
    }
    namedResourceSlotAssign(owner, 1, path, flags);

    record = itemTableGetEquipmentRecord(equipment->slots[5]);
    variant = connectionTableFindVariant(owner, 2, record->modelGroup, record->model, 0);
    if (virtualSlotAlwaysTrue(record->modelGroup, record->model)) {
        sprintf(path, "player/pl%02d_%03dlg%d.bam", record->modelGroup, record->model, variant);
    } else {
        variant = connectionTableFindVariant(owner, 2, 8, 0, 0);
        sprintf(path, "player/pl%02d_%03dlg%d.bam", 8, 0, variant);
    }
    namedResourceSlotAssign(owner, 2, path, flags);
}
