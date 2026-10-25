/* NON_MATCHING: cast folding, relative-pointer arithmetic, and lookup-failure epilogue differ. */
#include "gfx/ResourceDispatch.h"

extern "C" {
void FUN_0013fec8(DispatchResourceReference *reference, DispatchResource *resource, u32 flags);
void FUN_002a7c80(DispatchResourceLookup *result, const DispatchResourceReference *reference);
u32 FUN_002bd498(DispatchResource **resource, u32 allocator, u32 flags);

// Resolve a resource's embedded payload, loading it on demand before dispatch.
u32 FUN_0036eaf0(u32 allocator, DispatchResource *resource, u32 flags)
{
    u32 result = 0;
    DispatchResource *payload = NULL;
    if (resource != NULL) {
        bool ready = true;
        DispatchResource *container = DispatchResource::cast(resource);
        if (container != NULL) {
            if (container->payload.get() != NULL) {
                payload = (DispatchResource *)container->payload.get();
            } else {
                DispatchResourceLookup lookup;
                lookup.resource = NULL;
                lookup.found = 0;
                DispatchResourceReference reference;
                FUN_0013fec8(&reference, container, flags);
                FUN_002a7c80(&lookup, &reference);
                if (!lookup.found) {
                    result |= 0x80000001;
                    ready = false;
                } else {
                    payload = lookup.resource;
                }
            }
        } else {
            payload = resource;
        }
        if (ready)
            result |= FUN_002bd498(&payload, allocator, flags);
    }
    return result;
}
}
