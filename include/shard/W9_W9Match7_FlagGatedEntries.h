#ifndef SHARD_W9_W9MATCH7_FLAGGATEDENTRIES_H
#define SHARD_W9_W9MATCH7_FLAGGATEDENTRIES_H

#include "common.h"
#include <stddef.h>

struct FlagGatedEntry {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ void *object;
    /* 0x130 */ u8 unk130[0x30];
    /* 0x160 */ s16 requiredFlag;
    /* 0x162 */ s16 excludedFlag;
    /* 0x164 */ u8 disabled;
    /* 0x165 */ u8 unk165[0x17];
};

struct FlagGatedEntryState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 count;
};

typedef char FlagGatedEntryLayoutCheck[
    sizeof(FlagGatedEntry) == 0x17C &&
    offsetof(FlagGatedEntry, object) == 0x12C &&
    offsetof(FlagGatedEntry, requiredFlag) == 0x160 &&
    offsetof(FlagGatedEntry, excludedFlag) == 0x162 &&
    offsetof(FlagGatedEntry, disabled) == 0x164 ? 1 : -1];
typedef char FlagGatedEntryStateLayoutCheck[
    sizeof(FlagGatedEntryState) == 8 && offsetof(FlagGatedEntryState, count) == 4 ? 1 : -1];

#endif
