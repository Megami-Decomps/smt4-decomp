#pragma once
#include "common.h"

/* Game-data, flag and record accessors. */
struct FlagWorkBanks;
extern "C" {

u32 countersGetB(s32 index);

u32 entryIsValid(s32 index);

u32 findRecordByKey(const char *key);

u8 flagBitIsSet(u32 bit);

u8 gameDataBlocksGetFlagByte(void);

u8 *gameDataBlocksGetSaveData(void);

u8 *gameDataBlocksGetStats(void);

u8 *gameDataGetPlayerName(void);

u32 gameDataGetSmallBlock(void);

u32 gameFlagEntryGetBit(u32 id, u32 which);

/* The flag banks of the game-data table; callers view them as the sub-structure they use. */
struct FlagWorkBanks *gameFlagsGetBlock(void);

int gameGetOptions(void);

u8 *gameGetPlayerName(void);

int gameGetSupportUnitData(void);

s32 gameGetUnlockedCountLimit(void);

u32 gameProgressIsAdvanced();

u32 gameStockContainsEntry(u32 id);

u32 getMaskB5(s32 includeExtra);

u8 lookupNameEntry(void *owner, u32 name, u32 *out);

int partyMemberFindById(u32 id);

u32 playerAlignmentClass(void);

u8 recordGetModeForId(s32 id);

u32 recordPackedValue(u32 id);

void saveSlotInfoSet(s32 index, u32 id, const char *name);

} /* extern "C" */
