/* NON_MATCHING: float register allocation/scheduling differs (retail keeps the percent damage in s23, the group count in r5 and a shared zero in sl); logic and calls are identical. */
#include "common.h"
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/SaveSlotTable.h"

namespace {
/* The player's save record (only the fields the damage touches). */
struct PlayerRecord {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ s16 maxHp;
    /* 0x1e */ u16 maxMp;
    /* 0x20 */ u8 unk20[10];
    /* 0x2a */ s16 hp;
    /* 0x2c */ u16 mp;
    /* 0x2e */ u8 unk2e[0x30];
    /* 0x5e */ u16 status;
};

/* A demon slot's record. */
struct SlotRecord {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0e */ s16 maxHp;
    /* 0x10 */ u16 maxMp;
    /* 0x12 */ u8 unk12[0x18];
    /* 0x2a */ s16 hp;
    /* 0x2c */ u16 mp;
    /* 0x2e */ u8 unk2e[0x32];
    /* 0x60 */ u16 status;     /* 2: not affected, 0x400: never affected */
    /* 0x62 */ u16 id;
};

/* The slot table: which slots are in the party and their records. */
struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x1c88];
    /* 0x1c88 */ s8 party[0x18];
    /* 0x1ca0 */ s8 reserve[3];
};

const u16 STATUS_PROTECTED = 2;
const u16 STATUS_NEVER = 0x400;
}

extern "C" {
SlotRecord *gameGetSlotRecord(s32 slot);
s32 gameSlotTableFindFree(void);
s32 unitHasRankingBonus(u16 id);
void FUN_00408184(s32 kind, s32 amount);
}

/* The slot's HP limit (with the 1.25x bonus for ids unitHasRankingBonus accepts). */
static __inline s32 slotHpLimit(const SlotRecord *record)
{
    s32 limit = record->maxHp;
    if (unitHasRankingBonus(record->id) != 0) {
        limit = (s16)(s32)((f32)limit * 1.25f);
    }
    return limit;
}

/* `hp` limited to 1..`limit` (the limit wins when it is below `hp`). */
static __inline s32 limitHp(s32 hp, s32 limit)
{
    if (hp > limit) {
        return limit;
    }
    if (hp < 1) {
        hp = 1;
    }
    return hp;
}

/* Damages the player and the demon slots of one group (mode 0 party and reserve member 0, 1 party, 2/3 reserve)
   by `percent` of their maximum HP (at least 1, leaving at least 1 HP) and shows the total as a damage number. */
extern "C" void FUN_0049fe58(u32 mode, f32 percent)
{
    if (!(percent > 0.0f)) {
        return;
    }
    if ((mode == 0 || mode == 2 || mode == 3) && (reinterpret_cast<PlayerRecord *>(gameGetPlayerData())->status & STATUS_PROTECTED) == 0 &&
        (reinterpret_cast<PlayerRecord *>(gameGetPlayerData())->status & STATUS_NEVER) == 0) {
        f32 maxHp = (f32)reinterpret_cast<PlayerRecord *>(gameGetPlayerData())->maxHp;
        f32 hp = (f32)reinterpret_cast<PlayerRecord *>(gameGetPlayerData())->hp;
        f32 damage = maxHp * percent * 0.01f;
        if (!(damage > 0.0f)) {
            damage = 1.0f;
        }
        f32 remaining = hp - damage;
        if (!(remaining > 0.0f)) {
            remaining = 1.0f;
        }
        s16 newHp = (s16)(s32)remaining;
        PlayerRecord *player = reinterpret_cast<PlayerRecord *>(gameGetPlayerData());
        player->hp = limitHp(newHp, player->maxHp);
        if (hp - remaining > 0.0f) {
            FUN_00408184(0x17, (s32)hp - (s32)remaining);
        }
    }
    s32 count;
    const s8 *slots;
    switch (mode) {
    case 0:
    case 1:
        count = gameSlotTableFindFree();
        slots = gameGetSlotTable()->party;
        break;
    case 2:
    case 3:
        count = 3;
        slots = gameGetSlotTable()->reserve;
        break;
    default:
        return;
    }
    for (s32 i = 0; i < count; i++) {
        if (slots[i] < 0) {
            continue;
        }
        SlotRecord *record = gameGetSlotRecord(slots[i]);
        if (record->status & STATUS_PROTECTED) {
            continue;
        }
        if (record->status & STATUS_NEVER) {
            continue;
        }
        s32 limit = record == NULL ? 0 : slotHpLimit(record);
        f32 hp = (f32)record->hp;
        f32 damage = (f32)limit * percent * 0.01f;
        if (!(damage > 0.0f)) {
            damage = 1.0f;
        }
        f32 remaining = hp - damage;
        if (!(remaining > 0.0f)) {
            remaining = 1.0f;
        }
        s16 newHp = (s16)(s32)remaining;
        if (record != NULL) {
            record->hp = limitHp(newHp, slotHpLimit(record));
        }
        if (hp - remaining > 0.0f) {
            FUN_00408184(0x17, (s32)hp - (s32)remaining);
        }
    }
}
