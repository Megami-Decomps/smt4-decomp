/* NON_MATCHING: the 64-bit mask tests and the shift-or updates compile to different instruction groups than retail, and the pair-unrolled selection loop differs; the selection logic is the same. */
#include "common.h"

extern "C" {

/* One combatant entry (0x408 bytes): its flags are the first 64 bits. */
typedef struct PickEntry {
    u64 flags;
    u8 unk08[0x400];
} PickEntry;

/* The battle state slice: the entry array, the chosen-unit mask and the three-unit order. */
typedef struct PickState {
    /* 0x0000 */ u8 unk0000[0x1FFC];
    /* 0x1FFC */ PickEntry *entries;
    /* 0x2000 */ u8 unk2000[8];
    /* 0x2008 */ u64 chosenMask;
    /* 0x2010 */ u8 unk2010[8];
    /* 0x2018 */ u8 order[3];
} PickState;

typedef struct PickOwner {
    PickState *state;
} PickOwner;

/* The record the picks are drawn from: its id is the halfword at 0x64 and its kind at 0x62. */
typedef struct PickRecord {
    u8 unk00[0x62];
    u16 kind;
    u16 key;
} PickRecord;

typedef struct PickSlots {
    u8 unk0000[0x1C88];
    s8 stock[0x1B];
    u8 count;
} PickSlots;

/* One candidate (6 bytes): the slot, its key and a rank byte. */
typedef struct PickCandidate {
    u8 slot;
    u8 unk01;
    u16 key;
    u8 rank;
    u8 unk05;
} PickCandidate;

extern u64 DAT_00571150;
extern u64 DAT_00571168;
extern u64 DAT_00571170;

void __aeabi_memset4(void *destination, u32 size, s32 value);
PickSlots *gameGetSlotTable(void);
void *asdOperatorNewD(u32 size);
void asdOperatorDeleteC(void *block);
PickRecord *gameGetSlotRecord(s32 index);
s32 bitsAt60Test(PickRecord *record, u32 bit);
u8 *FUN_00184310(u32 id);
void qsort(void *base, u32 count, s32 size, s32 (*compare)(const void *, const void *));
s32 FUN_003d2d7c(const void *a, const void *b);

/* Marks the usable battle slots, then picks up to three stock units ranked by the candidate sort
 * and records them in the chosen mask and the order bytes. */
void FUN_004e980c(PickOwner *owner, u8 *flags)
{
    for (s32 i = 0; i < 4; i++) {
        u64 unitFlags = owner->state->entries[i].flags;

        if ((unitFlags & DAT_00571150) == 0 && (unitFlags & DAT_00571170) == 0 && (unitFlags & DAT_00571168) == 0) {
            flags[0x38 + i] = 1;
        }
    }
    __aeabi_memset4(owner->state->order, 3, -1);
    u32 stockCount = gameGetSlotTable()->count;
    PickCandidate *candidates = (PickCandidate *)asdOperatorNewD(stockCount * sizeof(PickCandidate));

    for (u32 i = 0; i < stockCount; i++) {
        candidates[i].slot = 0xFF;
        candidates[i].key = 0;
        candidates[i].rank = 0;
    }
    s32 found = 0;

    for (u32 i = 0; i < stockCount; i++) {
        if (gameGetSlotTable()->stock[i] < 0) {
            continue;
        }
        PickRecord *record = gameGetSlotRecord(gameGetSlotTable()->stock[i]);

        if (record != NULL && bitsAt60Test(record, 1) == 0 && bitsAt60Test(record, 10) == 0) {
            candidates[found].slot = (u8)i;
            candidates[found].key = record->key;
            candidates[found].rank = FUN_00184310(record->kind)[2];
            found++;
        }
    }
    if (found != 0) {
        qsort(candidates, found, 6, FUN_003d2d7c);
        s32 picks = found >= 4 ? 3 : found;

        for (s32 i = 0; i < picks; i++) {
            PickState *state = owner->state;

            state->chosenMask |= (u64)1 << (candidates[i].slot + 1);
            owner->state->order[i] = candidates[i].slot + 1;
        }
    }
    asdOperatorDeleteC(candidates);
}

}
