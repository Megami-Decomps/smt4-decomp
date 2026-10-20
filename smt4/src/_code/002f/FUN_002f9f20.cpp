#include "common.h"

extern "C" {

u32 handleBlockRefCreate(u32 resource);
int handleBlockUnref(void);
int handleBlockRefDrop(void);
extern u32 handleRefIncrement(u32 resource);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xCC];
    /* 0xCC */ u32 resourceA;
    /* 0xD0 */ u32 resourceB;
} Obj;

/* Takes a reference to the source's resourceB (or, if it has none, resourceA), dropping the destination's own first. */
void FUN_002f9f20(Obj *dst, Obj *src)
{
    u32 resource;

    if (src->resourceB != 0) {
        if (dst->resourceB != 0) {
            handleBlockRefDrop();
        }
        resource = handleBlockRefCreate(src->resourceB);
        dst->resourceB = resource;
    } else if (src->resourceA != 0) {
        if (dst->resourceA != 0) {
            handleBlockUnref();
        }
        resource = handleRefIncrement(src->resourceA);
        dst->resourceA = resource;
        return;
    }
}

} /* extern "C" */
