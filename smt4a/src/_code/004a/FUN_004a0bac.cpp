/* NON_MATCHING: 122 lines (163 vs 157 rows): switch-based group dispatch and slotRestore null guard match; retail spills the restored HP of the first inlined copy, hoists 1.25f before group dispatch, and keeps the stock loop limit in r7. */
#include "common.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/GamePlayerData.h"

namespace {

/* A demon slot's record. */
struct SlotRecord {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0e */ s16 maxHp;
    /* 0x10 */ u16 maxMp;
    /* 0x12 */ u8 unk12[0x18];
    /* 0x2a */ u16 hp;
    /* 0x2c */ u16 mp;
    /* 0x2e */ u8 unk2e[0x32];
    /* 0x60 */ u16 status;     /* 2: skip unless forced, 4: keep the flag, 0x400: never restored */
    /* 0x62 */ u16 id;
};

const u16 STATUS_SKIP = 2;
const u16 STATUS_KEEP = 4;
const u16 STATUS_NEVER = 0x400;
}

extern "C" {
SlotRecord *gameGetSlotRecord(s32 slot);
s32 gameSlotTableFindFree(void);
s32 unitHasRankingBonus(u16 id);
}

/* Fully restores a slot's HP/MP (HP gets the 1.25x bonus for ids unitHasRankingBonus accepts). */
static __inline void slotRestore(SlotRecord *record)
{
    if (record == NULL) {
        return;
    }
    record->status = 0;
    s16 hp = record->maxHp;
    if (unitHasRankingBonus(record->id) != 0) {
        hp = (s16)(hp * 1.25f);
    }
    record->hp = hp;
    record->mp = record->maxMp;
}

/* Restores the player and the demon slots of one group (mode 0: party and stock, 1: party, 2/3: reserve);
   slots flagged `STATUS_SKIP` are only restored when `force` is set. */
extern "C" void FUN_004a0bac(u32 mode, s32 force)
{
    if ((mode == 0 || mode == 2 || mode == 3) &&
        (force != 0 || (gameGetPlayerData()->ailments & STATUS_SKIP) == 0) &&
        (gameGetPlayerData()->ailments & STATUS_NEVER) == 0) {
        PlayerDataA *player = gameGetPlayerData();
        player->ailments = 0;
        PlayerDataA *again = gameGetPlayerData();
        again->hp = again->maxHp;
        again->mp = again->maxMp;
        player->hp = player->maxHp;
        player->mp = player->maxMp;
    }
    s32 count = 0;
    const s8 *slots = NULL;
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
        break;
    }
    for (s32 i = 0; i < count; i++) {
        if (slots[i] >= 0) {
            SlotRecord *record = gameGetSlotRecord(slots[i]);
            if ((force != 0 || (record->status & STATUS_SKIP) == 0) && (record->status & STATUS_NEVER) == 0) {
                if ((record->status & STATUS_KEEP) != 0) {
                    slotRestore(record);
                    record->status |= STATUS_KEEP;
                } else {
                    slotRestore(record);
                }
            }
        }
    }
    if (mode == 0) {
        for (s32 i = 0; i < 12; i++) {
            SlotRecord *record = (u16)i < 12 ? (SlotRecord *)&gameGetSlotTable()->slots[(u16)i] : NULL;
            if ((force != 0 || (record->status & STATUS_SKIP) == 0) && (record->status & STATUS_NEVER) == 0) {
                slotRestore(record);
            }
        }
    }
}
