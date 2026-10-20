#include "common.h"

extern "C" {

typedef struct Resource {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 flags;      /* bit 2: loaded */
} Resource;

/* Whether the resource has finished loading. */
u8 resourceIsReady(Resource *resource)
{
    if ((resource->flags & 4) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
