#ifndef CLASSES_RANGE_OWNER_H
#define CLASSES_RANGE_OWNER_H

#include "classes/WordsFlag8.h"

struct RangeOwnerA;

struct RangeOwner;

/* The secondary base receives the ID range. The primary owner handles resets. */
struct RangeListener {
    const void *vtable;
};

struct RangeOwnerVtableA {
    /* 0x00 */ void *unk00[3];
    /* 0x0C */ void (*reset)(RangeOwnerA *owner);
    /* 0x10 */ void *unk10;
    /* 0x14 */ void (*slot14)(RangeOwnerA *owner);
};

struct RangeEntry {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ u32 id;
};

enum {
    RANGE_OWNER_ENTRY_COUNT = 16,
    RANGE_OWNER_LAST_ENTRY = RANGE_OWNER_ENTRY_COUNT - 1,
    RANGE_OWNER_FLAG_COUNT = 4
};

/* Apocalypse's primary object. IV locates entries and flags four bytes earlier. */
struct RangeOwnerA {
    /* 0x000 */ const RangeOwnerVtableA *vtable;
    /* 0x004 */ u8 unk04[8];
    /* 0x00C */ u8 active;
    /* 0x00D */ u8 unk0d[0x37];
    /* 0x044 */ RangeListener rangeListener;
    /* 0x048 */ u8 unk48[0x48];
    /* 0x090 */ RangeEntry *entries[RANGE_OWNER_ENTRY_COUNT];
    /* 0x0D0 */ u8 unkD0[0x64];
    /* 0x134 */ WordsFlag8 flags[RANGE_OWNER_FLAG_COUNT];
};

typedef char RangeOwnerALayoutCheck[offsetof(RangeOwnerA, rangeListener) == 0x44 &&
    offsetof(RangeOwnerA, entries) == 0x90 && offsetof(RangeOwnerA, flags) == 0x134 &&
    offsetof(RangeEntry, id) == 0x1c ? 1 : -1];

struct RangeOwnerVtable {
    /* 0x00 */ void *unk00[3];
    /* 0x0C */ void (*reset)(RangeOwner *owner);
};

/* IV's range owner: its entries and flag records are four bytes earlier. */
struct RangeOwner {
    /* 0x000 */ const RangeOwnerVtable *vtable;
    /* 0x004 */ u8 unk04[8];
    /* 0x00C */ u8 active;
    /* 0x00D */ u8 unk0d[0x37];
    /* 0x044 */ RangeListener rangeListener;
    /* 0x048 */ u8 unk48[0x44];
    /* 0x08C */ RangeEntry *entries[RANGE_OWNER_ENTRY_COUNT];
    /* 0x0CC */ u8 unkcc[0x64];
    /* 0x130 */ WordsFlag8 flags[RANGE_OWNER_FLAG_COUNT];
};

typedef char RangeOwnerLayoutCheck[offsetof(RangeOwner, rangeListener) == 0x44 &&
    offsetof(RangeOwner, entries) == 0x8C && offsetof(RangeOwner, flags) == 0x130 ? 1 : -1];

/* Tests an ID against the inclusive bounds of a reset request. */
static __inline bool idInRange(u32 lower, u32 id, u32 upper)
{
    return lower <= id && id <= upper;
}

/* Returns the primary object from its embedded listener. */
static __inline RangeOwnerA *rangeOwnerFromListenerA(RangeListener *listener)
{
    return (RangeOwnerA *)((u8 *)listener - offsetof(RangeOwnerA, rangeListener));
}

/* Looks up an entry. The owner's update callback also bounds-checks this table. */
static __inline RangeEntry *rangeOwnerEntryAt(RangeOwnerA *owner, s32 index)
{
    if (index > RANGE_OWNER_LAST_ENTRY) {
        return NULL;
    }
    return owner->entries[index];
}

static __inline RangeOwner *rangeOwnerFromListener(RangeListener *listener)
{
    return (RangeOwner *)((u8 *)listener - offsetof(RangeOwner, rangeListener));
}

static __inline RangeEntry *rangeOwnerEntryAt(RangeOwner *owner, s32 index)
{
    if (index > RANGE_OWNER_LAST_ENTRY) {
        return NULL;
    }
    return owner->entries[index];
}

#endif
