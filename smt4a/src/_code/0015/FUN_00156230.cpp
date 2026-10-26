/* NON_MATCHING: completion getter sequences match retail; retail shares one `mode = 0` store between cases 4 and 6, factors the phase tests as bne/b and orders the pending/current copy before the sprite address, constants in a different order. */
#include "ui/MenuState.h"
#include "ui/UiSpriteState.h"
#include <stddef.h>

extern "C" {
extern MenuState *g_menuState;
s32 FUN_00163aa4(UiSpriteState *sprite, f32 speed);
s8 uiSpriteGetCompletionState(const UiSpriteState *sprite);

// Advance the opening, closing and delayed multi-panel animation phases.
u32 FUN_00156230(void)
{
    // Timer and all four sprites span unaligned padding in the canonical menu prefix.
    struct MenuAnimationView {
        u8 unk000[8];
        u32 mode;
        s32 timer;
        u8 unk010[0x2C];
        UiSpriteState sprites[4];
        u8 unk26C[0x50];
        s32 phase;
        u32 unk2C0;
        u32 pending, current;
    };
    typedef char MenuAnimationOffsets[offsetof(MenuAnimationView, sprites) == 0x3C &&
        offsetof(MenuAnimationView, phase) == 0x2BC && sizeof(MenuAnimationView) == sizeof(MenuState) ? 1 : -1];
    MenuAnimationView *work = reinterpret_cast<MenuAnimationView *>(g_menuState);
    switch (work->mode) {
    case 1:
        if (FUN_00163aa4(&work->sprites[0], 1.0f)) {
            work->timer = 0;
            work->mode = 2;
        }
        break;
    case 4:
        if (FUN_00163aa4(&work->sprites[0], 1.0f))
            work->mode = 0;
        break;
    case 5:
        if (work->phase == 0) {
            FUN_00163aa4(&work->sprites[0], 1.0f);
            FUN_00163aa4(&work->sprites[2], 1.0f);
            if (uiSpriteGetCompletionState(&work->sprites[0]) && uiSpriteGetCompletionState(&work->sprites[2])) {
                work->timer = 0;
                work->phase = 2;
                FUN_00163aa4(&work->sprites[1], 1.0f);
            }
            break;
        }
        if (work->phase == 2 && work->timer >= 20) {
            work->current = work->pending;
            uiSpriteSelectAnim(&work->sprites[3], 5);
            work->phase = 3;
        }
        if (work->phase == 3 && FUN_00163aa4(&work->sprites[3], 1.0f))
            work->phase = 4;
        // The middle panel continues through each delayed transition phase.
    case 2:
        FUN_00163aa4(&work->sprites[1], 1.0f);
        break;
    case 6:
        FUN_00163aa4(&work->sprites[0], 1.0f);
        FUN_00163aa4(&work->sprites[2], 1.0f);
        if (uiSpriteGetCompletionState(&work->sprites[0]) && uiSpriteGetCompletionState(&work->sprites[2]))
            work->mode = 0;
        break;
    }
    ++work->timer;
    return 0;
}
}
