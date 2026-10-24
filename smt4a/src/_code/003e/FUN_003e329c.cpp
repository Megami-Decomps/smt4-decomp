#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

struct Member {
    u32 unk00;
};

struct Owner {
    /* 0x000 */ u8 unk000[0x4a0];
    /* 0x4a0 */ Member member;
};

extern "C" {

/* Constructor: runs the (removed) constructor hook of the embedded member at 0x4a0 and returns the owner. */
Owner *FUN_003e329c(Owner *owner)
{
    Member *member = static_cast<Member *>(asdDebugHookPass(&owner->member));
    return reinterpret_cast<Owner *>(reinterpret_cast<u8 *>(member) - 0x4a0);
}

} /* extern "C" */
