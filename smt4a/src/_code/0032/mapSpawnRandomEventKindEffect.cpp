/* NON_MATCHING: equivalent float-add operand order and effect-argument move scheduling differ from retail. */
#include "common.h"
#include "shard/W5_W5Match7_SceneState.h"

extern "C" {
s32 FUN_00184964(s32 minimum, s32 maximum);
void FUN_003d4ed8(u32 effect, f32 x, f32 y, f32 z);

// Scatter one of four event-kind effects around the current map position.
void mapSpawnRandomEventKindEffect()
{
    MapVector position = g_lmapScene->position;
    position.x += FUN_00184964(-20, 20);
    position.z += FUN_00184964(-20, 20);
    u32 variant = FUN_00184964(0, 100) & 3;
    switch (g_gameState.eventKind) {
    case 0:
        FUN_003d4ed8(variant + 0x10002ac, position.x, position.y, position.z);
        return;
    case 1:
        FUN_003d4ed8(variant + 0x10002b1, position.x, position.y, position.z);
        return;
    case 2:
        FUN_003d4ed8(variant + 0x10002b6, position.x, position.y, position.z);
        return;
    case 3:
        FUN_003d4ed8(variant + 0x10002bb, position.x, position.y, position.z);
        return;
    case 4:
        FUN_003d4ed8(variant + 0x10002c0, position.x, position.y, position.z);
        return;
    case 5:
        FUN_003d4ed8(variant + 0x10002d5, position.x, position.y, position.z);
        return;
    }
}
}
