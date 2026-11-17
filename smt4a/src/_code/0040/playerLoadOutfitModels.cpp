#include "camp/CampCec/OutfitPreview.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {
u32 FUN_0040b11c(void *owner, u32 part, u32 group, u32 model, u32 flags);
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_003e573c(void *owner, u32 part, const char *path, u32 flags);
u32 FUN_004085a8(u32 group, u32 model); /* answers 1 */
}

extern "C" void playerLoadOutfitModels(void *owner, const OutfitPreviewEquipment *equipment, u32 flags)
{
    if (equipment == NULL)
        return;

    char path[64];
    EquipmentRecordA *record = itemTableGetEquipmentRecord(equipment->slots[3]);
    u32 variant = FUN_0040b11c(owner, 0, record->modelGroup, record->model, 0);
    if (FUN_004085a8(record->modelGroup, record->model)) {
        textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", record->modelGroup, record->model, variant);
    } else {
        variant = FUN_0040b11c(owner, 0, 8, 0, 0);
        textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", 8, 0, variant);
    }
    FUN_003e573c(owner, 0, path, flags);

    record = itemTableGetEquipmentRecord(equipment->slots[4]);
    variant = FUN_0040b11c(owner, 1, record->modelGroup, record->model, 0);
    if (FUN_004085a8(record->modelGroup, record->model)) {
        textFormatBuffer(path, "player/pl%02d_%03dbd%d.bam", record->modelGroup, record->model, variant);
    } else {
        textFormatBuffer(path, "player/pl%02d_%03dbd0.bam", 8, 0);
    }
    FUN_003e573c(owner, 1, path, flags);

    record = itemTableGetEquipmentRecord(equipment->slots[5]);
    variant = FUN_0040b11c(owner, 2, record->modelGroup, record->model, 0);
    if (FUN_004085a8(record->modelGroup, record->model)) {
        textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", record->modelGroup, record->model, variant);
    } else {
        variant = FUN_0040b11c(owner, 2, 8, 0, 0);
        textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", 8, 0, variant);
    }
    FUN_003e573c(owner, 2, path, flags);
}
