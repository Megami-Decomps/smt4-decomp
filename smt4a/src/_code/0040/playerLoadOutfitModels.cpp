/* NON_MATCHING: retail retains constant-true validation branches and unreachable fallback model paths; their original validation hook is unknown. */
#include "common.h"

struct OutfitEquipment {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 head;
    /* 0x08 */ u16 body;
    /* 0x0A */ u16 legs;
};
struct OutfitModelRecord {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u16 group;
    /* 0x42 */ u16 model;
};
extern "C" {
OutfitModelRecord *dataTable08Sub2GetRecord(u32 id);
u32 FUN_0040b11c(void *owner, u32 part, u32 group, u32 model, u32 flags);
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_003e573c(void *owner, u32 part, const char *path, u32 flags);
}

extern "C" void playerLoadOutfitModels(void *owner, const OutfitEquipment *equipment, u32 flags)
{
    if (equipment == NULL)
        return;

    char path[64];
    OutfitModelRecord *record = dataTable08Sub2GetRecord(equipment->head);
    u32 variant = FUN_0040b11c(owner, 0, record->group, record->model, 0);
    textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", record->group, record->model, variant);
    FUN_003e573c(owner, 0, path, flags);

    record = dataTable08Sub2GetRecord(equipment->body);
    variant = FUN_0040b11c(owner, 1, record->group, record->model, 0);
    textFormatBuffer(path, "player/pl%02d_%03dbd%d.bam", record->group, record->model, variant);
    FUN_003e573c(owner, 1, path, flags);

    record = dataTable08Sub2GetRecord(equipment->legs);
    variant = FUN_0040b11c(owner, 2, record->group, record->model, 0);
    textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", record->group, record->model, variant);
    FUN_003e573c(owner, 2, path, flags);
}
