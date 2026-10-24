/* NON_MATCHING: retail recovers the owner from the member reset result; this wrapper preserves the owner in r4. */
#include "common.h"

struct MemberState {
    /* 0x00 */ u8 unk00[0x60];
};

struct OwnerState {
    /* 0x000 */ u8 unk00[0x4dc];
    /* 0x4dc */ MemberState member;
};

extern "C" {

void _ZN10FloatStateC1Ev(MemberState *member);

/* Resets the owner's embedded state. */
OwnerState *FUN_0033b5a0(OwnerState *owner)
{
    _ZN10FloatStateC1Ev(&owner->member);
    return owner;
}

}
