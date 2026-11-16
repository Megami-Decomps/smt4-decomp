#include "common.h"

struct RelativeResource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 offset;
};
extern "C" {
void runtimeDispatchObjectRelease(void **resource);
/* Resolves and releases the optional relative resource pointer. */
void resourceReleaseRelativeMember(RelativeResource *owner)
{
    s32 *relativeOffset = &owner->offset;
    void *resource = *relativeOffset ? (u8 *)relativeOffset + *relativeOffset : NULL;
    if (resource)
        runtimeDispatchObjectRelease(&resource);
}
}
