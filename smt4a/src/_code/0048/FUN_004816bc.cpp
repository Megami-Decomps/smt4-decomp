/* NON_MATCHING: the final if/else-if branch is predicated here; retail branches around a shared store. */
#include "common.h"

struct StateBits {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 bits;
};

struct StateTarget {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ StateBits *state;
};

struct StateOwner {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ StateTarget *target;
    /* 0x7C */ u32 flags;
};

extern "C" {

extern struct {
    /* 0x00 */ u8 unk00[0x21];
    /* 0x21 */ u8 forceOn;
    /* 0x22 */ u8 unk22;
    /* 0x23 */ u8 forceOnLate;
} g_gameState;

/* Virtual slot: sets or clears the low two state bits of the owner's target from its flags and the game state. */
void FUN_004816bc(StateOwner *self)
{
    if (self->target == NULL) {
        return;
    }
    StateBits *state = self->target->state;

    if (g_gameState.forceOn == 0) {
        if (self->flags & 8) {
            state->bits &= ~3;
        }
        if (!(self->flags & 4)) {
            if (g_gameState.forceOnLate != 0) {
                state->bits |= 3;
            } else if (self->flags & 8) {
                state->bits &= ~3;
            }
            return;
        }
    }
    state->bits |= 3;
}

} /* extern "C" */
