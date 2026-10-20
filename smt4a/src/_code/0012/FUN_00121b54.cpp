#include "common.h"

extern "C" {

typedef struct KindInfo {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 *target;
} KindInfo;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0xE8];
    /* 0xE8 */ u8 area[1];
} Owner;

KindInfo *FUN_002eac34(s32 kind);

/* Points the info records of kinds 3 and 2 at the owner's area at 0xE8. */
void FUN_00121b54(Owner *owner)
{
    KindInfo *info;

    info = FUN_002eac34(3);
    info->target = owner->area;
    info = FUN_002eac34(2);
    info->target = owner->area;
}

} /* extern "C" */
