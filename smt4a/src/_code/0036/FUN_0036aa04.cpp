/* NON_MATCHING: readable rewrite compiles (222 vs 195 rows); the state-3 call arguments and the compare constants (fade > 0.1f) are inferred; retail shares the visibility updates differently */
#include "gamedata/MapSaveBlockA.h"
#include "map/LmapGlobals.h"
#include "game/GameStateA.h"

// Controller node: its hidden bits live in the word at +4.
struct ControllerNode {
    u32 unk00;
    u32 flags;              // 0x04: bits 0-1 = hidden
};

struct ControllerHandle {
    u32 unk00;
    ControllerNode* node;   // 0x04
};

// Party follower display: three controller handles and the follow state machine.
struct FollowerDisplay {
    u8 unk00[0x0b];
    u8 hideAll;                 // 0x0b
    u8 unk0c[0xbc - 0x0c];
    ControllerHandle* near;     // 0xbc
    u8 unkc0[8];
    f32 fade;                   // 0xc8
    u8 unkcc[0xd8 - 0xcc];
    ControllerHandle* mid;      // 0xd8
    u8 unkdc[0x10];
    ControllerHandle* far;      // 0xec
    s32 delay;                  // 0xf0
    u8 unkf4[0x93ca - 0xf4];
    u8 flag93ca;                // 0x93ca
};

extern "C" {

void controllerSetDestination(ControllerNode* node, const void* destination);
void controllerSetPosition(ControllerNode* node);
s32 slots4FGetActiveValue(ControllerNode* node);
void modelPlayClip(ControllerNode* node, s32 a, s32 b);
void moriModelUnitStartMaterialAnimation(ControllerNode* node, s32 a, s32 b);

static const u32 kHiddenBits = 3;

// Shows or hides one follower node depending on the fade value.
static void setFadeVisibility(ControllerNode* node, f32 fade)
{
    if (fade > 0.1f) node->flags &= ~kHiddenBits;
    else node->flags |= kHiddenBits;
}

// Updates the follower display: visibility of its three nodes, placement at the player and the intro states.
void FUN_0036aa04(FollowerDisplay* display)
{
    ControllerNode* mid = display->mid->node;
    ControllerNode* far = display->far->node;
    ControllerNode* near = display->near->node;
    if (g_gameState.loading != 0) {
        near->flags |= kHiddenBits;
        mid->flags |= kHiddenBits;
        far->flags |= kHiddenBits;
        return;
    }

    if (display->fade > 0.1f) near->flags &= ~kHiddenBits;
    mid->flags &= ~kHiddenBits;
    if (display->fade > 0.1f) far->flags &= ~kHiddenBits;
    if (display->hideAll != 0) {
        near->flags |= kHiddenBits;
        mid->flags &= ~kHiddenBits;
        far->flags |= kHiddenBits;
    } else {
        setFadeVisibility(near, display->fade);
        mid->flags |= kHiddenBits;
        setFadeVisibility(far, display->fade);
    }
    controllerSetDestination(near, &g_lmapScene->pose.position);
    controllerSetPosition(near);
    if (slots4FGetActiveValue(near) != 0) modelPlayClip(near, 0, 2);

    MapSaveBlockA *block = gameFlagsGetBlock();
    if (display->far == NULL) return;
    if (block->eventEnabled == 0 && block->followState != 3 && block->followState != 4) {
        block->followState = 0;
        far->flags |= kHiddenBits;
        return;
    }
    setFadeVisibility(far, display->fade);
    MapVector target = g_lmapScene->pose.position;
    target.y = g_lmapScene->pose.position.y + 20.0f;
    controllerSetDestination(far, &target);
    controllerSetPosition(far);
    s32 state = block->followState;
    if (state == 0) {
        modelPlayClip(far, 0, 2);
        block->followState = 1;
        display->delay = 0;
    } else if (state == 1) {
        if (++display->delay >= 11) {
            moriModelUnitStartMaterialAnimation(far, 1, 2);
            block->followState = 2;
            display->flag93ca = 1;
            display->delay = 0;
        }
    } else if (state == 2) {
        if (display->flag93ca == 0) {
            moriModelUnitStartMaterialAnimation(far, 1, 2);
            display->flag93ca = 1;
        }
    } else if (state == 3) {
        modelPlayClip(far, 2, 0);
        block->followState = 4;
        display->delay = 0;
    } else if (state == 4) {
        display->delay = 0;
        block->followState = 0;
        far->flags |= kHiddenBits;
    }
}

} /* extern "C" */
