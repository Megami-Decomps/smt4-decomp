#pragma once
#include "common.h"

/* Add-on content (AOC) system calls. */
struct DataSet;
extern "C" {

u32 aocContentLookupSucceeds(u32 id, u32 arg);

u8 aocDataBlockHasEntries(u32 a, s32 b);

void *aocFindQuestPayloadById(void *system, s32 id);

u8 aocHasType36(u32 a, u32 b);

s32 aocPackageGrantsItem(struct DataSet *system, u32 itemId, s32 checkAvailable);

u32 aocReadyAndAccepts(u32 a, u32 b);

void aocReleaseObjectBufferAndFlag(void *object);

} /* extern "C" */
