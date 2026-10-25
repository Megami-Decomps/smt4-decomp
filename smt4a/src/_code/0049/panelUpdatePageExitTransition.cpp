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

static inline void beginSpriteTransitionState(SpriteTransitionWork *work, u32 state)
{
    work->previousState = work->state;
    work->state = state;
    work->phase = 0;
}
struct ObjectFlagState;
extern "C" {
void uiSpriteBankApplyPreset(void *sprite, s32 preset);
void FUN_00167458(void *motion, s32 mode);
s32 vec2GetYInt(const void *motion);
s32 vec2GetXInt(const void *motion);
s32 uiSpriteGetCompletionState(const ObjectFlagState *state);
void pointConvertToFloat(f32 *position, s32 x, s32 y);
s32 FUN_0023b3d0();

// Start the panel sprite, track its motion and advance to the page's completion state.
void panelUpdatePageExitTransition(SpriteTransitionWork *work)
{
    if (work->phase == 0) {
        uiSpriteBankApplyPreset(work->sprite, 0);
        work->phase = 1;
    } else if (work->phase == 1) {
        void *motion = work->motion;
        FUN_00167458(motion, 0);
        s32 y = vec2GetYInt(motion);
        s32 x = vec2GetXInt(motion);
        pointConvertToFloat(work->position, x, y);
        if (uiSpriteGetCompletionState(reinterpret_cast<const ObjectFlagState *>(motion))) {
            switch (work->page) {
            case 0: case 1: case 2: case 3: case 4: case 5: case 6:
                if (!FUN_0023b3d0())
                    return;
                // Fall through to the common completion state.
            case 7:
                beginSpriteTransitionState(work, 17);
                return;
            case 8:
                beginSpriteTransitionState(work, 18);
                return;
            }
        }
    }
}
}
