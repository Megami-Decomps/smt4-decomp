/* gamedata/GameData.c (Apocalypse): the save block g_gameDataBlocks.saveBlock points at and the records inside
 * it (the slot table gameGetSlotTable() returns and the unit records gameGetSlotRecord() returns). IV's layouts
 * are in gamedata/GameSaveData.h; the globals and getters are declared in gamedata/GameSaveBlocks.h. */
#ifndef GAMEDATA_GAMESAVEDATAA_H
#define GAMEDATA_GAMESAVEDATAA_H

#include "common.h"
#include "gamedata/GameData.h"
#include "gamedata/PlayerRecordParts.h"
#include "gamedata/MapSaveBlockA.h"
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

/* Apocalypse: a unit (devil) record of the slot table (0x12C bytes), returned by gameGetSlotRecord()
 * (gamedata/SaveSlotRecord.h). Up to 0x34 it has the layout of IV's unit record (StatBlock); the player's
 * record (PlayerDataA) shares the stats and skills but keeps its equipment in the first block. */
typedef struct SlotRecordA {
    /* 0x000 */ u16 tableStats[7];    /* the devil table's max HP, max MP and five stats (unitRecordBuild) */
    /* 0x00E */ s16 maxHp;
    /* 0x010 */ s16 maxMp;
    /* 0x012 */ s16 baseStats[5];
    /* 0x01C */ u16 boostedMaxHp;
    /* 0x01E */ u16 boostedMaxMp;
    /* 0x020 */ u16 stats[5];
    /* 0x02A */ s16 hp;
    /* 0x02C */ s16 mp;
    /* 0x02E */ u8 unk02E[2];
    /* 0x030 */ u32 experience;
    union {
        /* 0x034 */ u16 skills[8];
        /* 0x034 */ u32 skillWords[4];  /* the same ids, copied as words */
    };
    union {
        /* 0x044 */ s8 skillRanks[8]; /* the rank of each skill (PlayerDataA.skillRanks) */
        /* 0x044 */ u32 skillRankWords[2]; /* the same ranks, cleared as words */
    };
    union {
        /* 0x04C */ u16 name[9];
        /* 0x04C */ s8 categoryRanks[18]; /* a devil's inherited rank per skill category (partyRecordSetEquippedItemClampRank) */
    };
    /* 0x05E */ u16 stateFlags;
    /* 0x060 */ u16 ailments;         /* bit 1: down (0 HP), bit 2: kept by the flag scans, bit 10: cannot lose HP */
    /* 0x062 */ u16 id;               /* the devil's id (nkmBaseGetRecord) */
    /* 0x064 */ u16 level;
    /* 0x066 */ u8 tableIndex;       /* the record's own index in SaveSlotTableA.entries (what party[] and reserve[] hold; the reward tally row of its experience share) */
    /* 0x067 */ u8 unk067;
    /* 0x068 */ u8 inheritedFlags[0x40]; /* per-skill learned/inherited bytes */
    union {
        /* 0x0A8 */ u8 unk0A8[0x82];
        /* 0x0A8 */ u16 bonuses[7];   /* points added to the table's max HP, max MP and five stats (unitRecomputeDerivedStats) */
    };
    /* 0x12A */ s8 streak;
    /* 0x12B */ u8 status;
} SlotRecordA;

typedef char SlotRecordAOffsetCheck[offsetof(SlotRecordA, maxHp) == 0x0E && offsetof(SlotRecordA, stats) == 0x20 &&
    offsetof(SlotRecordA, hp) == 0x2A && offsetof(SlotRecordA, experience) == 0x30 && offsetof(SlotRecordA, skills) == 0x34 &&
    offsetof(SlotRecordA, skillRanks) == 0x44 && offsetof(SlotRecordA, name) == 0x4C && offsetof(SlotRecordA, categoryRanks) == 0x4C && offsetof(SlotRecordA, ailments) == 0x60 && offsetof(SlotRecordA, id) == 0x62 &&
    offsetof(SlotRecordA, level) == 0x64 && offsetof(SlotRecordA, inheritedFlags) == 0x68 &&
    offsetof(SlotRecordA, streak) == 0x12A && sizeof(SlotRecordA) == 0x12C ? 1 : -1];

