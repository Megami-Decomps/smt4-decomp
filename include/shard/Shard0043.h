/* Structs shared by the helper functions in code shard 0043. */
#ifndef SHARD_SHARD0043_H
#define SHARD_SHARD0043_H

#include "common.h"

#include "shard/Shard0042.h"

typedef struct Words2 {
    /* 0x00 */ u32 w[2];
} Words2;

typedef struct WordsFlag {
    /* 0x00 */ u32 w0;
    /* 0x04 */ u32 w1;
    /* 0x08 */ u32 w2;
    /* 0x0C */ u8 flag;
} WordsFlag;

struct SynchronizedListEntry {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 state;
    /* 0x12 */ u8 unk12[2];
    /* 0x14 */ SynchronizedListEntry *next;
};
struct SynchronizedListOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ SynchronizedListEntry *first;
    /* 0x34 */ u8 unk34[0x3B];
    /* 0x6F */ u8 flags;
    /* 0x70 */ u32 criticalSection;
};

typedef char SynchronizedListEntrySizeCheck[sizeof(SynchronizedListEntry) == 0x18 ? 1 : -1];
typedef char SynchronizedListOwnerSizeCheck[sizeof(SynchronizedListOwner) == 0x74 ? 1 : -1];

#endif
