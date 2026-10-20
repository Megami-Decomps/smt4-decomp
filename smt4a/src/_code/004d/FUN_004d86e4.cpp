#include "common.h"

extern "C" {

typedef struct Resource {
    u8 unk00[4];
    u32 handle; /* 0x04 */
} Resource;

typedef struct ResourceRef {
    Resource *resource; /* 0x00 */
} ResourceRef;

extern s32 FUN_004ff9b4(u32 handle);

/* Forwards the referenced resource's handle; an empty reference counts as success (1). */
s32 FUN_004d86e4(ResourceRef *ref)
{
    if (ref->resource == NULL) {
        return 1;
    }
    return FUN_004ff9b4(ref->resource->handle);
}

} /* extern "C" */
