/* NON_MATCHING: retail tests checkFirst in r0 before loading the id; armcc here loads the flag into
 * r1 and the id into r0 first */
#include "common.h"

struct Unk2540b8Owner {
    /* 0x000 */ u8 unk000[0x5C4];
    /* 0x5C4 */ u8 checkFirst;
    /* 0x5C5 */ u8 unk5C5[0x3BD];
    /* 0x982 */ u16 id;
};

extern "C" {

s32 FUN_00298fa0(u16 id, u32 arg);
s32 FUN_00298f88(u16 id);
s32 FUN_002886c8(u16 id);
s32 FUN_002886b0(u16 id);
s32 idIsAtLeast350(u16 id);
void gameFlagClearModeBits(u16 id);

/* Clears the owner id's mode bits when its checks say so. */
void FUN_002540b8(Unk2540b8Owner *owner)
{
    if (owner->checkFirst != 0) {
        if (FUN_00298fa0(owner->id, 0) && FUN_00298f88(owner->id) &&
            (FUN_002886c8(owner->id) || FUN_002886b0(owner->id))) {
            gameFlagClearModeBits(owner->id);
        }
    } else if (idIsAtLeast350(owner->id)) {
        if (FUN_002886c8(owner->id)) {
            gameFlagClearModeBits(owner->id);
        }
    } else if (FUN_00298fa0(owner->id, 0) && !FUN_00298f88(owner->id) &&
               (FUN_002886c8(owner->id) || FUN_002886b0(owner->id))) {
        gameFlagClearModeBits(owner->id);
    }
}

} /* extern "C" */
