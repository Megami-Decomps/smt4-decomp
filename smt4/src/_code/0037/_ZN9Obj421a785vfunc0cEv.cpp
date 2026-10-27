/* NON_MATCHING: scheduling only: armcc hoists the count load above the flag clear; retail clears the flag first (retail keeps r0 live across it: a removed one-instruction setter strb r1,[r0,#270]; no source for a multifile member). */
#include "common.h"

struct PairSlot {
    u32 first;
    u32 second;
};

struct SlotTable {
    /* 0x000 */ u8 unk000[0x44];
    /* 0x044 */ u32 slotA[4];
    /* 0x054 */ u32 slotB[4];
    /* 0x064 */ PairSlot pairs[4];
    /* 0x084 */ u32 slotC[4];
    /* 0x094 */ u8 unk094[0x79];
    /* 0x10d */ u8 count;
    /* 0x10e */ u8 dirty;
};

extern "C" {

/* Virtual slot: when flagged, clears the per-slot words of every active slot and drops the flag. */
void _ZN9Obj421a785vfunc0cEv(SlotTable *self)
{
    if (self->dirty != 0) {
        self->dirty = 0;
        s32 i = 0;
        while (i < self->count) {
            self->slotA[i] = 0;
            self->slotB[i] = 0;
            self->pairs[i].first = 0;
            self->pairs[i].second = 0;
            self->slotC[i] = 0;
            i++;
        }
    }
}

} /* extern "C" */
