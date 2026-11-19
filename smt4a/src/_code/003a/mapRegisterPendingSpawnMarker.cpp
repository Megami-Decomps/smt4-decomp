/* NON_MATCHING: box extent literal and VFP/outgoing stack arguments are scheduled differently. */
#include "gamedata/MapSaveBlockA.h"
#include "map/MapSceneAccess.h"
#include "map/MapSceneAccess_Smt4a.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"

extern "C" {
void sceneRegisterBoxEffect(u32, u32, const char *, u32,
                            u32, s32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32,
                            f32 x, f32 y, f32 z, f32 width, f32 height, f32 depth, f32 rotation);

// Register the pending spawn's box effect at the supplied world position.
void mapRegisterPendingSpawnMarker(BattleVector3 position)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    s32 spawn = lmapGetSpawnIndex();
    if (flags->spawnPending != 0 && spawn >= 100) {
        sceneRegisterBoxEffect(0, 0, "NA", 0x58, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                               position.x, position.y - 200.0f, position.z, 700.0f, 400.0f, 700.0f, 0.0f);
    }
}
}
