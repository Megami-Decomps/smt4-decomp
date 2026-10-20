#include "common.h"

extern "C" {

typedef struct KindInfo {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ s32 enabled;
} KindInfo;

typedef struct Candidate {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u16 status;     /* low nibble is the state */
} Candidate;

KindInfo *FUN_002eac34(s32 kind);
s32 FUN_002eb6ae(Candidate *candidate, u32 mask);

/* Classifies `candidate` for `kind`: 0 when the kind is disabled, 6 or 9 for the two special
 * cases of kinds 2 and 10, 5 otherwise. */
u32 FUN_0010c4ca(u32 unused, Candidate *candidate, s32 kind, s32 blocked)
{
    u16 state;
    KindInfo *info;

    info = FUN_002eac34(kind);
    if (info->enabled == 0) {
        return 0;
    }
    state = candidate->status & 0xF;
    if ((state != 0 && state != 1) && (kind == 10 || kind == 2)) {
        if (blocked != 0) {
            return 6;
        }
        if (state == 3 && FUN_002eb6ae(candidate, 0x10) != 0) {
            return 9;
        }
    }
    return 5;
}

} /* extern "C" */
