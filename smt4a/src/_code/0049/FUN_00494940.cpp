/* NON_MATCHING: motion-subobject addresses are recomputed and retail's removed-hook NOPs are absent. */
#include "common.h"

struct SpriteTransitionWork {
    u32 unk000;
    u32 state, phase;
    u32 unk00c, previousState;
    u8 unk014[0x390];
    f32 position[2]; // 0x3a4
    u8 unk3ac[0x20];
    u8 sprite[0x20]; // 0x3cc
    u8 motion[0x8a]; // 0x3ec
    s8 completed; // 0x476
    u8 unk477[0x6c9];
    u32 page; // 0xb40
};
extern "C" {
void uiSpriteBankApplyPreset(void *sprite, s32 preset);
void FUN_00167458(void *motion, s32 mode);
s32 vec2GetYInt(const void *motion);
s32 vec2GetXInt(const void *motion);
void pointConvertToFloat(f32 *position, s32 x, s32 y);
s32 FUN_0023b3d0();

// Start the panel sprite, track its motion and advance to the page's completion state.
void FUN_00494940(SpriteTransitionWork *work)
{
    if (work->phase == 0) {
        uiSpriteBankApplyPreset(work->sprite, 0);
        work->phase = 1;
    } else if (work->phase == 1) {
        FUN_00167458(work->motion, 0);
        s32 y = vec2GetYInt(work->motion);
        s32 x = vec2GetXInt(work->motion);
        pointConvertToFloat(work->position, x, y);
        if (work->completed) {
            switch (work->page) {
            case 0: case 1: case 2: case 3: case 4: case 5: case 6:
                if (!FUN_0023b3d0())
                    return;
                // Fall through to the common completion state.
            case 7:
                work->previousState = work->state;
                work->state = 17;
                work->phase = 0;
                return;
            case 8:
                work->previousState = work->state;
                work->state = 18;
                work->phase = 0;
                return;
            }
        }
    }
}
}
