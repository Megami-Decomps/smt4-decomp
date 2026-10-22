/* NON_MATCHING: armcc strength-reduces the candidate loop to a post-incremented pointer with a down counter; retail indexes candidates->ids[i] and counts up. */
#include "common.h"

#define BTL_PICK_SLOTS 5
#define BTL_PICK_CANDIDATES 50

struct BtlPickState {
    /* 0x0000 */ u8 unk0000[0x1ec8];
    /* 0x1ec8 */ u16 picks[BTL_PICK_SLOTS];
};

struct BtlPickCandidates {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u32 ids[BTL_PICK_CANDIDATES];
};

extern "C" {

/* Copies the distinct nonzero candidate ids into the five pick slots, repeating the picks to fill the rest. */
void FUN_003eba0c(BtlPickState *state, const BtlPickCandidates *candidates)
{
    u8 count = 0;
    u8 source = 0;
    s32 i;

    for (i = 0; i < BTL_PICK_CANDIDATES; i++) {
        u32 id = candidates->ids[i];
        if (id != 0 && state->picks[0] != id && state->picks[1] != id && state->picks[2] != id &&
            state->picks[3] != id && state->picks[4] != id) {
            state->picks[count] = id;
            count++;
        }
    }
    if (count != 0 && count < BTL_PICK_SLOTS) {
        for (i = count; i < BTL_PICK_SLOTS; i++) {
            state->picks[i] = state->picks[source];
            source++;
            if (source > count) {
                source = 0;
            }
        }
    }
}

} /* extern "C" */
