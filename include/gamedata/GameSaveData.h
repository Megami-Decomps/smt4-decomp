/* gamedata/GameData.c (IV): the save block g_gameDataBlocks.saveBlock points at and the records inside it
 * (the player record gameGetPlayerData() returns, the slot table gameGetSlotTable() returns). Apocalypse's
 * layouts are in gamedata/GameSaveDataA.h; each game's globals and getters are declared in its
 * gamedata/GameSaveBlocks.h. */
#ifndef GAMEDATA_GAMESAVEDATA_H
#define GAMEDATA_GAMESAVEDATA_H

#include "common.h"
#include "gamedata/GameData.h"
#include "gamedata/UnitStats.h"
#include "gamedata/PlayerRecordParts.h"
#include "gamedata/MapSaveBlock.h"
#include <stddef.h>

/* ---- IV ---- */

/* IV: the player's record (save block + 0x90), returned by gameGetPlayerData(). The first 0x4C bytes have
 * the layout of a unit record's (StatBlock); Apocalypse's record is PlayerDataA (gamedata/GameSaveDataA.h). */
typedef struct PlayerDataIV {
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
        /* 0x34 */ u16 skills[8];      /* 4 to 8 slots are usable (flags 0x77-0x7A) */
        /* 0x34 */ u32 skillWords[4];  /* the same ids, copied as words */
    };
    /* 0x44 */ u8 skillRanks[8];
    /* 0x4C */ char name[0x12];
    /* 0x5E */ u8 unk5E[0x14];
    /* 0x72 */ u16 ailments;       /* bit 1: down (0 HP), bit 10: cannot lose HP */
    /* 0x74 */ s16 alignment;      /* clamped to -999..999 */
    /* 0x76 */ u8 level;
    /* 0x77 */ u8 unk77;
    /* 0x78 */ u16 skillChoices[8]; /* ids 0x79F-0x802 picked on the status screen; statusGetAvailableChoiceCount() slots */
    /* 0x88 */ u8 unk88[4];
} PlayerDataIV;

typedef char PlayerDataOffsetCheck[offsetof(PlayerDataIV, baseStats.stats) == 0x12 &&
    offsetof(PlayerDataIV, maxHp) == 0x1C && offsetof(PlayerDataIV, stats) == 0x20 && offsetof(PlayerDataIV, hp) == 0x2A &&
    offsetof(PlayerDataIV, experience) == 0x30 && offsetof(PlayerDataIV, skills) == 0x34 &&
    offsetof(PlayerDataIV, skillRanks) == 0x44 && offsetof(PlayerDataIV, name) == 0x4C &&
    offsetof(PlayerDataIV, ailments) == 0x72 && offsetof(PlayerDataIV, alignment) == 0x74 &&
    offsetof(PlayerDataIV, level) == 0x76 && offsetof(PlayerDataIV, skillChoices) == 0x78 &&
    sizeof(PlayerDataIV) == 0x8C ? 1 : -1];

/* IV: the slot table inside the save body (save block + 0x8C), returned by gameGetSlotTable(): the
 * player's record, the 24 unit records and the stock/active slot maps. */
typedef struct SaveSlotTableIV {
    /* 0x0000 */ s32 money;
    /* 0x0004 */ PlayerDataIV player;
    /* 0x0090 */ StatBlock units[24];
    /* 0x90F0 */ s8 stock[24];         /* unit index of each stock position, -1 = empty */
    /* 0x9108 */ s8 active[3];         /* unit index of each active position, -1 = empty */
    /* 0x910B */ u8 stockCount;
} SaveSlotTableIV;

typedef char SaveSlotTableIVLayoutCheck[offsetof(SaveSlotTableIV, player) == 0x4 && offsetof(SaveSlotTableIV, units) == 0x90 &&
    offsetof(SaveSlotTableIV, stock) == 0x90F0 && offsetof(SaveSlotTableIV, active) == 0x9108 &&
    offsetof(SaveSlotTableIV, stockCount) == 0x910B && sizeof(SaveSlotTableIV) == 0x910C ? 1 : -1];

