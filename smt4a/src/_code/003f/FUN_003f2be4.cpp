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

void FUN_0015a21c(MemberState *member);

/* Resets the owner's embedded state. */
OwnerState *FUN_003f2be4(OwnerState *owner)
{
    FUN_0015a21c(&owner->member);
    return owner;
}

}
