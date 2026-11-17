/* NON_MATCHING: signed spawn-request byte recovers literal-indexed load; saved XYZ/VFP registers and call setup scheduling differ. */
#include "gamedata/MapSaveBlockA.h"

extern "C" {
s32 lmapGetSpawnIndex();
void sceneRegisterBoxEffect(u32, u32, const char *, u32,
                            u32, s32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32,
                            f32 x, f32 y, f32 z, f32 width, f32 height, f32 depth, f32 rotation);

// Register the pending spawn's box effect at the supplied world position.
void FUN_003ae3c4(f32 x, f32 y, f32 z)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    s32 spawn = lmapGetSpawnIndex();
    if (flags->spawnPending != 0 && spawn >= 100) {
        sceneRegisterBoxEffect(0, 0, "NA", 0x58, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                               x, y - 200.0f, z, 700.0f, 400.0f, 700.0f, 0.0f);
    }
}
}
