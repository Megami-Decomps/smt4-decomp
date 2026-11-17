#pragma once
#include "common.h"
#include "gamedata/GameSaveDataA.h"

/* GameDataAccess (declarations migrated from callers). */
struct FlaggedEntry;
struct ScrollSelectionOwner;
struct AocSystemA;
struct Entry00470080;
extern "C" {

u32 flaggedEntryGetValueB(FlaggedEntry *entry);

u8 * gameBlockGetArea27E98(void);

u32 flagBitsMergeRange(u16 *requested, u16 *current);

u32 gameFlagStateIsOne(void);

void gameDataAddHomeButtonHold(u32 bits);

u8 gameDataBlocksGetTableFlag(void);


void gameDataBlocksMaskClearBits(u32 bits);

u32 flagSelectVariant(void);

u32 gameCountersGetWord(s32 index);

/* The stock slot with the given id, or NULL. */
PartySlotA *saveSlotFindById(u32 id);

Entry00470080 * contentEntryGetFromFilesByKind(AocSystemA *system, s32 slot, s32 index);

} /* extern "C" */
