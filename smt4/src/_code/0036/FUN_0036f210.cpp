/* NON_MATCHING: retail shares one release-call block between the two (identical) flag branches and addresses the handle through a pointer (add r5, r4, #28); armcc lays out the two paths separately here. */
#include "common.h"

extern "C" {

/* A graphics resource: flag bits at 8, an owner handle at 0xC, a native handle at 0x1C and its context at 0x20. */
struct GfxResource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 flags;
    /* 0x0C */ u32 owner;
    /* 0x10 */ u8 unk10[0xC];
    /* 0x1C */ u32 handle;
    /* 0x20 */ u32 context;
};

struct GfxResourceRef {
    /* 0x00 */ GfxResource *resource;
};

typedef void (*GfxReleaseCallback)(u32 context, u32 command, u32 owner, u32 handle);
extern GfxReleaseCallback g_gfxReleaseCallback;

/* Releases the native handle of a graphics resource (unless it is shared) and detaches its owner. */
void FUN_0036f210(GfxResourceRef *ref)
{
    GfxResource *resource = ref->resource;

    if ((resource->flags & 1) == 0) {
        if ((resource->flags & 2) != 0) {
            if (resource->owner == 0) {
                return;
            }
            if (resource->context != 0) {
                g_gfxReleaseCallback(resource->context, 0x102, resource->owner, resource->handle);
                resource->handle = 0;
            }
        } else {
            if (resource->owner == 0) {
                return;
            }
            if (resource->context != 0) {
                g_gfxReleaseCallback(resource->context, 0x102, resource->owner, resource->handle);
                resource->handle = 0;
            }
        }
        resource->owner = 0;
    }
}

} /* extern "C" */
