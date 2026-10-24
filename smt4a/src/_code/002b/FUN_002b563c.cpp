/* NON_MATCHING: point preservation uses a different VFP register pair and the state checks share an epilogue. */
#include "battle/btlView.h"
#include "shard/W6_W6Match6_CollisionQuad.h"

struct BattleViewCollisionPosition {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ CollisionVector position;
};

extern "C" {
extern BattleViewState g_battleViewState;
bool gameFlagIsSet(u32 flag);
bool mapResolveCircleOverlapXZ(CollisionVector *result, CollisionVector first,
                               f32 firstRadius, CollisionVector second, f32 secondRadius);

bool FUN_002b563c(CollisionVector *result, CollisionVector point)
{
    if (!gameFlagIsSet(0x4d0) || g_battleViewState.attachments.state != 1 ||
        g_battleViewState.positionsSet != 0) {
        return false;
    }
    CollisionVector resolved;
    const BattleViewCollisionPosition *view =
        (const BattleViewCollisionPosition *)&g_battleViewState;
    mapResolveCircleOverlapXZ(&resolved, point, 50.0f, view->position, 0.0f);
    *result = resolved;
    return true;
}
}
