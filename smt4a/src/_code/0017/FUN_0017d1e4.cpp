/* NON_MATCHING: retail does not shrink-wrap the null check (movs r4, r0 / beq after the push, one pop at the end) and schedules the flag store first; armcc here tests before the push and uses strd. */
#include "common.h"

extern "C" {

/* A pool header (0x44 bytes) describing an array of 0x1C-byte entries. */
struct EntryPool {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 owner;
    /* 0x08 */ u32 id;
    /* 0x0C */ u32 used;
    /* 0x10 */ u32 firstFree;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ void *entries;
    /* 0x1C */ s32 capacity;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 flags;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u8 unk38[0xC];
};

void sysMemClear(void *memory, u32 size);

/* Initializes a pool header over caller-provided entry storage and clears the storage. */
void FUN_0017d1e4(EntryPool *pool, u32 id, u32 owner, s32 capacity, void *entries)
{
    if (pool != NULL) {
        sysMemClear(pool, sizeof(EntryPool));
        pool->flags = 0x300;
        pool->used = 0;
        pool->id = id;
        pool->owner = owner;
        pool->unk20 = 0;
        pool->firstFree = 0;
        pool->unk28 = 0;
        pool->unk24 = 0;
        pool->unk34 = 0;
        pool->entries = entries;
        pool->capacity = capacity;
        pool->unk30 = 0;
        sysMemClear(entries, capacity * 0x1C);
    }
}

} /* extern "C" */
