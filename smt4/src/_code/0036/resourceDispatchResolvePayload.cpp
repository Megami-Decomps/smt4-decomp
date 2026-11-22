/* NON_MATCHING: retail materialises the cast result as its own pointer (mov r1, r0; bics; movne r1, #0) and resolves
 * the payload offset twice (base + offset for the test, offset + base for the value); this build folds both. */
#include "gfx/ResourceDispatch.h"
#include "gfx/GfxResult.h"

extern "C" {
void FUN_0013fec8(DispatchResourceReference *reference, DispatchResource *resource, u32 flags);
void __ARM_common_memcpy4_5(DispatchResourceLookup *result, const DispatchResourceReference *reference);
u32 FUN_002bd498(DispatchResource **resource, u32 allocator, u32 flags);

/* Resolves a resource's embedded payload, loading it on demand before dispatch; 0x80000001 when the reference is not found. */
GfxResult resourceDispatchResolvePayload(u32 allocator, DispatchResource *resource, u32 flags)
{
    GfxResult result;
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
                __ARM_common_memcpy4_5(&lookup, &reference);
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
