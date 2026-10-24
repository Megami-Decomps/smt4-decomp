/* NON_MATCHING: retail dispatches on the kind through a 10-entry jump table; the compiler emits a compare chain for the same cases */
#include "common.h"

struct GeometryOwner {
    u8 unk00[0x50];  // 0x00
    u32 geometry;    // 0x50
};

extern "C" {

void geometryDestroy(u32 geometry);
u32 FUN_00350cf4(u32 id, u32 flags);

/* Replaces the owner's geometry with the one for `id`; the flags depend on the kind (2 differs from 1/4/9). */
void FUN_0035105c(GeometryOwner *owner, u32 id, u32 kind)
{
    if (owner->geometry != 0) {
        geometryDestroy(owner->geometry);
    }
    switch (kind) {
    case 1:
    case 4:
    case 9:
        owner->geometry = FUN_00350cf4((u16)id, 0x20080027);
        break;
    case 2:
        owner->geometry = FUN_00350cf4((u16)id, 0x200000A7);
        break;
    }
}

} /* extern "C" */
