/* NON_MATCHING: the enabled/resource words are now read before the override test as in retail; retail keeps the child count in r0 with r4 saved and uses a separate loop-entry compare. */
#include "common.h"

struct ActiveChild {
    u32 unk00;
    u32 flags; // 0x04
};
struct ActivityParameters {
    u8 unk00[0x34];
    f32 weight; // 0x34
};
struct ActivityOverride {
    u32 unk00;
    u32 flags; // 0x04
    u8 unk08[8];
    ActivityParameters parameters; // 0x10
};
struct ActivityOwner {
    u32 unk00;
    u32 resource; // 0x04
    u32 unk08;
    ActivityParameters *parameters; // 0x0c
    u32 enabled; // 0x10
    u32 unk14;
    ActiveChild **begin; // 0x18
    ActiveChild **end; // 0x1c
    u8 unk20[0x14];
    u32 flags; // 0x34
};
extern "C" ActivityOverride *DAT_0056fcb8;

// Report whether an enabled owner has a weighted parameter set and at least one active child.
extern "C" bool FUN_00158124(ActivityOwner *owner)
{
    if (!(owner->flags & 1)) {
        u32 enabled = owner->enabled;
        u32 resource = owner->resource;
        ActivityParameters *parameters;
        if (DAT_0056fcb8 && (DAT_0056fcb8->flags & 1) && (DAT_0056fcb8->flags & 2))
            parameters = &DAT_0056fcb8->parameters;
        else
            parameters = owner->parameters;
        if (enabled && resource && parameters && parameters->weight != 0.0f) {
            s32 activeCount = 0;
            for (ActiveChild **child = owner->begin; child != owner->end; ++child)
                if (!((*child)->flags & 1))
                    ++activeCount;
            return activeCount != 0;
        }
    }
    return false;
}
