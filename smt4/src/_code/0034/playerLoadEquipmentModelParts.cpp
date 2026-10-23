#include "shard/W6_W6Match2_RankedTableRecord.h"

extern "C" {
s32 FUN_0023cef0(void *model, s32 part, u32 group, u32 variant, s32 mode);
void FUN_0023f2e4(void *model, s32 part, const char *path, u32 flags);
s32 textFormatBuffer(char *output, const char *format, ...);

// Resolve and load the equipped head, body and leg model resource paths.
void playerLoadEquipmentModelParts(void *model, const PlayerEquipmentAppearance *equipment, u32 flags)
{
    if (!equipment)
        return;
    char path[64];
    RankedTableRecord *record = dataTable08Sub2GetRecord(equipment->head);
    s32 appearance = FUN_0023cef0(model, 0, record->model.group, record->model.variant, 0);
    textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", record->model.group, record->model.variant, appearance);
    FUN_0023f2e4(model, 0, path, flags);
    record = dataTable08Sub2GetRecord(equipment->body);
    FUN_0023cef0(model, 0, record->model.group, record->model.variant, 0);
    textFormatBuffer(path, "player/pl%02d_%03dbd0.bam", record->model.group, record->model.variant);
    FUN_0023f2e4(model, 1, path, flags);
    record = dataTable08Sub2GetRecord(equipment->legs);
    appearance = FUN_0023cef0(model, 2, record->model.group, record->model.variant, 0);
    textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", record->model.group, record->model.variant, appearance);
    FUN_0023f2e4(model, 2, path, flags);
}
}
