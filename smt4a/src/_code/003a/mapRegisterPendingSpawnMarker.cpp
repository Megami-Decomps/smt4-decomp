/* NON_MATCHING: only `vmov.f32 s5, s3` (depth argument) is scheduled three instructions later than retail. */
#include "gamedata/MapSaveBlockA.h"
#include "map/MapSceneAccess.h"
#include "map/MapSceneAccess_Smt4a.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"

extern "C" {
s32 sceneRegisterBoxEffect(u32 id, u32 value, const char *name, u32 resource,
    u32 effect, s32 variant, u8 option0, u8 option1, u8 option2,
    u8 option3, u8 option4, u8 option5, u8 flag0, u8 flag1, u8 option,
    u32 data0, u32 data1, u32 data2, u32 priority,
    f32 x, f32 y, f32 z, f32 extent0, f32 extent1, f32 extent2, f32 yaw);

/* Register the pending spawn's box effect at the supplied world position. */
void mapRegisterPendingSpawnMarker(BattleVector3 position)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    s32 spawn = lmapGetSpawnIndex();
    if (flags->spawnPending != 0 && spawn >= 100) {
        f32 extent = 700.0f;
        sceneRegisterBoxEffect(0, 0, "NA", 0x58, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                               position.x, position.y - 200.0f, position.z, extent, 400.0f, extent, 0.0f);
    }
}
}
