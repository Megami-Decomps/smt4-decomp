/* NON_MATCHING: readable rebuild of the battle target cursor step; retail repeats the clear-highlight loop inline for the forward and backward branches (unrolled by two) and scans with unsigned index tests, which armcc here compiles from the shared helper and signed loops. */
#include "common.h"

/* A battle side's unit records (0x114 bytes each); bit 8 of the flags at +0x50 marks a highlighted unit. */
struct BattleSideUnits {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ u8 *unitRecords;
};

struct BattleSideRef {
    BattleSideUnits *side;
};

/* The target selection work. */
struct TargetSelectWork {
    /* 0x000 */ u8 unk000[0x38];
    /* 0x038 */ u8 selected[0x6D];
    /* 0x0A5 */ u8 unk0A5[0x18];
    /* 0x0BD */ u8 candidates[0x6D];  /* unit ids that can be picked, 0 for none */
    /* 0x12A */ u8 unk12A[0x47A];
    /* 0x5A4 */ u32 cursor;           /* the unit id under the cursor */
};

extern "C" {
void eventQueueAddUnique(s32 event);
void memClear(void *block, s32 bytes);
s32 FUN_0029ae44(void);
s32 padIsButtonRepeat(u32 button);

/* Un-highlights every unit of the side. */
static void clearUnitHighlights(BattleSideRef *ref)
{
    for (s32 i = 0; i < 0x6D; i++) {
        u32 *flags = (u32 *)(ref->side->unitRecords + i * 0x114 + 0x50);
        *flags &= ~8u;
    }
}

/* Moves the target cursor to the next (or previous) candidate when the pad asks for it, wrapping
 * around the candidate list, and keeps the current one selected otherwise. Returns 1 when the
 * cursor moved without wrapping. */
u32 FUN_003d1e2c(BattleSideRef *ref, TargetSelectWork *work)
{
    u32 moved = 0;
    s32 current = -1;
    for (s32 i = 0; i < 0x6D; i++) {
        if (work->cursor == work->candidates[i]) {
            current = i;
            break;
        }
    }
    memClear(work->selected, 0x6D);
    if (padIsButtonRepeat(3) || padIsButtonRepeat(0xC) || FUN_0029ae44() > 0) {
        if (padIsButtonRepeat(3) || padIsButtonRepeat(0xC))
            eventQueueAddUnique(0x100016C);
        clearUnitHighlights(ref);
        for (s32 i = current + 1; i < 0x6D; i++) {
            if (work->candidates[i] != 0) {
                work->selected[work->candidates[i]] = 1;
                work->cursor = work->candidates[i];
                return 1;
            }
        }
        for (s32 i = 0; i < 0x6D; i++) {
            if (work->candidates[i] != 0) {
                work->selected[work->candidates[i]] = 1;
                work->cursor = work->candidates[i];
                return 0;
            }
        }
        return 0;
    }
    if (!padIsButtonRepeat(4) && !padIsButtonRepeat(0xD) && FUN_0029ae44() > -1) {
        work->selected[work->cursor] = 1;
        return moved;
    }
    if (padIsButtonRepeat(4) || padIsButtonRepeat(0xD))
        eventQueueAddUnique(0x100016C);
    clearUnitHighlights(ref);
    for (s32 i = current - 1; i >= 0; i--) {
        if (work->candidates[i] != 0) {
            work->selected[work->candidates[i]] = 1;
            work->cursor = work->candidates[i];
            return 1;
        }
    }
    for (s32 i = 0x6C; i >= 0; i--) {
        if (work->candidates[i] != 0) {
            work->selected[work->candidates[i]] = 1;
            work->cursor = work->candidates[i];
            return 0;
        }
    }
    return moved;
}

} /* extern "C" */
