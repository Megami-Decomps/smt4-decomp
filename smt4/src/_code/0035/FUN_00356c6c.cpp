#include "common.h"

struct TrackedValue;

extern "C" {
void FUN_00356c74(TrackedValue *tracked, s64 value);

/* The tracked value is the object embedded at +8 of this one. */
struct TrackedValueOwner {
    u8 unk00[8];
    u32 tracked[1];
};

/* Forwards to the tracked value's sampler (this-adjusting wrapper). */
void FUN_00356c6c(TrackedValueOwner *owner, s64 value)
{
    FUN_00356c74(reinterpret_cast<TrackedValue *>(owner->tracked), value);
}
}