/* Apocalypse: a party slot of the slot table (0x134 bytes): a unit record plus the slot's own id and flags (the
 * player slot and the 12 stock slots, SaveSlotTableA.player and .slots). */
typedef struct PartySlotA {
    /* 0x000 */ SlotRecordA record;
    /* 0x12C */ u16 id;               /* the slot's id (SaveSlotTableA.preferredId selects one) */
    /* 0x12E */ u16 slotIndex;        /* its index in SaveSlotTableA.slots (partyRefreshOrInsertSlot) */
    /* 0x130 */ u32 flags;
} PartySlotA;

typedef char PartySlotAOffsetCheck[offsetof(PartySlotA, id) == 0x12C && offsetof(PartySlotA, flags) == 0x130 &&
    sizeof(PartySlotA) == 0x134 ? 1 : -1];

/* Apocalypse: the save block's slot table (save block + 0x8C), returned by gameGetSlotTable(): the party
 * money, the unit records of the 24 slots, the party/reserve slot maps and the player and stock slots. */
typedef struct SaveSlotTableA {
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
    /* 0x2C4E */ u16 unk2C4E;         /* a small counter (tested < 8) */
} SaveSlotTableA;

typedef char SaveSlotTableOffsetCheck[offsetof(SaveSlotTableA, entries) == 0x68 && offsetof(SaveSlotTableA, party) == 0x1C88 &&
    offsetof(SaveSlotTableA, hero) == 0x4 && offsetof(SaveSlotTableA, reserve) == 0x1CA0 && offsetof(SaveSlotTableA, count) == 0x1CA3 &&
    offsetof(SaveSlotTableA, player) == 0x1CA4 && offsetof(SaveSlotTableA, slots) == 0x1DDC &&
    offsetof(SaveSlotTableA, preferredId) == 0x2C4C && sizeof(SaveSlotTableA) == 0x2C50 ? 1 : -1];

/* Apocalypse: the party section of the save body (body + 4): the slot table and the 0xE0 bytes that follow it,
 * up to the flag values. The battle saves and restores it as one block (its fixed "WPartyData" parties). */
typedef struct SavePartySectionA {
    /* 0x0000 */ SaveSlotTableA slots;
    /* 0x2C50 */ u8 unk2C50[0xDC];
    /* 0x2D2C */ u32 unk2D2C;
} SavePartySectionA;

typedef char SavePartySectionASizeCheck[sizeof(SavePartySectionA) == 0x2D30 ? 1 : -1];

/* Apocalypse: one saved item record (0x50 bytes, 0x501 of them): a compendium entry, the copy of a demon's unit
 * record (SlotRecordA) that compendiumRegisterPartyDemon registers. */
typedef struct GameSavedItemA {
    /* 0x00 */ u16 level;          /* SlotRecordA.level */
    /* 0x02 */ u16 stats[5];       /* the five table stats with their bonuses added */
    /* 0x0C */ u16 unitStats[5];   /* SlotRecordA.stats */
    /* 0x16 */ s8 flags;           /* bit 0: registered, bits 2-5: the demon's status */
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u16 maxHp;          /* SlotRecordA.tableStats[0] */
    /* 0x1A */ u16 maxMp;          /* SlotRecordA.tableStats[1] */
    /* 0x1C */ u32 skillWords[4];  /* SlotRecordA.skillWords */
    /* 0x2C */ u32 skillRankWords[2]; /* SlotRecordA.skillRankWords */
    /* 0x34 */ u8 unk34[2];
    /* 0x36 */ u16 bits;
    /* 0x38 */ u32 experience;
    /* 0x3C */ s8 categoryRanks[18]; /* SlotRecordA.categoryRanks */
    /* 0x4E */ s16 counter;
} GameSavedItemA;

typedef char GameSavedItemAOffsetCheck[offsetof(GameSavedItemA, flags) == 0x16 &&
    offsetof(GameSavedItemA, skillWords) == 0x1C && offsetof(GameSavedItemA, bits) == 0x36 &&
    offsetof(GameSavedItemA, categoryRanks) == 0x3C && sizeof(GameSavedItemA) == 0x50 ? 1 : -1];

