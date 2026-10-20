#include "common.h"

extern "C" {

u32 FUN_00256fec(u32 resource);
int FUN_00257108(void);
int FUN_0025715c(void);
extern u32 FUN_00256fdc(u32 resource);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x140];
    /* 0x140 */ u32 resourceA;
    /* 0x144 */ u32 resourceB;
} Obj;

/* Takes a reference to the source's resourceB (or, if it has none, resourceA), dropping the destination's own first. */
void FUN_0031d338(Obj *dst, Obj *src)
{
    u32 resource;

    if (src->resourceB != 0) {
        if (dst->resourceB != 0) {
            FUN_0025715c();
        }
        resource = FUN_00256fec(src->resourceB);
        dst->resourceB = resource;
    } else if (src->resourceA != 0) {
        if (dst->resourceA != 0) {
            FUN_00257108();
        }
        resource = FUN_00256fdc(src->resourceA);
        dst->resourceA = resource;
        return;
    }
}

} /* extern "C" */
