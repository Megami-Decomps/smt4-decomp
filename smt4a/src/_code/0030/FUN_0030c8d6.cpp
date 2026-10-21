/* NON_MATCHING: compiler changes virtual-call and fallback-pointer register allocation. */
#include "common.h"
extern "C" {
struct Resource { u8 unk00[0x78]; u32 value; };
struct Object { u8 unk00[0x48]; Resource *resource; u32 value; u8 unk50[0x24]; void *fallback; };
struct Owner;
struct OwnerVtable { u8 unk00[0xFC]; u32 (*resolve)(Owner *); };
struct Owner { OwnerVtable *vtable; u32 unk04; void *fallback; };
Resource *FUN_002f4d9c(void *resource, u32 kind);
s32 FUN_0030c8d6(Owner *owner, Object *object) {
    if (!owner->vtable->resolve(owner)) return 1;
    void *fallback = object->fallback;
    if (!fallback) fallback = owner->fallback;
    if (!fallback) return 0;
    Resource *resource = FUN_002f4d9c(fallback, 0x73);
    if (!resource) return 0;
    object->value = resource->value;
    object->resource = resource;
    return 1;
}
}
