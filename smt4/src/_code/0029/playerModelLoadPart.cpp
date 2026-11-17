#include "common.h"
#include "status/StatusBustUp.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 FUN_0023cef0(u32 model, s32 part, u16 set, u16 variant, s32 e);
s32 textFormatBuffer(char *output, const char *format, ...);
void FUN_0023f2e4(u32 model, s32 part, const char *path, u32 d);

/* Loads the player's model part (0 head, 1 body, 2 legs) from the .bam file of the equipped item. */
void playerModelLoadPart(u32 model, s32 part, u32 d)
{
    PlayerDataIV *player = gameGetPlayerData();
    EquipmentRecord *record;
    char path[64];

    switch (part) {
    case 0:
        record = itemTableGetEquipmentRecord(player->equipped.head);
        textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", record->modelGroup, record->model,
                         FUN_0023cef0(model, 0, record->modelGroup, record->model, 0));
        break;
    case 1:
        record = itemTableGetEquipmentRecord(player->equipped.body);
        textFormatBuffer(path, "player/pl%02d_%03dbd0.bam", record->modelGroup, record->model);
        break;
    case 2:
        record = itemTableGetEquipmentRecord(player->equipped.legs);
        textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", record->modelGroup, record->model,
                         FUN_0023cef0(model, 2, record->modelGroup, record->model, 0));
        break;
    }
    FUN_0023f2e4(model, part, path, d);
}

} /* extern "C" */
