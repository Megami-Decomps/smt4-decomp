#include "shard/Shard003D.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

typedef struct PlayerWords {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u32 d;
    /* 0x10 */ u16 e;
} PlayerWords;

/* Copies the player's four words at +0x34 into `out`; with `withUnit` also the unit's halfword at +0x3A. */
void playerGetWords(PlayerWords *out, s32 withUnit)
{
    PlayerDataA *player = gameGetPlayerData();
    EquipmentRecordA *unit;

    out->a = player->skillWords[0];
    out->b = player->skillWords[1];
    out->c = player->skillWords[2];
    out->d = player->skillWords[3];
    if (withUnit != 0) {
        unit = dataTable08Sub2GetRecord(player->equipped.accessory);
        if (unit != NULL) {
            out->e = unit->modifierId;
        }
    }
}

} /* extern "C" */