/* IV: one saved item record (0x34 bytes, 0x501 of them). */
typedef struct GameSavedItem {
    /* 0x00 */ u32 unk00[5];
    /* 0x14 */ u16 unk14;
    union {
        /* 0x16 */ u8 registrationFlags;  /* bit 0: stored, bit 1: gameDataSlotSetFlag's flag */
        struct {
            u8 stored : 1;
            u8 flag : 1;
            u8 bits2to7 : 6;
        } registration;
    };
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u32 unk18[5];
    /* 0x2C */ u16 value;            /* capped at 9999 */
    /* 0x2E */ u16 flags;            /* bits 2..7: the entry's level */
    /* 0x30 */ u32 unk30;
} GameSavedItem;

typedef char GameSavedItemOffsetCheck[sizeof(GameSavedItem) == 0x34 && offsetof(GameSavedItem, registrationFlags) == 0x16 &&
    offsetof(GameSavedItem, value) == 0x2C && offsetof(GameSavedItem, flags) == 0x2E ? 1 : -1];

/* IV: the selection state (save block + 0x24BA4): saveSelectReserveUnit writes it through a pointer of its own. */
typedef struct GameSaveSelectionState {
    /* 0x00 */ u32 value;
    /* 0x04 */ u32 money;          /* capped at 9999999 */
    /* 0x08 */ s16 selectedUnitId; /* id of the selected party unit, 0 = none */
    /* 0x0A */ u8 mode;
    /* 0x0B */ u8 modeFlags;       /* bit 1: the hidden mode toggled by FUN_0031e384 */
} GameSaveSelectionState;

/* IV: the unit selection block (save block + 0x24B88). */
typedef struct GameSaveSelection {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ GameSaveSelectionState state;
} GameSaveSelection;

typedef struct GameSaveLinkSlot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} GameSaveLinkSlot;

/* IV: the save body (0x24D28 bytes), copied to and from the work block; it follows the save block's
 * 0x88-byte header. Offsets are from the body; add 0x88 for the save block offset. */
typedef struct GameSaveBody {
    /* 0x00000 */ u8 linkTable[4];
    /* 0x00004 */ SaveSlotTableIV slots;
    /* 0x09110 */ u8 supportUnits[0x686];
    /* 0x09796 */ u8 flagBits[0x4C];
    /* 0x097E2 */ u8 unk097E2[2];
    /* 0x097E4 */ s32 pointsTotal;     /* every point gained */
    /* 0x097E8 */ u32 points;          /* spendable, capped at 9999 */
    /* 0x097EC */ u8 unlockFlags[0x104C];
    /* 0x0A838 */ MapSaveBlock mapBlock;
    /* 0x0B91C */ u8 flagBlock[0x854];
    /* 0x0C170 */ GameSavedItem items[0x501];
    /* 0x1C5A4 */ u8 flagRows[0x2380];
    /* 0x1E924 */ u8 questCenter[0x1D4];
    /* 0x1EAF8 */ u8 indexedFlags[0x98];
    /* 0x1EB90 */ u8 sortPreferences[0x80];
    /* 0x1EC10 */ u8 flagsA[0x40];       /* flag bytes of ids 0..0x3F */
    /* 0x1EC50 */ u8 unk1EC50;
    /* 0x1EC51 */ u8 unk1EC51[3];
    /* 0x1EC54 */ u32 entryValues[0x1DE];
    /* 0x1F3CC */ u32 unk1F3CC;
    /* 0x1F3D0 */ u8 unk1F3D0[0x84];
    /* 0x1F454 */ u32 unk1F454;
    /* 0x1F458 */ u32 playSeconds;      /* capped at 9999:59:59 */
    union {
        /* 0x1F45C */ u8 counters[0x4FCC];
        struct {
            u8 prefix[0x400];
            /* 0x1F85C */ u32 value;        /* playSeconds when the quest was activated */
        } questSnapshot;
        struct {
            u8 prefix[0x404];
            /* 0x1F860 */ u8 name[1];
        } playerName;
    };
    /* 0x24428 */ u32 unk24428;
    /* The summary records (index < 12) reach past the configuration bytes and the selection block. */
    union {
        /* 0x2442C */ u8 unk2442C[0x6FC];
        struct {
            u8 prefix[0x2E0];
            /* 0x2470C */ u8 slotSummary[0x80];
            /* 0x2478C */ u8 records[12][76];
        } summary;
        struct {
            u8 prefix[0x6C8];
            /* 0x24AF4 */ u8 configOptions[4];
            /* 0x24AF8 */ u8 hasConfig;
            /* 0x24AF9 */ u8 unk24AF9[7];
            /* 0x24B00 */ GameSaveSelection selection;
        } config;
    };
    /* 0x24B28 */ u8 unk24B28;
    /* 0x24B29 */ u8 gameOverContinueEnabled;
    /* 0x24B2A */ u8 unk24B2A[2];
    /* 0x24B2C */ GameSaveLinkSlot linkSlots[2];
    union {
        /* 0x24B3C */ u8 savedFlags[0x3F];  /* bits of ids 1..500 */
        struct {
            u8 prefix[0x20];
            /* 0x24B5C */ u8 flagsB[0x48];  /* flag bytes of ids 0x40..0x47, indexed by id */
        } extendedFlags;
    };
    /* 0x24BA4 */ u8 unk24BA4[0x184];
} GameSaveBody;

