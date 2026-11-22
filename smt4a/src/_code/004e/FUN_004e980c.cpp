/* NON_MATCHING: 67 lines. Retail compares the unit-flag loop index signed (blt) yet keeps the loop rolled (a u32 index here; s32 unrolls it), clears the candidate slot with mvn #0, sets the found count before the clearing loop, and builds the 64-bit chosen-mask OR in the other operand order with one strd. */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUnitWork.h"

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


void __aeabi_memset4(void *destination, u32 size, s32 value);
PickSlots *gameGetSlotTable(void);
void *asdOperatorNewD(u32 size);
void asdOperatorDeleteC(void *block);
PickRecord *gameGetSlotRecord(s32 index);
s32 bitsAt60Test(PickRecord *record, u32 bit);
void qsort(void *base, u32 count, s32 size, s32 (*compare)(const void *, const void *));
s32 uiComparePriorityAndKey(const void *a, const void *b);

/* Marks the usable battle slots, then picks up to three stock units ranked by the candidate sort
 * and records them in the chosen mask and the order bytes. */
void FUN_004e980c(PickOwner *owner, BtlUnitA *unit)
{
    /* Read before the loop: retail loads all three masks once, ahead of the flag stores that could alias them. */
    u64 targetMask = g_btlAction.buttons.confirm;
    u64 reachMask = g_btlAction.interaction.reachMask;
    u64 requiredMask = g_btlAction.interaction.requiredMask;
    for (u32 i = 0; i < 4; i++) {
        u64 unitFlags = owner->state->entries[i].flags;
        if ((unitFlags & targetMask) == 0 && (unitFlags & reachMask) == 0 && (unitFlags & requiredMask) == 0) {
            unit->targets[i] = 1;
        }
    }
    __aeabi_memset4(owner->state->order, 3, -1);
    s32 stockCount = gameGetSlotTable()->count;
    PickCandidate *candidates = (PickCandidate *)asdOperatorNewD(stockCount * sizeof(PickCandidate));

    for (s32 i = 0; i < stockCount; i++) {
        candidates[i].slot = -1;
        candidates[i].key = 0;
        candidates[i].rank = 0;
    }
    s32 found = 0;

    for (s32 i = 0; i < stockCount; i++) {
        if (gameGetSlotTable()->stock[i] < 0) {
            continue;
        }
        PickRecord *record = gameGetSlotRecord(gameGetSlotTable()->stock[i]);

        if (record != NULL && bitsAt60Test(record, 1) == 0 && bitsAt60Test(record, 10) == 0) {
            candidates[found].slot = (u8)i;
            candidates[found].key = record->key;
            candidates[found].rank = nkmBaseGetRecord(record->kind)->race;
            found++;
        }
    }
    if (found != 0) {
        qsort(candidates, found, 6, uiComparePriorityAndKey);
        if (found > 3) {
            found = 3;
        }

        for (s32 i = 0; i < found; i++) {
            owner->state->chosenMask |= 1 << (candidates[i].slot + 1);
            owner->state->order[i] = candidates[i].slot + 1;
        }
    }
    asdOperatorDeleteC(candidates);
}

}
