/* NON_MATCHING: armcc adds a branch to the next instruction after the conditional move; retail falls through */
#include "common.h"

extern "C" {

typedef struct ModeInfo {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s32 type;
} ModeInfo;

typedef struct ModeOwner {
    /* 0x000 */ u8 unk000[0xAD8];
    /* 0xAD8 */ ModeInfo *info;
} ModeOwner;

/* Returns 4 when the owner's info is of type 6, else 5. */
u32 FUN_00468858(ModeOwner *owner)
{
    ModeInfo *info = owner->info;
    u32 result = 5;

    if (info != NULL && info->type == 6) {
        result = 4;
    }
    return result;
}

} /* extern "C" */