/* IV: the save block (allocation 0x24DB0 bytes). */
typedef struct GameSaveData {
    union {
        /* 0x00000 */ u8 unk00000[0x66];
        struct {
            u8 prefix[3];
            u8 option;
        } metadata;
    };
    /* 0x00066 */ u16 count;           /* capped at 9998 */
    /* 0x00068 */ u8 unk00068[0x18];
    /* 0x00080 */ u8 settings[8];
    /* 0x00088 */ GameSaveBody body;
} GameSaveData;

typedef struct GameDataAux {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} GameDataAux;

typedef char GameSaveDataOffsets[offsetof(GameSaveData, count) == 0x66 && offsetof(GameSaveData, body) == 0x88 && offsetof(GameSaveBody, slots.player) == 0x8 &&
    offsetof(GameSaveBody, slots.units) == 0x94 && offsetof(GameSaveBody, slots.stock) == 0x90F4 &&
    offsetof(GameSaveBody, slots.active) == 0x910C && offsetof(GameSaveBody, slots.stockCount) == 0x910F &&
    offsetof(GameSaveBody, supportUnits) == 0x9110 && offsetof(GameSaveBody, points) == 0x97E8 &&
    offsetof(GameSaveBody, mapBlock) == 0xA838 && offsetof(GameSaveBody, items) == 0xC170 ? 1 : -1];
typedef char GameSaveDataUpperOffsets[offsetof(GameSaveBody, flagRows) == 0x1C5A4 &&
    offsetof(GameSaveBody, flagsA) == 0x1EC10 && offsetof(GameSaveBody, entryValues) == 0x1EC54 &&
    offsetof(GameSaveBody, playSeconds) == 0x1F458 &&
    offsetof(GameSaveBody, questSnapshot.value) == 0x1F85C && offsetof(GameSaveBody, playerName.name) == 0x1F860 &&
    offsetof(GameSaveBody, summary.records) == 0x2478C && offsetof(GameSaveBody, gameOverContinueEnabled) == 0x24B29 &&
    offsetof(GameSaveBody, config.hasConfig) == 0x24AF8 &&
    offsetof(GameSaveBody, config.selection.state.money) == 0x24B20 && offsetof(GameSaveBody, config.selection.state.modeFlags) == 0x24B27 &&
    offsetof(GameSaveBody, linkSlots) == 0x24B2C && offsetof(GameSaveBody, extendedFlags.flagsB) == 0x24B5C &&
    sizeof(GameSaveBody) == 0x24D28 && sizeof(GameSaveData) == 0x24DB0 ? 1 : -1];


#endif
