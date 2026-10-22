/* NON_MATCHING: only the comparator's tail differs: retail keeps the second key's order in r1 and the difference in r0 (built swaps them) */
#include "common.h"

extern "C" {

typedef struct UnitData {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 id;
} UnitData;

typedef struct ItemData {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ u16 order;
} ItemData;

/* An id and a scratch word, as the swap routine takes them. */
typedef struct SortKey {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 unk04;
} SortKey;

UnitData *FUN_002498ec(u16 index);
s32 idIsAbove400(u32 id);
s32 FUN_0024c52c(u32 id);
ItemData *FUN_002ae164(u32 id);
void FUN_00257568(SortKey *a, SortKey *b);

/* Orders two keys by rank, then by descending item order (ids above 400 rank 99 with order 0). */
static s32 sortKeyCompare(const SortKey *a, const SortKey *b)
{
    s32 rankA;
    s32 rankB;
    u16 orderA;
    u16 orderB;

    if (idIsAbove400(a->id)) {
        rankA = 99;
        orderA = 0;
    } else {
        rankA = FUN_0024c52c(a->id);
        orderA = FUN_002ae164(a->id)->order;
    }
    if (idIsAbove400(b->id)) {
        rankB = 99;
        orderB = 0;
    } else {
        rankB = FUN_0024c52c(b->id);
        orderB = FUN_002ae164(b->id)->order;
    }
    s32 diff = rankA - rankB;

    if (diff == 0) {
        diff = orderB - orderA;
    }
    return diff;
}

/* Hands two keys to FUN_00257568 when they compare equal. */
static void sortKeyResolveTie(SortKey *a, SortKey *b)
{
    if (sortKeyCompare(a, b) == 0) {
        FUN_00257568(a, b);
    }
}

/* Builds the two units' sort keys and resolves a tie between them. */
void FUN_002e44e0(u16 *indexA, u16 *indexB)
{
    UnitData *unitA = FUN_002498ec(*indexA);
    UnitData *unitB = FUN_002498ec(*indexB);
    SortKey a;
    SortKey b;

    a.id = unitA->id;
    a.unk04 = 0;
    b.id = unitB->id;
    b.unk04 = 0;
    sortKeyResolveTie(&a, &b);
}

} /* extern "C" */
