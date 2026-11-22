/* NON_MATCHING: 138 lines. Rewritten from retail: the bodies' scale is the fade times 50, the clips and material
 * animations take their float arguments, the material flag at +0x936A is s8 (retail reads it through a pooled
 * offset) and the follow states are an if/else chain. Left: retail keeps 0 in a callee-saved register for the near
 * body's clip (one more saved register, a 16-byte frame), tests the two leave states with separate branches where
 * the build uses cmpne, and shares the `delay = 0` tail between states 1 and 3 (the build: 0 and 3). */
#include "gamedata/MapSaveBlockA.h"
#include "map/LmapGlobals.h"
#include "game/GameStateA.h"
#include "gfx/ControllerModel.h"
#include "Model/MoriModelContent.h"

/* unit-local: the follower display is known only through this update (its three model contents and the follow
 * state); its owner type has not been identified yet. */
struct FollowerDisplay {
    /* 0x0000 */ u8 unk0000[0xB];
    /* 0x000B */ u8 hideAll;
    /* 0x000C */ u8 unk000C[0xB0];
    /* 0x00BC */ MoriModelContent *nearModel;
    /* 0x00C0 */ u8 unk00C0[8];
    /* 0x00C8 */ f32 fade;
    /* 0x00CC */ u8 unk00CC[0xC];
    /* 0x00D8 */ MoriModelContent *midModel;
    /* 0x00DC */ u8 unk00DC[0x10];
    /* 0x00EC */ MoriModelContent *farModel;
    /* 0x00F0 */ s32 delay;
    /* 0x00F4 */ u8 unk00F4[0x9276];
    /* 0x936A */ s8 materialStarted;
};

enum {
    FOLLOWER_HIDDEN_BITS = 3 /* Obj557b18::flags bits that hide the body */
};

extern "C" {

/* Shows `body` while the display's fade is above 0.1, hides it otherwise. */
static __inline void followerSetFadeVisibility(Obj557b18 *body, f32 fade)
{
    if (fade > 0.1f)
        body->flags &= ~FOLLOWER_HIDDEN_BITS;
    else
        body->flags |= FOLLOWER_HIDDEN_BITS;
}

/* Updates the follower display: the visibility of its three bodies, the near body at the player and the far
 * body's follow states (appear, start its material animation, leave). */
void followerDisplayUpdate(FollowerDisplay *display)
{
    Obj557b18 *mid = display->midModel->body;
    Obj557b18 *far = display->farModel->body;
    Obj557b18 *near = display->nearModel->body;

    if (g_gameState.loading != 0) {
        near->flags |= FOLLOWER_HIDDEN_BITS;
        mid->flags |= FOLLOWER_HIDDEN_BITS;
        far->flags |= FOLLOWER_HIDDEN_BITS;
        return;
    }

    if (display->fade > 0.1f)
        near->flags &= ~FOLLOWER_HIDDEN_BITS;
    mid->flags &= ~FOLLOWER_HIDDEN_BITS;
    if (display->fade > 0.1f)
        far->flags &= ~FOLLOWER_HIDDEN_BITS;
    if (display->hideAll == 0) {
        followerSetFadeVisibility(near, display->fade);
        mid->flags |= FOLLOWER_HIDDEN_BITS;
        followerSetFadeVisibility(far, display->fade);
    } else {
        near->flags |= FOLLOWER_HIDDEN_BITS;
        mid->flags &= ~FOLLOWER_HIDDEN_BITS;
        far->flags |= FOLLOWER_HIDDEN_BITS;
    }
    controllerSetDestination(near, &g_lmapScene->pose.position);
    controllerSetPosition(near, display->fade * 50.0f, display->fade * 50.0f, display->fade * 50.0f);
    if (slots4FGetActiveValue(near) != 0)
        modelPlayClip(near, 0, 2, 0.0f, 0.0f);

    MapSaveBlockA *block = gameFlagsGetBlock();

    if (display->farModel == NULL)
        return;
    if (block->eventEnabled == 0 && block->followState != 3 && block->followState != 4) {
        block->followState = 0;
        far->flags |= FOLLOWER_HIDDEN_BITS;
        return;
    }
    followerSetFadeVisibility(far, display->fade);

    MapVector target = g_lmapScene->pose.position;

    target.y += 20.0f;
    controllerSetDestination(far, &target);
    controllerSetPosition(far, display->fade * 50.0f, display->fade * 50.0f, display->fade * 50.0f);
    s32 state = block->followState;

    if (state == 0) {
        modelPlayClip(far, 0, 2, 0.0f, 0.0f);
        block->followState = 1;
        display->delay = 0;
    } else if (state == 1) {
        if (++display->delay > 10) {
            moriModelUnitStartMaterialAnimation(far, 1, 2, 0.0f);
            block->followState = 2;
            display->materialStarted = 1;
            display->delay = 0;
        }
    } else if (state == 2) {
        if (display->materialStarted == 0) {
            moriModelUnitStartMaterialAnimation(far, 1, 2, 0.0f);
            display->materialStarted = 1;
        }
    } else if (state == 3) {
        modelPlayClip(far, 2, 2, 0.0f, 0.0f);
        block->followState = 4;
        display->delay = 0;
    } else if (state == 4) {
        display->delay = 0;
        block->followState = 0;
        far->flags |= FOLLOWER_HIDDEN_BITS;
    }
}

} /* extern "C" */
