/* NON_MATCHING: register allocation and scheduling only - retail spills the restored HP of the first inlined copy to the stack, hoists the 1.25f constant before the group dispatch and keeps the stock loop limit in r7; control flow and calls are identical. */
#include "common.h"

namespace {
/* The player's save record (only the fields the restore touches). */
struct PlayerRecord {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u16 maxHp;
    /* 0x1e */ u16 maxMp;
    /* 0x20 */ u8 unk20[10];
    /* 0x2a */ u16 hp;
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
    /* 0x2a */ u16 hp;
    /* 0x2c */ u16 mp;
    /* 0x2e */ u8 unk2e[0x32];
    /* 0x60 */ u16 status;     /* 2: skip unless forced, 4: keep the flag, 0x400: never restored */
    /* 0x62 */ u16 id;
};

/* The slot table: which slots are in the party and their records. */
struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x1c88];
    /* 0x1c88 */ s8 party[0x18];
    /* 0x1ca0 */ s8 reserve[3];
    /* 0x1ca3 */ u8 unk1ca3[0x139];
    /* 0x1ddc */ SlotRecord stock[12];
};

const u16 STATUS_SKIP = 2;
const u16 STATUS_KEEP = 4;
const u16 STATUS_NEVER = 0x400;
}

extern "C" {
PlayerRecord *gameGetPlayerData(void);
SlotRecord *gameGetSlotRecord(s32 slot);
SlotTable *gameGetSlotTable(void);
s32 gameSlotTableFindFree(void);
s32 FUN_0018416c(u16 id);
}

/* Fully restores a slot's HP/MP (HP gets the 1.25x bonus for ids FUN_0018416c accepts). */
static __inline void slotRestore(SlotRecord *record)
{
    record->status = 0;
    s16 hp = record->maxHp;
    if (FUN_0018416c(record->id) != 0) {
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
        (force != 0 || (gameGetPlayerData()->status & STATUS_SKIP) == 0) &&
        (gameGetPlayerData()->status & STATUS_NEVER) == 0) {
        PlayerRecord *player = gameGetPlayerData();
        player->status = 0;
        PlayerRecord *again = gameGetPlayerData();
        again->hp = again->maxHp;
        again->mp = again->maxMp;
        player->hp = player->maxHp;
        player->mp = player->maxMp;
    }
    if (mode == 0 || mode == 1 || mode == 2 || mode == 3) {
        s32 count;
        const s8 *slots;
        if (mode < 2) {
            count = gameSlotTableFindFree();
            slots = gameGetSlotTable()->party;
        } else {
            count = 3;
            slots = gameGetSlotTable()->reserve;
        }
        for (s32 i = 0; i < count; i++) {
            if (slots[i] >= 0) {
                SlotRecord *record = gameGetSlotRecord(slots[i]);
                if ((force != 0 || (record->status & STATUS_SKIP) == 0) && (record->status & STATUS_NEVER) == 0) {
                    if ((record->status & STATUS_KEEP) != 0) {
                        if (record != NULL) {
                            slotRestore(record);
                        }
                        record->status |= STATUS_KEEP;
                    } else if (record != NULL) {
                        slotRestore(record);
                    }
                }
            }
        }
    }
    if (mode == 0) {
        for (s32 i = 0; i < 12; i++) {
            SlotRecord *record = (u16)i < 12 ? &gameGetSlotTable()->stock[(u16)i] : NULL;
            if ((force != 0 || (record->status & STATUS_SKIP) == 0) && (record->status & STATUS_NEVER) == 0 &&
                record != NULL) {
                slotRestore(record);
            }
        }
    }
}
