/* NON_MATCHING: resolves duplicate devils when a party slot is replaced (swap the displaced id into the matching slot, keep the reserve list sorted and de-duplicated, adjust the counters); written from the decompilation, the compiler-unrolled shift/zero loops are written as plain loops */
#include "common.h"

#define PARTY_SLOT_COUNT 8
#define PARTY_NO_SLOT -1

struct PartyIds {
    /* 0x0000 */ u8 unk0000[0x76A4];
    /* 0x76A4 */ s16 slots[PARTY_SLOT_COUNT];
    /* 0x76B4 */ s16 slotMarks[PARTY_SLOT_COUNT];
    /* 0x76C4 */ s16 reserve[PARTY_SLOT_COUNT];
    /* 0x76D4 */ u8 unk76D4[0x17F];
    /* 0x7853 */ u8 unk7853;
    /* 0x7854 */ s32 reserveCount;
    /* 0x7858 */ s32 filledCount;
    /* 0x785C */ u8 unk785C[4];
    /* 0x7860 */ u8 changed[PARTY_SLOT_COUNT];
};

struct PartyIncoming {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s16 ids[PARTY_SLOT_COUNT];
};

extern "C" {
void qsort(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_00321c94(const void *a, const void *b);
s32 FUN_003df4a4(u16 id);
s32 recordContainsPairedId(u32 record, u16 id);

/* Removes the id at the head of the reserve from the rest of it and keeps it sorted. */
static __inline void reserveRemoveHeadDuplicates(PartyIds *party)
{
    for (s32 k = 0; k < PARTY_SLOT_COUNT - 1; k++) {
        if (party->reserve[k + 1] == party->reserve[0]) {
            party->reserve[k + 1] = 0;
            qsort(party->reserve, PARTY_SLOT_COUNT, sizeof(s16), FUN_00321c94);
        }
    }
}

void FUN_00267d74(PartyIds *party, u32 record, PartyIncoming *incoming, s32 swapSlot)
{
    for (;;) {
        /* Find the slot that currently holds the id the incoming slot wants. */
        s32 slot;
        for (slot = 0; slot < PARTY_SLOT_COUNT; slot++) {
            if (party->slots[slot] != 0 && swapSlot != PARTY_NO_SLOT && slot != swapSlot
                && party->slots[slot] == incoming->ids[swapSlot])
                break;
        }
        if (slot >= PARTY_SLOT_COUNT)
            return;

        u16 displaced = party->slots[slot];
        party->slots[slot] = incoming->ids[slot];
        party->changed[slot] = 1;
        reserveRemoveHeadDuplicates(party);

        /* Make room at the head of the reserve and clear its unused tail. */
        for (s32 j = party->reserveCount; j > 0; j--)
            party->reserve[j] = party->reserve[j - 1];
        for (s32 j = party->reserveCount; j < PARTY_SLOT_COUNT; j++)
            party->reserve[j] = 0;

        if (recordContainsPairedId(record, incoming->ids[slot]) != 0) {
            if (party->reserve[1] == incoming->ids[slot]) {
                party->reserve[0] = 0;
            } else {
                party->reserve[0] = incoming->ids[slot];
                reserveRemoveHeadDuplicates(party);
            }
        } else {
            party->reserve[0] = 0;
            qsort(party->reserve, PARTY_SLOT_COUNT, sizeof(s16), FUN_00321c94);
        }

        s32 displacedKnown = FUN_003df4a4(displaced);
        s32 incomingPaired = recordContainsPairedId(record, incoming->ids[slot]);
        if (displacedKnown == 0 || incomingPaired != 0) {
            if (FUN_003df4a4(displaced) == 0 && recordContainsPairedId(record, incoming->ids[slot]) != 0) {
                party->filledCount++;
                party->slotMarks[slot] = 1;
            } else if ((FUN_003df4a4(displaced) == 0 && recordContainsPairedId(record, incoming->ids[slot]) == 0)
                       || incoming->ids[slot] == 0) {
                party->reserveCount--;
            }
        } else {
            if (incoming->ids[slot] != 0)
                party->filledCount--;
            party->reserveCount--;
            party->slotMarks[slot] = 0;
        }
        swapSlot = slot;
    }
}

} /* extern "C" */
