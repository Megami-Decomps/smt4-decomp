#ifndef SHARD_W9_W9MATCH7_FLAGGATEDENTRIES_H
#define SHARD_W9_W9MATCH7_FLAGGATEDENTRIES_H

#include "common.h"
#include <stddef.h>

struct FlagGatedEntry {
    union {
        /* 0x000 */ u8 unk000[0x12C];
        struct {
            u8 unk000BeforeCreation[0x124];
            /* 0x124 */ u32 handle;
            /* 0x128 */ u8 kind;
        } creation;
    };
    /* 0x12C */ void *object;
    union {
        /* 0x130 */ u8 unk130[0x30];
        struct {
            /* 0x130 */ u32 id;
            /* 0x134 */ s32 state;
        } creationState;
        struct {
            u8 unk130BeforeLifetime[0x2C];
            /* 0x15C */ u16 frame;
            /* 0x15E */ s16 index;
        } lifetime;
    };
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
typedef char FlagGatedEntryCreationOffsetsCheck[
    offsetof(FlagGatedEntry, creation.handle) == 0x124 &&
    offsetof(FlagGatedEntry, creation.kind) == 0x128 &&
    offsetof(FlagGatedEntry, creationState.id) == 0x130 &&
    offsetof(FlagGatedEntry, creationState.state) == 0x134 &&
    offsetof(FlagGatedEntry, lifetime.frame) == 0x15C &&
    offsetof(FlagGatedEntry, lifetime.index) == 0x15E && sizeof(FlagGatedEntry) == 0x17C ? 1 : -1];

#endif
