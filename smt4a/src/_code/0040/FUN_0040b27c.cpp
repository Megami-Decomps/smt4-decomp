/* NON_MATCHING: only the prologue differs (retail copies r0 into r8 before `sub sp, sp, #72`, the build reserves the stack first), as in the smt4 twin FUN_002945a4. */
#include "common.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
u32 FUN_0040b11c(void *owner, u32 part, u32 group, u32 model, u32 flags);
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_003e573c(void *owner, u32 part, const char *path, u32 flags);
u32 FUN_004085a8(u32 group, u32 model); /* answers 1 */

/* Replaces one outfit part (0 head, 1 body, 2 legs) of the model with the equipment's; changing the head
 * also refreshes the body, changing the body the head and legs. A model the check rejects falls back to
 * group 8, model 0. */
void FUN_0040b27c(void *owner, u32 part, u16 equipment, u32 flags)
{
    EquipmentRecordA *record = dataTable08Sub2GetRecord(equipment);
    char path[64];
    switch (part) {
    case 0: {
        if (record->slot != 4) {
            return;
        }
        u32 variant = FUN_0040b11c(owner, 0, record->modelGroup, record->model, 0);
        if (FUN_004085a8(record->modelGroup, record->model)) {
            textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", record->modelGroup, record->model, variant);
        } else {
            variant = FUN_0040b11c(owner, 0, 8, 0, 0);
            textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", 8, 0, variant);
        }
        break;
    }
    case 1: {
        if (record->slot != 5) {
            return;
        }
        u32 variant = FUN_0040b11c(owner, 1, record->modelGroup, record->model, 0);
        if (FUN_004085a8(record->modelGroup, record->model)) {
            textFormatBuffer(path, "player/pl%02d_%03dbd%d.bam", record->modelGroup, record->model, variant);
        } else {
            textFormatBuffer(path, "player/pl%02d_%03dbd0.bam", 8, 0);
        }
        break;
    }
    case 2: {
        if (record->slot != 6) {
            return;
        }
        u32 variant = FUN_0040b11c(owner, 2, record->modelGroup, record->model, 0);
        if (FUN_004085a8(record->modelGroup, record->model)) {
            textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", record->modelGroup, record->model, variant);
        } else {
            variant = FUN_0040b11c(owner, 2, 8, 0, 0);
            textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", 8, 0, variant);
        }
        break;
    }
    }
    FUN_003e573c(owner, part, path, flags);
    if (part == 0) {
        PlayerDataA *player = gameGetPlayerData();
        record = dataTable08Sub2GetRecord(player->equipped.body);
        u32 variant = FUN_0040b11c(owner, 1, record->modelGroup, record->model, equipment);
        if (FUN_004085a8(record->modelGroup, record->model)) {
            textFormatBuffer(path, "player/pl%02d_%03dbd%d.bam", record->modelGroup, record->model, variant);
        } else {
            variant = FUN_0040b11c(owner, 1, 8, 0, equipment);
            textFormatBuffer(path, "player/pl%02d_%03dbd%d.bam", 8, 0, variant);
        }
        FUN_003e573c(owner, 1, path, flags);
    } else if (part == 1) {
        PlayerDataA *player = gameGetPlayerData();
        record = dataTable08Sub2GetRecord(player->equipped.head);
        u32 variant = FUN_0040b11c(owner, 0, record->modelGroup, record->model, equipment);
        if (FUN_004085a8(record->modelGroup, record->model)) {
            textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", record->modelGroup, record->model, variant);
        } else {
            variant = FUN_0040b11c(owner, 0, 8, 0, equipment);
            textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", 8, 0, variant);
        }
        FUN_003e573c(owner, 0, path, flags);
        record = dataTable08Sub2GetRecord(player->equipped.legs);
        variant = FUN_0040b11c(owner, 2, record->modelGroup, record->model, equipment);
        if (FUN_004085a8(record->modelGroup, record->model)) {
            textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", record->modelGroup, record->model, variant);
        } else {
            variant = FUN_0040b11c(owner, 2, 8, 0, equipment);
            textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", 8, 0, variant);
        }
        FUN_003e573c(owner, 2, path, flags);
    }
}

} /* extern "C" */
