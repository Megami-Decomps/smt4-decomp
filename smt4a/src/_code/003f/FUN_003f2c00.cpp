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

/* An empty constructor: armlink removes the call, leaving the member pointer in r0. */
MemberState *FUN_00161d70(MemberState *member);

OwnerState *FUN_003f2c00(OwnerState *owner)
{
    MemberState *member = FUN_00161d70(&owner->member);
    return reinterpret_cast<OwnerState *>(reinterpret_cast<u8 *>(member) - offsetof(OwnerState, member));
}

}
