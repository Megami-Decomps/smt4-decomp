/* NON_MATCHING: restored XYZ arguments, but saved VFP registers and the spawn-flag address calculation differ. */
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {
FlagWorkBanks *gameFlagsGetBlock();
s32 lmapGetSpawnIndex();
void sceneRegisterBoxEffect(u32, u32, const char *, u32,
                            u32, s32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32,
                            f32 x, f32 y, f32 z, f32 width, f32 height, f32 depth, f32 rotation);

// Register the pending spawn's box effect at the supplied world position.
void FUN_003ae3c4(f32 x, f32 y, f32 z)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    s32 spawn = lmapGetSpawnIndex();
    if (flags->spawnRequest.pending != 0 && spawn >= 100) {
        sceneRegisterBoxEffect(0, 0, "NA", 0x58, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                               x, y - 200.0f, z, 700.0f, 400.0f, 700.0f, 0.0f);
    }
}
}
