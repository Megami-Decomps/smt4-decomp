#include "common.h"

struct Obj315834 {
    u8 unk00[0xc];
    u16 kind;
};

extern "C" {
void *resourceResolveHeaderPointer(const Obj315834 *resource);
void *effPolyThunderCreate(u32 kind, void *params);

/* Creates a thunder effect of the resource's kind from its resolved header. */
void FUN_00315834(Obj315834 *resource)
{
    effPolyThunderCreate(resource->kind, resourceResolveHeaderPointer(resource));
}
}
