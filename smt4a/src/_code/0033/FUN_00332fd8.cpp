/* NON_MATCHING: 62 lines off; sceneRegisterBoxEffect now takes its definition's 19 integer and 7 float arguments. Retail copies the zero (y) into s19 early and reuses s16 for z, loads 90.0f before the predicated move; the build keeps the zero in s16 and z in s19. */
#include "common.h"
#include "util/MathFunctions.h"
#include "gamedata/DataTable4CValue.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/MapSaveBlockA.h"
#include "util/TrigF32.h"

extern "C" {
s32 FUN_002393cc(s32 scene);
f32 calcHeadingRoundedToCardinalDirection(f32 heading);

s32 sceneRegisterBoxEffect(u32 id, u32 value, const char *name, u32 resource,
    u32 effect, s32 variant, u8 option0, u8 option1, u8 option2,
    u8 option3, u8 option4, u8 option5, u8 flag0, u8 flag1, u8 option,
    u32 data0, u32 data1, u32 data2, u32 priority,
    f32 x, f32 y, f32 z, f32 extent0, f32 extent1, f32 extent2, f32 yaw);

/* Place the fountain box effect in front of the map target, facing along the rounded cardinal heading. */
void FUN_00332fd8(void)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    MapMazeState *grid = &block->maze;
    if (grid->ready == 0)
        return;
    s32 gridX = grid->displayX;
    s32 gridY = grid->displayY;
    s32 scene = FUN_003857c8(static_cast<s32>(block->unk15C4));
    MapVector from;
    from.x = static_cast<f32>(gridX);
    from.y = 0.0f;
    from.z = static_cast<f32>(gridY);
    MapVector to;
    to.x = static_cast<f32>(grid->spawnX);
    to.y = 0.0f;
    to.z = static_cast<f32>(grid->spawnZ);
    f32 heading = calcHeadingRoundedToCardinalDirection(mathPositionHeadingDegrees(from, to));
    s8 forced = block->entranceHeading;
    if (forced != 0) {
        if (forced == 64 || forced == 66)
            heading = 90.0f;
        else if (forced == 65 || forced == 67)
            heading = 0.0f;
    }
    f32 x = static_cast<f32>(grid->displayX * 700 + 350);
    f32 z = static_cast<f32>(grid->displayY * 700 + 350);
    f32 radians = heading * 0.017453292f;
    x -= libm_sinf(radians) * 250.0f;
    z -= libm_cosf(radians) * 250.0f;
    s32 kind = 18;
    if (FUN_002393cc(scene) != 0) {
        switch (scene) {
        case 0: break;
        case 1: break;
        case 2: kind = 19; break;
        case 3: kind = 20; break;
        case 4: kind = 21; break;
        case 5: kind = 22; break;
        case 6: kind = 23; break;
        case 7: kind = 24; break;
        case 8: kind = 25; break;
        }
        sceneRegisterBoxEffect(0, 0, "T_FOUNTAIN", 82, 36, -1, 0, 0, 0, 0, 0, 0, 0, 13, 1, kind, 1, -1, 0,
                               x, 0.0f, z, 200.0f, 200.0f, 120.0f, heading);
    } else {
        sceneRegisterBoxEffect(0x205, 0, "T_FOUNTAIN", 86, 12, -1, 0, 0, 0, 0, 0, 0, 0, 13, 1, 1, 1, -1, 0,
                               x, 0.0f, z, 200.0f, 200.0f, 120.0f, heading);
    }
}
}
