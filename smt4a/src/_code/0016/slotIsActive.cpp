#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x0 */ u32 blocked;
    /* 0x4 */ u32 mask;
} Slot;

typedef struct Mode {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 flags;
} Mode;

extern Slot DAT_0053d740[31];
extern Mode DAT_005b4000;
extern u32 DAT_0063fff0;
extern u32 DAT_0063ffd0;

static inline bool usesAlternateMask()
{
    if (DAT_005b4000.flags & 1)
        return true;
    if (DAT_005b4000.flags & 2)
        return true;
    return false;
}

/* Returns whether slot `index` (< 31) is not blocked and its mask hits the active bit word (chosen by the mode flags 1|2). */
u32 slotIsActive(u32 index)
{
    Slot *slot;
    u32 *source;
    u32 bits;

    if (index >= 31) {
        return 0;
    }
    slot = &DAT_0053d740[index];
    if (slot->blocked != 0) {
        return 0;
    }
    if (usesAlternateMask()) {
        source = &DAT_0063fff0;
    } else {
        source = &DAT_0063ffd0;
    }
    bits = source != NULL ? *source : 0;
    return (bits & slot->mask) != 0;
}

} /* extern "C" */
