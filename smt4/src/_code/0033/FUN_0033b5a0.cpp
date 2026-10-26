#include "common.h"
#include <stddef.h>

struct MemberState {
    /* 0x00 */ u8 unk00[0x60];
};

struct OwnerState {
    /* 0x000 */ u8 unk00[0x4dc];
    /* 0x4dc */ MemberState member;
};

extern "C" {

/* Constructs a FloatState and returns it. */
MemberState *_ZN10FloatStateC1Ev(MemberState *member);

/* Resets the owner's embedded state. */
OwnerState *FUN_0033b5a0(OwnerState *owner)
{
    MemberState *member = _ZN10FloatStateC1Ev(&owner->member);
    return reinterpret_cast<OwnerState *>(reinterpret_cast<u8 *>(member) - offsetof(OwnerState, member));
}

}
