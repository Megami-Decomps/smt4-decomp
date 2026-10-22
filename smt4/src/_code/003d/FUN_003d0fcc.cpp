/* NON_MATCHING: retail keeps context in caller-saved r3 across btlUnitGet (same-unit knowledge of the callee's register use), which a separate unit cannot reproduce; the rest is the resulting allocation. */
#include "common.h"

extern "C" {

#define BTL_MARK_UNIT_PRESENT 0x001
#define BTL_MARK_UNIT_HIDDEN 0x020
#define BTL_MARK_UNIT_EXCLUDED 0x040
#define BTL_MARK_UNIT_TARGETABLE 0x400

/* A battle unit slot (0x288 bytes): only its flags are read here. */
typedef struct BtlMarkUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x284];
} BtlMarkUnit;

typedef struct BtlMarkState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlMarkUnit *units;
} BtlMarkState;

typedef struct BtlMarkContext {
    /* 0x00 */ BtlMarkState *state;
} BtlMarkContext;

/* The unit record whose per-slot marks this unit sets. */
typedef struct BtlMarkTarget {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 marks[109];
} BtlMarkTarget;

BtlMarkTarget *btlUnitGet(void);

/* Marks the unit slots a command may target: present units in mode 2, the enemy side's
 * targetable units (4..53) for side 1, otherwise every targetable visible unit. */
void FUN_003d0fcc(BtlMarkContext *context, s32 side, s32 mode)
{
    BtlMarkTarget *target = btlUnitGet();
    BtlMarkUnit *units;
    s32 i;

    if (mode == 2) {
        units = context->state->units;
        for (i = 0; i < 109; i++) {
            if ((units[i].flags & BTL_MARK_UNIT_PRESENT) && !(units[i].flags & BTL_MARK_UNIT_EXCLUDED)) {
                target->marks[i] = 1;
            }
        }
        return;
    }
    units = context->state->units;
    if (side == 1) {
        for (i = 4; i < 54; i++) {
            if (units[i].flags & BTL_MARK_UNIT_TARGETABLE) {
                target->marks[i] = 1;
            }
        }
        return;
    }
    for (i = 0; i < 109; i++) {
        if ((units[i].flags & BTL_MARK_UNIT_TARGETABLE) && !(units[i].flags & BTL_MARK_UNIT_HIDDEN)) {
            target->marks[i] = 1;
        }
    }
}

} /* extern "C" */
