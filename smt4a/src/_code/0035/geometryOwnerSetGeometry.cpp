#include "common.h"
#include "code/Code0035_Smt4a.h"

struct GeometryOwner {
    u8 unk00[0x50];  // 0x00
    u32 geometry;    // 0x50
};

extern "C" {

void geometryDestroy(u32 geometry);
u32 effGeomCreateBufferHandle(u32 id, u32 flags);

/* Replaces the owner's geometry with the one for `id`; the flags depend on the kind (2 differs from 1/4/9). */
void geometryOwnerSetGeometry(GeometryOwner *owner, u32 id, u32 kind)
{
    if (owner->geometry != 0) {
        geometryDestroy(owner->geometry);
    }
    switch (kind) {
    case 1:
    case 4:
    case 9:
        owner->geometry = effGeomCreateBufferHandle((u16)id, 0x20080027);
        break;
    case 2:
        owner->geometry = effGeomCreateBufferHandle((u16)id, 0x200000A7);
        break;
    case 0:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
        break;
    }
}

} /* extern "C" */
