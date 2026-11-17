#include "code/Code0028_Smt4.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

typedef struct Dest {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u16 unk10;
} Dest;

void FUN_00283f30(Dest *dest, int withSource)
{
    PlayerDataIV *player = gameGetPlayerData();
    EquipmentRecord *source;

    dest->unk00 = player->skillWords[0];
    dest->unk04 = player->skillWords[1];
    dest->unk08 = player->skillWords[2];
    dest->unk0C = player->skillWords[3];
    if (withSource != 0) {
        source = dataTable08Sub2GetRecord(player->equipped.accessory);
        if (source != NULL) {
            dest->unk10 = source->modifierId;
        }
    }
}

} /* extern "C" */