/* The saved record from its second word on (save body + 0x27E04). FUN_002c1408 and campCecEditCreate reach its
 * fields through a pointer to it (base 0x27E04, offsets 8 and 10), the record's own accessors through the record. */
typedef struct GameSavedRecordTailA {
    /* 0x00 */ u32 unk04;
    /* 0x04 */ u32 unk08;
    /* 0x08 */ s16 value;          /* gameDataGetRecordValue */
    /* 0x0A */ u8 flag0e;
    /* 0x0B */ u8 flags;
} GameSavedRecordTailA;

typedef struct GameSavedRecordA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ GameSavedRecordTailA tail;
} GameSavedRecordA;

typedef struct GameSavedPairA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} GameSavedPairA;

/* Apocalypse: the save body (0x2A71C bytes), copied to and from the work block; it follows the save block's
 * 0x88-byte header. Offsets are from the body; add 0x88 for the save block offset. */
/* One saved StreetPass ranking entry (4 bytes). */
typedef struct GameSavedCecRankA {
    /* 0x00 */ u16 id;                    /* a demon id (players) or a category kind */
    /* 0x02 */ u16 scoreAndRank;          /* bits 0-9: the score, bits 10 and up: the rank */
} GameSavedCecRankA;
typedef char GameSavedCecRankASizeCheck[sizeof(GameSavedCecRankA) == 4 ? 1 : -1];

