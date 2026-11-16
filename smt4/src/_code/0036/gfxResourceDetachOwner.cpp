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

/* Releases the resource's native handle through the callback and detaches its owner. */
static __inline void gfxResourceDetach(GfxResource *resource)
{
    if (resource->owner == 0) {
        return;
    }
    if (resource->context != 0) {
        u32 *handle = &resource->handle;
        g_gfxReleaseCallback(resource->context, 0x102, resource->owner, *handle);
        *handle = 0;
    }
    resource->owner = 0;
}

/* Releases the native handle of a graphics resource (unless it is shared) and detaches its owner. */
void gfxResourceDetachOwner(GfxResourceRef *ref)
{
    GfxResource *resource = ref->resource;

    if ((resource->flags & 1) == 0) {
        /* Flag 2 resources take their own (identical) release path in the original. */
        if ((resource->flags & 2) != 0) {
            gfxResourceDetach(resource);
        } else {
            gfxResourceDetach(resource);
        }
    }
}

} /* extern "C" */
