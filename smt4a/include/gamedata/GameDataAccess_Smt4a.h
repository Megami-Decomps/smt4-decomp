#pragma once
#include "common.h"

/* GameDataAccess (declarations migrated from callers). */
struct FlaggedEntry;
struct ScrollSelectionOwner;
struct Slot;
struct Content00470080;
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

Slot * saveSlotFindById(u32 id);

Entry00470080 * contentEntryGetFromFilesByKind(Content00470080 *content, s32 slot, s32 index);

} /* extern "C" */
