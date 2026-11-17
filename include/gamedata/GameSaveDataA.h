/* gamedata/GameData.c (Apocalypse): the save block g_gameDataBlocks.saveBlock points at and the records inside
 * it (the slot table gameGetSlotTable() returns and the unit records gameGetSlotRecord() returns). IV's layouts
 * are in gamedata/GameSaveData.h; the globals and getters are declared in gamedata/GameSaveBlocks.h. */
#ifndef GAMEDATA_GAMESAVEDATAA_H
#define GAMEDATA_GAMESAVEDATAA_H

#include "common.h"
#include "gamedata/GameData.h"
#include "gamedata/PlayerRecordParts.h"
#include "shard/W6_W6Match1_PartySlot.h"
#include <stddef.h>

/* Apocalypse: the player's record (save block + 0x90, 0x64 bytes), returned by gameGetPlayerData(). Its layout
 * is the prefix of a unit record's (SlotRecordA); IV's record is PlayerDataIV (gamedata/GameSaveData.h). */
typedef struct PlayerDataA {
    union {
        /* 0x00 */ u16 equipment[7];
        /* 0x00 */ PlayerEquipment equipped;
    };
    struct {
        /* 0x0E */ u16 hp;
        /* 0x10 */ u16 mp;
        /* 0x12 */ s16 stats[5];
    } baseStats;                   /* without equipment */
    /* 0x1C */ s16 maxHp;
    /* 0x1E */ s16 maxMp;
    /* 0x20 */ s16 stats[5];       /* with equipment */
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2E[2];
    /* 0x30 */ u32 experience;
    union {
        /* 0x34 */ u16 skills[8];
        /* 0x34 */ u32 skillWords[4];  /* the same ids, copied as words */
    };
    /* 0x44 */ s8 skillRanks[8];
    /* 0x4C */ u16 name[9];
    /* 0x5E */ u16 ailments;       /* bit 1: down (0 HP), bit 10: cannot lose HP */
    /* 0x60 */ s16 alignment;
    /* 0x62 */ u16 level;
} PlayerDataA;

typedef char PlayerDataAOffsetCheck[offsetof(PlayerDataA, baseStats.stats) == 0x12 && offsetof(PlayerDataA, maxHp) == 0x1C &&
    offsetof(PlayerDataA, stats) == 0x20 && offsetof(PlayerDataA, hp) == 0x2A && offsetof(PlayerDataA, experience) == 0x30 &&
    offsetof(PlayerDataA, skills) == 0x34 && offsetof(PlayerDataA, skillRanks) == 0x44 && offsetof(PlayerDataA, name) == 0x4C &&
    offsetof(PlayerDataA, ailments) == 0x5E && offsetof(PlayerDataA, alignment) == 0x60 &&
    offsetof(PlayerDataA, level) == 0x62 && sizeof(PlayerDataA) == 0x64 ? 1 : -1];

/* Apocalypse: a party unit record of the slot table, returned by gameGetSlotRecord() (0x12C bytes). */
typedef struct SlotRecordA {
    /* 0x000 */ u8 unk000[0x60];
    /* 0x060 */ u16 statusMask;
    /* 0x062 */ u16 entryId;
    /* 0x064 */ u16 sortKey;
    /* 0x066 */ u8 unk066[0xC6];
} SlotRecordA;

/* Apocalypse: the save block's slot table (save block + 0x8C), returned by gameGetSlotTable(): the party
 * money, the unit records of the 24 slots, the party/reserve slot maps and the player and stock slots. */
typedef struct SaveSlotTable {
    /* 0x0000 */ s32 money;
    /* 0x0004 */ PlayerDataA hero;              /* the player's record, returned by gameGetPlayerData() */
    /* 0x0068 */ SlotRecordA entries[24];
    /* 0x1C88 */ s8 party[24];            /* entry index of each party position, -1 = empty */
    /* 0x1CA0 */ s8 reserve[3];           /* entry index of each reserve position, -1 = empty */
    /* 0x1CA3 */ u8 count;
    /* 0x1CA4 */ PartySlotA player;
    /* 0x1DD8 */ u8 unk1DD8[4];
    /* 0x1DDC */ PartySlotA slots[12];
    /* 0x2C4C */ u16 preferredId;
} SaveSlotTable;

typedef char SlotRecordAOffsetCheck[offsetof(SlotRecordA, statusMask) == 0x60 && offsetof(SlotRecordA, sortKey) == 0x64 &&
    sizeof(SlotRecordA) == 0x12C ? 1 : -1];
typedef char SaveSlotTableOffsetCheck[offsetof(SaveSlotTable, entries) == 0x68 && offsetof(SaveSlotTable, party) == 0x1C88 &&
    offsetof(SaveSlotTable, hero) == 0x4 && offsetof(SaveSlotTable, reserve) == 0x1CA0 && offsetof(SaveSlotTable, count) == 0x1CA3 &&
    offsetof(SaveSlotTable, player) == 0x1CA4 && offsetof(SaveSlotTable, slots) == 0x1DDC &&
    offsetof(SaveSlotTable, preferredId) == 0x2C4C && sizeof(SaveSlotTable) == 0x2C50 ? 1 : -1];

/* Apocalypse: one saved item record (0x50 bytes, 0x501 of them). */
typedef struct GameSavedItemA {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ s8 flags;
    /* 0x17 */ u8 unk17[0x1F];
    /* 0x36 */ u16 bits;
    /* 0x38 */ u8 unk38[0x16];
    /* 0x4E */ s16 counter;
} GameSavedItemA;

