/* NON_MATCHING: retail grouped bit tests or aggregate-copy runtime selection differs. */
#include "common.h"
struct Snapshot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk08[128];
    /* 0x88 */ u8 flags;
    /* 0x89 */ u8 unk89[3];
};
struct SnapshotOwner { u8 unk00[0x2f9c]; Snapshot snapshot; };
/* Checks an isolated snapshot of the owner's completion state. */
extern "C" s32 FUN_003dcbf4(const SnapshotOwner *owner)
{
    Snapshot snapshot = owner->snapshot;
    return !(snapshot.flags & 1) || snapshot.state != 0;
}
