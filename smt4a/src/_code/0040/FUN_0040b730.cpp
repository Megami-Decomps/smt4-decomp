/* NON_MATCHING: retail retains constant-true validation branches and unreachable fallback model paths (the else branches build "player/pl%02d_%03d.." with group 8, model 0); their original validation hook is unknown. */
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
OutfitEquipment *gameGetPlayerData(void);
OutfitModelRecord *dataTable08Sub2GetRecord(u32 id);
u32 FUN_0040b11c(void *owner, u32 part, u32 group, u32 model, u32 flags);
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_003e573c(void *owner, u32 part, const char *path, u32 flags);

/* Loads the model of one outfit part of the player (0 head, 1 body, 2 legs). */
void FUN_0040b730(void *owner, u32 part, u32 flags)
{
    OutfitEquipment *equipment = gameGetPlayerData();
    char path[64];
    if (part == 0) {
        OutfitModelRecord *record = dataTable08Sub2GetRecord(equipment->head);
        u32 variant = FUN_0040b11c(owner, 0, record->group, record->model, 0);
        textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", record->group, record->model, variant);
    } else if (part == 1) {
        OutfitModelRecord *record = dataTable08Sub2GetRecord(equipment->body);
        u32 variant = FUN_0040b11c(owner, 1, record->group, record->model, 0);
        textFormatBuffer(path, "player/pl%02d_%03dbd%d.bam", record->group, record->model, variant);
    } else if (part == 2) {
        OutfitModelRecord *record = dataTable08Sub2GetRecord(equipment->legs);
        u32 variant = FUN_0040b11c(owner, 2, record->group, record->model, 0);
        textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", record->group, record->model, variant);
    }
    FUN_003e573c(owner, part, path, flags);
}

} /* extern "C" */
