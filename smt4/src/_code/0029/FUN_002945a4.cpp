/* NON_MATCHING: the prologue reserves its stack before copying the model argument instead of after; all remaining instructions agree. */
#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {
u32 FUN_0023cef0(u32 model, s32 part, u16 group, u16 variant, u16 bodyEquipment);
void FUN_0023f2e4(u32 model, s32 part, const char* path, u32 option);
s32 textFormatBuffer(char* destination, const char* format, ...);

// Replace one outfit part; changing the body also refreshes compatible head and leg models.
void FUN_002945a4(u32 model, s32 part, u16 equipment, u32 option)
{
    EquipmentRecord* record = itemTableGetEquipmentRecord(equipment);
    char path[64];
    switch (part) {
    case 0: {
        if (record->slot != 4) {
            return;
        }
        u32 variant = FUN_0023cef0(model, 0, record->modelGroup, record->model, 0);
        textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", record->modelGroup, record->model, variant);
        break;
    }
    case 1:
        if (record->slot != 5) {
            return;
        }
        textFormatBuffer(path, "player/pl%02d_%03dbd0.bam", record->modelGroup, record->model);
        break;
    case 2: {
        if (record->slot != 6) {
            return;
        }
        u32 variant = FUN_0023cef0(model, 2, record->modelGroup, record->model, 0);
        textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", record->modelGroup, record->model, variant);
        break;
    }
    }
    FUN_0023f2e4(model, part, path, option);
    if (part == 1) {
        PlayerEquipmentAppearance* player = reinterpret_cast<PlayerEquipmentAppearance*>(gameGetPlayerData());
        record = itemTableGetEquipmentRecord(player->head);
        u32 variant = FUN_0023cef0(model, 0, record->modelGroup, record->model, equipment);
        textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", record->modelGroup, record->model, variant);
        FUN_0023f2e4(model, 0, path, option);
        record = itemTableGetEquipmentRecord(player->legs);
        variant = FUN_0023cef0(model, 2, record->modelGroup, record->model, equipment);
        textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", record->modelGroup, record->model, variant);
        FUN_0023f2e4(model, 2, path, option);
    }
}
}
