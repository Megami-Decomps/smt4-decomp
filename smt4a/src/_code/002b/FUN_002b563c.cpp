/* NON_MATCHING: only the early-exit block layout differs (retail places the false return before the second check and jumps over it); the point arrives as three scalar floats like retail's separate vmov saves (the caller FUN_002469d0 passes a MapVector by value: same hard-float register assignment) */
#include "battle/btlView.h"
#include "shard/W6_W6Match6_CollisionQuad.h"

extern "C" {
extern BattleViewState g_battleViewState;
bool gameFlagIsSet(u32 flag);
bool mapResolveCircleOverlapXZ(CollisionVector *result, CollisionVector first,
                               f32 firstRadius, CollisionVector second, f32 secondRadius);

bool FUN_002b563c(CollisionVector *result, f32 x, f32 y, f32 z)
{
    if (!gameFlagIsSet(0x4d0) || g_battleViewState.attachments.state != 1) {
        return false;
    }
    BattleViewState *view = &g_battleViewState;
    if (view->positionsSet != 0) {
        return false;
    }
    CollisionVector point = {x, y, z};
    CollisionVector resolved;
    CollisionVector center = {view->camera.position.x, view->camera.position.y, view->camera.position.z};
    mapResolveCircleOverlapXZ(&resolved, point, 50.0f, center, 0.0f);
    *result = resolved;
    return true;
}
}
