/* Table of game-data block pointers and small flags at g_gameDataBlocks (0x43e2a8). */
#ifndef SHARD_GAMEDATABLOCKS_H
#define SHARD_GAMEDATABLOCKS_H

#include "gamedata/GameData.h"
#include "gamedata/SaveFlagViews.h"
#include "gamedata/StatusChoices.h"
#include "gamedata/UnitStats.h"
#include <stddef.h>

typedef struct GameSavedItem {
    union {
        /* 0x00000 */ u8 unk00000[0x2E];
        struct {
            /* 0x00 */ u8 unk00[0x16];
            /* 0x16 */ u8 registrationFlags;
            /* 0x17 */ u8 unk17[0x17];
        } registration;
    };
    /* 0x0002E */ u16 flags;
    /* 0x00030 */ u8 unk00030[0x4];
} GameSavedItem;

typedef char GameSavedItemRegistrationOffsetCheck[sizeof(GameSavedItem) == 0x34 && offsetof(GameSavedItem, registration.registrationFlags) == 0x16 ? 1 : -1];

typedef struct GameSaveSelection {
    /* 0x00000 */ u8 unk00000[0x1C];
    /* 0x0001C */ u32 unk1C;
    /* 0x00020 */ u32 unk20;
    /* 0x00024 */ s16 unk24;
    /* 0x00026 */ u8 unk26[2];
} GameSaveSelection;

typedef struct GameSaveLinkSlot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} GameSaveLinkSlot;

typedef struct GameSaveData {
    union {
        /* 0x00000 */ u8 unk00000[0x88];
        struct {
            u8 prefix[3];
            u8 option;
        } metadata;
    };
    /* 0x00088 */ u8 linkTable[1];
    /* 0x00089 */ u8 unk00089[7];
    /* 0x00090 */ StatusChoiceData statusChoices;
    union {
        /* 0x00118 */ u8 unk00118[0x9758];
        struct {
            /* 0x00118 */ u8 unk118[4];
            /* 0x0011C */ StatBlock units[24];
            /* 0x0917C */ s8 stock[24];
            /* 0x09194 */ s8 active[3];
            /* 0x09197 */ u8 stockCount;
        } party;
    };
    /* 0x09870 */ u32 unk09870;
    /* 0x09874 */ u8 block09874[1];
    /* 0x09875 */ u8 unk09875[0x2983];
    /* 0x0C1F8 */ GameSavedItem items[0x501];
    /* 0x1C62C */ u8 unk1C62C[0x2554];
    /* 0x1EB80 */ u8 block1EB80[1];
    /* 0x1EB81 */ u8 unk1EB81[0x97];
    /* 0x1EC18 */ u8 block1EC18[1];
    /* 0x1EC19 */ u8 unk1EC19[0xBF];
    /* 0x1ECD8 */ u8 unk1ECD8;
    /* 0x1ECD9 */ u8 unk1ECD9[0x77B];
    /* 0x1F454 */ u32 unk1F454;
    union {
        /* 0x1F458 */ u8 unk1F458[0x84];
        /* 0x1F458 */ u32 questCurrentValue;
    };
    /* 0x1F4DC */ u32 unk1F4DC;
    /* 0x1F4E0 */ u32 unk1F4E0;
    union {
        /* 0x1F4E4 */ u8 unk1F4E4[0x4FCC];
        struct {
            u8 prefix[0x378];
            /* 0x1F85C */ u32 value;
        } questSnapshot;
    };
    /* 0x244B0 */ u32 unk244B0;
    union {
        /* 0x244B4 */ u8 unk244B4[0x6C8];
        struct {
            u8 prefix[0x675];
            /* 0x24B29 */ u8 gameOverContinueEnabled;
        } gameOver;
    };
    /* 0x24B7C */ u8 configOptions[4];
    /* 0x24B80 */ u8 hasConfig;
    /* 0x24B81 */ u8 unk24B81[7];
    /* 0x24B88 */ GameSaveSelection selection;
    /* 0x24BB0 */ u8 unk24BB0;
    /* 0x24BB1 */ u8 unk24BB1[3];
    /* 0x24BB4 */ GameSaveLinkSlot linkSlots[2];
} GameSaveData;

typedef struct GameDataAux {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} GameDataAux;


extern GameDataBlocks g_gameDataBlocks;

typedef char GameDataBlocksLayoutCheck[sizeof(GameDataBlocks) == 0x1C && sizeof(GameSavedItem) == 0x34 ? 1 : -1];

typedef char GameSaveDataOffsets[offsetof(GameSaveData, items) == 0xC1F8 && offsetof(GameSaveData, statusChoices) == 0x90 && offsetof(GameSaveData, configOptions) == 0x24B7C && offsetof(GameSaveData, hasConfig) == 0x24B80 && offsetof(GameSaveData, selection) == 0x24B88 && offsetof(GameSaveData, unk24BB0) == 0x24BB0 ? 1 : -1];
typedef char GameSaveDataQuestBookkeepingOffsetCheck[
    offsetof(GameSaveData, metadata.option) == 3 &&
    offsetof(GameSaveData, questCurrentValue) == 0x1F458 &&
    offsetof(GameSaveData, questSnapshot.value) == 0x1F85C &&
    sizeof(GameSaveData) == 0x24BC4 ? 1 : -1];
typedef char GameSaveDataGameOverContinueOffsetCheck[
    offsetof(GameSaveData, gameOver.gameOverContinueEnabled) == 0x24B29 ? 1 : -1];
typedef char GameSaveDataPartyOffsets[
    offsetof(GameSaveData, party.units) == 0x11C &&
    offsetof(GameSaveData, party.stock) == 0x917C &&
    offsetof(GameSaveData, party.active) == 0x9194 &&
    sizeof(GameSaveData) == 0x24BC4 ? 1 : -1];
typedef char GameSaveDataPartyStockCountOffsetCheck[
    offsetof(GameSaveData, party.stockCount) == 0x9197 && sizeof(GameSaveData) == 0x24BC4 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

void gameDataBlocksAddFlags(u32 flags);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 gameDataSetItemFlag(u16 index, s32 value);

#ifdef __cplusplus
}
#endif

#endif
