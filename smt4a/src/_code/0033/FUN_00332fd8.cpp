/* NON_MATCHING: the grid sub-block pointer (block+0xE00 in r4) now matches retail's prologue; retail keeps 0.0f in s16 for the position vectors where the build moves a zero from a core register (extra saved r9 and frame word). Argument decode (position/size vectors, 20 integer arguments) taken from the retail asm. */
#include "common.h"
#include "Model/ModelList.h"
#include "gamedata/GameDataAccess.h"

struct MapPoint {
    f32 x, y, z;
};

/* The flags block (accessed fields). */
struct MapGridState {
    s8 targetX;             // 0xE00
    s8 targetY;             // 0xE01
    u8 unk02[7];
    u8 effectActive;        // 0xE09
    s8 gridX;               // 0xE0A
    s8 gridY;               // 0xE0B
};

struct MapFlagsBlock {
    u8 unk0000[0xE00];
    MapGridState grid;      // 0xE00
    u8 unkE0C[0x860];
    s8 forcedHeading;       // 0x166C
    u8 unk166D[0x7];
    f32 unk1674;
};

extern "C" {
s32 FUN_002393cc(s32 scene);
f32 mathPositionHeadingDegrees(MapPoint from, MapPoint to);
f32 calcHeadingRoundedToCardinalDirection(f32 heading);
f32 FUN_001bc124(f32 radians);
f32 FUN_001bbf0c(f32 radians);
void sceneRegisterBoxEffect(s32 a, s32 b, const char *name, s32 c, s32 d, s32 e, s32 f0, s32 f1, s32 f2, s32 f3,
                            s32 f4, s32 f5, s32 f6, s32 f7, s32 g, s32 h, s32 kind, s32 i, s32 j, s32 k,
                            MapPoint position, MapPoint size, f32 heading);

/* Place the fountain box effect in front of the map target, facing along the rounded cardinal heading. */
void FUN_00332fd8(void)
{
    MapFlagsBlock *block = reinterpret_cast<MapFlagsBlock *>(gameFlagsGetBlock());
    MapGridState *grid = &block->grid;
    if (grid->effectActive == 0)
        return;
    s32 gridX = grid->gridX;
    s32 gridY = grid->gridY;
    s32 scene = FUN_003857c8(static_cast<s32>(*reinterpret_cast<f32 *>(reinterpret_cast<u8 *>(block) + 0x15C4)));
    MapPoint from = {static_cast<f32>(gridX), 0.0f, static_cast<f32>(gridY)};
    MapPoint to = {static_cast<f32>(grid->targetX), 0.0f, static_cast<f32>(grid->targetY)};
    f32 heading = calcHeadingRoundedToCardinalDirection(mathPositionHeadingDegrees(from, to));
    s8 forced = block->forcedHeading;
    if (forced != 0) {
        if (forced == 64 || forced == 66)
            heading = 90.0f;
        else if (forced == 65 || forced == 67)
            heading = 0.0f;
    }
    f32 x = static_cast<f32>(grid->gridX * 700 + 350);
    f32 z = static_cast<f32>(grid->gridY * 700 + 350);
    f32 radians = heading * 0.017453292f;
    x -= FUN_001bc124(radians) * 250.0f;
    z -= FUN_001bbf0c(radians) * 250.0f;
    MapPoint position = {x, 0.0f, z};
    MapPoint size = {200.0f, 200.0f, 120.0f};
    s32 kind = 18;
    if (FUN_002393cc(scene) != 0) {
        switch (scene) {
        case 2: kind = 19; break;
        case 3: kind = 20; break;
        case 4: kind = 21; break;
        case 5: kind = 22; break;
        case 6: kind = 23; break;
        case 7: kind = 24; break;
        case 8: kind = 25; break;
        }
        sceneRegisterBoxEffect(0, 0, "HCT_FOUNTAIN", 82, 36, -1, 0, 0, 0, 0, 0, 0, 0, 0, 13, 1, kind, 1, -1, 0,
                               position, size, heading);
    } else {
        sceneRegisterBoxEffect(0x205, 0, "HCT_FOUNTAIN", 86, 12, -1, 0, 0, 0, 0, 0, 0, 0, 0, 13, 1, 1, 1, -1, 0,
                               position, size, heading);
    }
}
}
