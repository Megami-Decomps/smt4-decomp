/* NON_MATCHING: armcc merges the flag store of states 0 and 2 into one predicated tail where retail stores and returns in each case (switch, if-chain and bitfield forms tried; smt4a twin FUN_0048d11c has the same shape). */
#include "common.h"
#include "shard/W5_W5Match2_ScalarArguments.h"

struct PositionedTransition {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 state;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u32 unk10_0 : 1;
    /* 0x010 */ u32 hidden : 1;
    /* 0x010 */ u32 unk10_2 : 22;
    /* 0x010 */ u32 animating : 1;
    /* 0x010 */ u32 unk10_25 : 7;
    /* 0x014 */ u8 unk014[0x150];
    /* 0x164 */ FloatPoint position;
    /* 0x16C */ u8 unk16C[0xC];
    /* 0x178 */ u8 transition[0x20];
    /* 0x198 */ u8 motion[0x14];
};
extern "C" {
void FUN_00233240(void *transition, s32 value);
s32 FUN_002bf818(void *motion);
s32 vec2GetYInt(void *motion);
s32 vec2GetXInt(void *motion);
void pointConvertToFloat(FloatPoint *point, s32 x, s32 y);

/* Starts a transition, follows its integer position, then clears the active flag. */
void FUN_002311a4(PositionedTransition *work)
{
    if (work->state == 0) {
        FUN_00233240(work->transition, 0);
        work->hidden = 0;
        work->animating = 1;
        work->state = 1;
    } else if (work->state == 1) {
        u8 *motion = work->motion;
        if (FUN_002bf818(motion) != 0) {
            work->state = 2;
        }
        s32 y = vec2GetYInt(motion);
        pointConvertToFloat(&work->position, vec2GetXInt(motion), y);
    } else if (work->state == 2) {
        work->animating = 0;
    }
}
}
