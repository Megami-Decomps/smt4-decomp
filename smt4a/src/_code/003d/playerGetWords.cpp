#include "shard/Shard003D.h"

extern "C" {

typedef struct PlayerWords {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u32 d;
    /* 0x10 */ u16 e;
} PlayerWords;

typedef struct UnitHalf3A {
    /* 0x00 */ u8 unk00[0x3A];
    /* 0x3A */ u16 unk3A;
} UnitHalf3A;

extern PlayerData *gameGetPlayerData(void);
extern UnitHalf3A *dataTable08Sub2GetRecord(u32 id);

/* Copies the player's four words at +0x34 into `out`; with `withUnit` also the unit's halfword at +0x3A. */
void playerGetWords(PlayerWords *out, s32 withUnit)
{
    PlayerData *player = gameGetPlayerData();
    UnitHalf3A *unit;

    out->a = player->unk34;
    out->b = player->unk38;
    out->c = player->unk3C;
    out->d = player->unk40;
    if (withUnit != 0) {
        unit = dataTable08Sub2GetRecord(player->unk0C);
        if (unit != NULL) {
            out->e = unit->unk3A;
        }
    }
}

} /* extern "C" */
