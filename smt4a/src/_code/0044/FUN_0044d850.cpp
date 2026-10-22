/* NON_MATCHING: native vector destruction loops and allocator-call register scheduling differ. */
#include "shard/LateStartResourceOwners.h"
struct ResourceOwnerEntry {
    u32 unk00;
    OwnedResourceObject resource;
};
struct ResourceOwnerArrays {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ AllocatedResourceBuffer objects;
    /* 0x1C */ AllocatedResourceBuffer first;
    /* 0x2C */ AllocatedResourceBuffer second;
};
extern "C" {
extern const u32 DAT_0055b9ec[];
ResourceOwnerArrays *FUN_0044d850(ResourceOwnerArrays *object)
{
    object->vtable = DAT_0055b9ec;
    object->second.clearAndRelease();
    object->first.clearAndRelease();
    ResourceOwnerEntry *end = static_cast<ResourceOwnerEntry *>(object->objects.end);
    for (ResourceOwnerEntry *entry = static_cast<ResourceOwnerEntry *>(object->objects.begin);
         entry != end; ++entry)
        entry->resource.release();
    object->objects.clearAndRelease();
    return object;
}
}