typedef struct GameSaveBodyA {
    /* 0x00000 */ u16 summaryId;    /* 4 once the save menu writes the body; FUN_002299b0 copies it into the slot summary */
    /* 0x00002 */ u8 saveKind;      /* SaveSlotHeaderWork::saveKind of the menu that wrote it */
    /* 0x00003 */ u8 option;        /* the save option; FUN_00138aa4 runs down GameDataBlocksA.countdowns[option] */
    /* 0x00004 */ SaveSlotTableA slots;
    /* 0x02C54 */ u8 unk02C54[0x8C];
    /* 0x02CE0 */ u8 area2CE0[0x4C];   /* cleared as one block with the point counters (gameDataBlocksClearSlots) */
    /* 0x02D2C */ s32 pointsTotal;   /* every point gained */
    /* 0x02D30 */ u32 points;        /* spendable, capped at 9999 */
    /* 0x02D34 */ u8 flagValues[0x10B8];   /* the banked flag values (flagValueGetStorage) */
    /* 0x03DEC */ MapSaveBlockA mapBlock;
    /* 0x054D0 */ u8 flagBlock[0x9B4];    /* gameFlagBlockGet */
    /* 0x05E84 */ GameSavedItemA items[0x501];
    /* 0x1EED4 */ u8 flagRows[0x2380];
    /* 0x21254 */ u8 questCenter[0x1D4];   /* gameDataBlocksGetStats */
    /* 0x21428 */ u8 block21428[0xA0];
    /* 0x214C8 */ u8 block214C8[0xC0];
    /* 0x21588 */ u8 unk21588;
    /* 0x21589 */ u8 unk21589[0x3];
    union {
        /* 0x2158C */ u32 table[0x1A1D];
        struct {
            /* 0x2158C */ u8 unk2158C[0x800];
            /* 0x21D8C */ u32 unk21D8C;
            /* 0x21D90 */ u32 playSeconds;      /* capped at 9999:59:59 */
            /* 0x21D94 */ u8 counters[0x404];  /* gameGetCounters */
            /* 0x22198 */ u8 playerName[1];
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
    /* 0x27E33 */ u8 unk27E33[9];
    /* 0x27E3C */ u8 tableFlag;
    /* 0x27E3D */ u8 unk27E3D[0x13];
    /* 0x27E50 */ u8 entryFlags[0x3F];
    /* 0x27E8F */ u8 unk27E8F;
    union {
        /* 0x27E90 */ u8 unk27E90[0x288C];
        struct {
            /* 0x27E90 */ s8 values[4];    /* the title configuration's saved setting bytes */
            /* 0x27E94 */ u8 saved;        /* nonzero once the settings were saved */
        } titleConfig;
        struct {
            u8 prefix[0x28];
            /* 0x27EB8 */ u8 savedFlags[0x2864];
        } work;
        struct {
            u8 prefix[0x128];
            /* 0x27FB8 */ u8 flags[1];       /* gameDataStatusFlagGet/Set */
        } status;
        struct {
            u8 prefix[0x1AC];
            /* 0x2803C */ u16 halves[1];
        } halves;
        struct {
            u8 prefix[0x438];
            /* 0x282C8 */ u8 area282C8[4];
        } area;
        struct {
            u8 prefix[0x480];
            /* 0x28310 */ GameSavedCecRankA players[20];   /* the StreetPass ranking's entries (CampCecRanking) */
            /* 0x28360 */ GameSavedCecRankA categories[7];
        } cecRanking;
        struct {
            u8 prefix[0x500];
            /* 0x28390 */ u8 block28390[1];
        } tail;
    };
} GameSaveBodyA;

/* Apocalypse: the save block (allocation 0x2A7A4 bytes). */
typedef struct GameSaveDataA {
    union {
        /* 0x00000 */ u8 header[0x80];
        struct {
            u8 unk00[0x66];
            /* 0x66 */ u16 progress; /* compared against the map-group record's progress bounds */
        } mapGroup;
    };
    /* 0x00080 */ u8 settings[8];         /* configGetSettings: five setting bytes */
    /* 0x00088 */ GameSaveBodyA body;
} GameSaveDataA;

typedef char GameSavedItemAOffsetCheck[sizeof(GameSavedItemA) == 0x50 && offsetof(GameSavedItemA, flags) == 0x16 &&
    offsetof(GameSavedItemA, bits) == 0x36 && offsetof(GameSavedItemA, counter) == 0x4E ? 1 : -1];
typedef char GameSaveBodyAOffsetCheck[offsetof(GameSaveBodyA, slots) == 0x4 && offsetof(GameSaveBodyA, area2CE0) == 0x2CE0 &&
    offsetof(GameSaveBodyA, record.tail.unk04) == 0x27E04 && offsetof(GameSaveBodyA, halves.halves) == 0x2803C &&
    offsetof(GameSaveBodyA, area.area282C8) == 0x282C8 && offsetof(GameSaveBodyA, pointsTotal) == 0x2D2C && offsetof(GameSaveBodyA, points) == 0x2D30 && offsetof(GameSaveBodyA, mapBlock) == 0x3DEC && offsetof(GameSaveBodyA, flagBlock) == 0x54D0 &&
    offsetof(GameSaveBodyA, items) == 0x5E84 && offsetof(GameSaveBodyA, flagRows) == 0x1EED4 && offsetof(GameSaveBodyA, questCenter) == 0x21254 && offsetof(GameSaveBodyA, runtime.playerName) == 0x22198 && offsetof(GameSaveBodyA, tableFlag) == 0x27E3C && offsetof(GameSaveBodyA, status.flags) == 0x27FB8 &&
    offsetof(GameSaveBodyA, block214C8) == 0x214C8 && offsetof(GameSaveBodyA, runtime.unk21D8C) == 0x21D8C &&
    offsetof(GameSaveBodyA, pairs.entries) == 0x270C4 && offsetof(GameSaveBodyA, record.tail.value) == 0x27E0C &&
    offsetof(GameSaveBodyA, saveState) == 0x27E1E && offsetof(GameSaveBodyA, entryFlags) == 0x27E50 &&
    offsetof(GameSaveBodyA, work.savedFlags) == 0x27EB8 && offsetof(GameSaveBodyA, tail.block28390) == 0x28390 &&
    offsetof(GameSaveBodyA, cecRanking.players) == 0x28310 && offsetof(GameSaveBodyA, cecRanking.categories) == 0x28360 &&
    sizeof(GameSaveBodyA) == 0x2A71C && sizeof(GameSaveDataA) == 0x2A7A4 &&
    offsetof(GameSaveDataA, mapGroup.progress) == 0x66 ? 1 : -1];

#endif
