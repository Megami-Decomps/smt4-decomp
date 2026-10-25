#ifndef GFX_RESOURCE_DISPATCH_H
#define GFX_RESOURCE_DISPATCH_H

#include "shard/S1NwGfx.h"

struct DispatchResource {
    u32 flags; // 0x00
    u8 unk04[0x18];
    RelativePointer payload; // 0x1c

    static DispatchResource *cast(DispatchResource *resource)
    {
        if (resource == NULL)
            return NULL;
        if ((resource->flags & 0x20000004) != 0x20000004)
            return NULL;
        return resource;
    }
};
struct DispatchResourceReference {
    DispatchResource *resource;
    u32 flags;
};
struct DispatchResourceLookup {
    DispatchResource *resource;
    u8 found;
};
typedef char DispatchResourceLayoutCheck[
    sizeof(DispatchResource) == 0x20 && offsetof(DispatchResource, payload) == 0x1c &&
    sizeof(DispatchResourceReference) == 8 && sizeof(DispatchResourceLookup) == 8 &&
    offsetof(DispatchResourceLookup, found) == 4 ? 1 : -1];

#endif
