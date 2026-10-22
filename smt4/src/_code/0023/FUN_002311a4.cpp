/* NON_MATCHING: Retail ends the position path with a NOP after restoring LR; explicit float-position stores need additional VFP code. */
#include "common.h"

struct PositionedTransition {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 state;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u32 flags;
    /* 0x014 */ u8 unk014[0x150];
    /* 0x164 */ f32 position[2];
    /* 0x16C */ u8 unk16C[0xC];
    /* 0x178 */ u8 transition[0x20];
    /* 0x198 */ u8 motion[0x14];
};
extern "C" {
void FUN_00233240(void *transition, s32 value);
s32 FUN_002bf818(void *motion);
s32 vec2GetYInt(void *motion);
s32 vec2GetXInt(void *motion);

/* Starts a transition, follows its integer position, then clears the active flag. */
void FUN_002311a4(PositionedTransition *work)
{
    switch (work->state) {
    case 0:
        FUN_00233240(work->transition, 0);
        work->flags = (work->flags & ~2u) | 0x1000000;
        work->state = 1;
        break;
    case 1: {
        if (FUN_002bf818(work->motion) != 0) {
            work->state = 2;
        }
        s32 y = vec2GetYInt(work->motion);
        s32 x = vec2GetXInt(work->motion);
        work->position[0] = static_cast<f32>(x);
        work->position[1] = static_cast<f32>(y);
        break;
    }
    case 2:
        work->flags &= ~0x1000000u;
        break;
    }
}
}
