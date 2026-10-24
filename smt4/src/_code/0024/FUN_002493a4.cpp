/* NON_MATCHING: retail compiles the switch to a 10-entry jump table (cases 1,4,9 and 2; the rest return); armcc here emits a compare chain for the same cases. */
#include "common.h"

extern "C" {

/* An object that owns a geometry handle at 0x50. */
struct GeometryOwner {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 geometry;
};

void geometryDestroy(void);
u32 FUN_002de270(u32 id, u32 flags);

/* Replaces the object's geometry with the one for `id`, created with flags chosen by `kind`. */
void FUN_002493a4(GeometryOwner *owner, u32 id, u32 kind)
{
    if (owner->geometry != 0) {
        geometryDestroy();
    }
    switch (kind) {
    case 1:
    case 4:
    case 9:
        owner->geometry = FUN_002de270((u16)id, 0x20080027);
        break;
    case 2:
        owner->geometry = FUN_002de270((u16)id, 0x200000A7);
        break;
    case 0:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    default:
        break;
    }
}

} /* extern "C" */
