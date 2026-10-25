/* NON_MATCHING: native sound vector argument matches retail call setup, but initial coordinate loads and float-add operands differ. */
#include "common.h"
#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"

extern "C" {
s32 FUN_00184964(s32 minimum, s32 maximum);
s32 FUN_003d4ed8(u32 sound, BattleVector3 position);

// Scatter one of four event-kind sounds around the current map position.
void mapSpawnRandomEventKindEffect()
{
    BattleVector3 position = { g_lmapScene->position.x, g_lmapScene->position.y, g_lmapScene->position.z };
    position.x += FUN_00184964(-20, 20);
    position.z += FUN_00184964(-20, 20);
    u32 variant = FUN_00184964(0, 100) & 3;
    switch (g_gameState.eventKind) {
    case 0:
        FUN_003d4ed8(variant + 0x10002ac, position);
        return;
    case 1:
        FUN_003d4ed8(variant + 0x10002b1, position);
        return;
    case 2:
        FUN_003d4ed8(variant + 0x10002b6, position);
        return;
    case 3:
        FUN_003d4ed8(variant + 0x10002bb, position);
        return;
    case 4:
        FUN_003d4ed8(variant + 0x10002c0, position);
        return;
    case 5:
        FUN_003d4ed8(variant + 0x10002d5, position);
        return;
    }
}
}
