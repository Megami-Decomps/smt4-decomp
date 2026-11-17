#include "common.h"
#include "status/StatusBustUp.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* The player's equipped head, body and leg items. */
typedef struct PlayerEquipView {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 head;
    /* 0x08 */ u16 body;
    /* 0x0A */ u16 legs;
} PlayerEquipView;

PlayerEquipView *gameGetPlayerData(void);
s32 FUN_0023cef0(u32 model, s32 part, u16 set, u16 variant, s32 e);
s32 textFormatBuffer(char *output, const char *format, ...);
void FUN_0023f2e4(u32 model, s32 part, const char *path, u32 d);

/* Loads the player's model part (0 head, 1 body, 2 legs) from the .bam file of the equipped item. */
void playerModelLoadPart(u32 model, s32 part, u32 d)
{
    PlayerEquipView *player = gameGetPlayerData();
    EquipmentRecord *record;
    char path[64];

    switch (part) {
    case 0:
        record = dataTable08Sub2GetRecord(player->head);
        textFormatBuffer(path, "player/pl%02d_%03dhd%d.bam", record->modelGroup, record->model,
                         FUN_0023cef0(model, 0, record->modelGroup, record->model, 0));
        break;
    case 1:
        record = dataTable08Sub2GetRecord(player->body);
        textFormatBuffer(path, "player/pl%02d_%03dbd0.bam", record->modelGroup, record->model);
        break;
    case 2:
        record = dataTable08Sub2GetRecord(player->legs);
        textFormatBuffer(path, "player/pl%02d_%03dlg%d.bam", record->modelGroup, record->model,
                         FUN_0023cef0(model, 2, record->modelGroup, record->model, 0));
        break;
    }
    FUN_0023f2e4(model, part, path, d);
}

} /* extern "C" */