typedef struct GameSavedRecordA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u8 flag0e;
    /* 0x0F */ u8 flags;
} GameSavedRecordA;

typedef struct GameSavedPairA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} GameSavedPairA;

/* Apocalypse: the save body (0x2A71C bytes), copied to and from the work block; it follows the save block's
 * 0x88-byte header. Offsets are from the body; add 0x88 for the save block offset. */
typedef struct GameSaveBodyA {
    /* 0x00000 */ u8 unk00000[0x3];
    /* 0x00003 */ u8 option;
    /* 0x00004 */ SaveSlotTable slots;
    /* 0x02C54 */ u8 unk02C54[0x8C];
    /* 0x02CE0 */ u8 area2CE0[4];
    /* 0x02CE4 */ u8 unk02CE4[0x4C];
    /* 0x02D30 */ u32 unk02D30;
    /* 0x02D34 */ u8 unk02D34[0x268C];
    /* 0x053C0 */ u32 unk053C0;
    /* 0x053C4 */ u8 unk053C4[0xAC0];
    /* 0x05E84 */ GameSavedItemA items[0x501];
    /* 0x1EED4 */ u8 block1EED4[0x2554];
    /* 0x21428 */ u8 block21428[0xA0];
    /* 0x214C8 */ u8 block214C8[0xC0];
    /* 0x21588 */ u8 unk21588;
    /* 0x21589 */ u8 unk21589[0x3];
    union {
        /* 0x2158C */ u32 table[0x1A1D];
        struct {
            /* 0x2158C */ u8 unk2158C[0x800];
            /* 0x21D8C */ u32 unk21D8C;
            /* 0x21D90 */ u32 unk21D90;
        } runtime;
        struct {
            u8 prefix[0x5B38];
            /* 0x270C4 */ GameSavedPairA entries[1];
        } pairs;
    };
    /* 0x27E00 */ GameSavedRecordA record;
    /* 0x27E10 */ u8 unk27E10[0xE];
    /* 0x27E1E */ u8 saveState;
    /* 0x27E1F */ u8 unk27E1F;
    /* 0x27E20 */ u8 block27E20[0x12];
    /* 0x27E32 */ u8 unk27E32;
    /* 0x27E33 */ u8 unk27E33[0x1D];
    /* 0x27E50 */ u8 entryFlags[0x3F];
    /* 0x27E8F */ u8 unk27E8F;
    union {
        /* 0x27E90 */ u8 unk27E90[0x288C];
        struct {
            /* 0x27E90 */ u8 values[4];    /* the title configuration's saved setting bytes */
            /* 0x27E94 */ u8 saved;        /* nonzero once the settings were saved */
        } titleConfig;
        struct {
            u8 prefix[0x28];
            /* 0x27EB8 */ u8 savedFlags[0x2864];
        } work;
        struct {
            u8 prefix[0x1AC];
            /* 0x2803C */ u16 halves[1];
        } halves;
        struct {
            u8 prefix[0x438];
            /* 0x282C8 */ u8 area282C8[4];
        } area;
        struct {
            u8 prefix[0x500];
            /* 0x28390 */ u8 block28390[1];
        } tail;
    };
} GameSaveBodyA;

/* Apocalypse: the save block (allocation 0x2A7A4 bytes). */
typedef struct GameSaveDataA {
    /* 0x00000 */ u8 header[0x88];
    /* 0x00088 */ GameSaveBodyA body;
} GameSaveDataA;

typedef char GameSavedItemAOffsetCheck[sizeof(GameSavedItemA) == 0x50 && offsetof(GameSavedItemA, flags) == 0x16 &&
    offsetof(GameSavedItemA, bits) == 0x36 && offsetof(GameSavedItemA, counter) == 0x4E ? 1 : -1];
typedef char GameSaveBodyAOffsetCheck[offsetof(GameSaveBodyA, slots) == 0x4 && offsetof(GameSaveBodyA, area2CE0) == 0x2CE0 &&
    offsetof(GameSaveBodyA, record.unk04) == 0x27E04 && offsetof(GameSaveBodyA, halves.halves) == 0x2803C &&
    offsetof(GameSaveBodyA, area.area282C8) == 0x282C8 && offsetof(GameSaveBodyA, unk02D30) == 0x2D30 && offsetof(GameSaveBodyA, unk053C0) == 0x53C0 &&
    offsetof(GameSaveBodyA, items) == 0x5E84 && offsetof(GameSaveBodyA, block1EED4) == 0x1EED4 &&
    offsetof(GameSaveBodyA, block214C8) == 0x214C8 && offsetof(GameSaveBodyA, runtime.unk21D8C) == 0x21D8C &&
    offsetof(GameSaveBodyA, pairs.entries) == 0x270C4 && offsetof(GameSaveBodyA, record.unk0C) == 0x27E0C &&
    offsetof(GameSaveBodyA, saveState) == 0x27E1E && offsetof(GameSaveBodyA, entryFlags) == 0x27E50 &&
    offsetof(GameSaveBodyA, work.savedFlags) == 0x27EB8 && offsetof(GameSaveBodyA, tail.block28390) == 0x28390 &&
    sizeof(GameSaveBodyA) == 0x2A71C && sizeof(GameSaveDataA) == 0x2A7A4 ? 1 : -1];

#endif
