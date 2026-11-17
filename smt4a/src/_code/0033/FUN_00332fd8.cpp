/* NON_MATCHING: VFP constant allocation only: retail keeps 0.0f in the first saved register s16 and uses six saved VFP registers (d8-d10) where the build lands the zero in s21 and needs seven; the string, jump-table labels and vector initialisers now match. */
#include "common.h"
#include "util/MathFunctions.h"
#include "gamedata/DataTable4CValue.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/MapSaveBlockA.h"

extern "C" {
s32 FUN_002393cc(s32 scene);
f32 calcHeadingRoundedToCardinalDirection(f32 heading);
f32 libm_sinf(f32 radians);
f32 libm_cosf(f32 radians);
void sceneRegisterBoxEffect(s32 a, s32 b, const char *name, s32 c, s32 d, s32 e, s32 f0, s32 f1, s32 f2, s32 f3,
                            s32 f4, s32 f5, s32 f6, s32 f7, s32 g, s32 h, s32 kind, s32 i, s32 j, s32 k,
                            MapVector position, MapVector size, f32 heading);

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
    MapVector position;
    position.x = x;
    position.y = 0.0f;
    position.z = z;
    MapVector size;
    size.x = 200.0f;
    size.y = 200.0f;
    size.z = 120.0f;
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
        sceneRegisterBoxEffect(0, 0, "T_FOUNTAIN", 82, 36, -1, 0, 0, 0, 0, 0, 0, 0, 0, 13, 1, kind, 1, -1, 0,
                               position, size, heading);
    } else {
        sceneRegisterBoxEffect(0x205, 0, "T_FOUNTAIN", 86, 12, -1, 0, 0, 0, 0, 0, 0, 0, 0, 13, 1, 1, 1, -1, 0,
                               position, size, heading);
    }
}
}
