/* NON_MATCHING: regional branches merge, collision-coordinate arrays use an 88-byte frame instead of 96, and preset addresses fold differently. */
#include "map/MapCameraWork.h"
#include "map/lmapMain.h"
#include "shard/SaveWork.h"
#include "shard/W6_W6Match6_CollisionQuad.h"
#include "util/TrigF32.h"

extern "C" {
extern MapCameraGlobals DAT_004474f0;
extern GameState g_gameState;
extern LmapScene *g_lmapScene;
u8 mapCollisionGetStoredVectors(CollisionVector *, CollisionVector *, CollisionVector *, CollisionVector *);
SaveWork *gameGetMapBlock(void);
f32 FUN_001e27f8(const f32 *, const f32 *, const f32 *, f32, f32);

void FUN_0021b0f0(void)
{
    DAT_004474f0.work->values[2] = 0.0f;
    if (g_gameState.unk000 == 25) {
        if (g_gameState.unk004Value == 3)
            return;
    } else if ((g_gameState.unk000 == 26 || g_gameState.unk000 == 27 || g_gameState.unk000 == 28) &&
               g_gameState.unk004Value == 1) {
        return;
    }
    CollisionVector first, second, third, fourth;
    if (mapCollisionGetStoredVectors(&first, &second, &third, &fourth)) {
        f32 vertexX[3] = { first.x, second.x, third.x };
        f32 vertexY[3] = { first.y, second.y, third.y };
        f32 vertexZ[3] = { first.z, second.z, third.z };
        SaveWork *saved = gameGetMapBlock();
        MapCameraWork *work = DAT_004474f0.work;
        s32 preset = work->followPresets.base;
        if (work->target != -1) {
            preset = work->target;
        } else {
            switch (static_cast<s32>(work->updateFlags)) {
            case 0: preset += saved->unk001D[0]; break;
            case 1: preset = 6; break;
            case 2: preset = 10; break;
            case -3: preset = 5; break;
            case -2: preset = 9; break;
            case -1: preset = 8; break;
            }
        }
        const f32 degreesToRadians = 0.017453292f;
        f32 x = g_lmapScene->transform.position[0] - FUN_0028250c(DAT_004474f0.work->heading * degreesToRadians) *
                DAT_004474f0.work->followPresets.rearDistance[preset];
        f32 z = g_lmapScene->transform.position[2] - FUN_00282390(DAT_004474f0.work->heading * degreesToRadians) *
                DAT_004474f0.work->followPresets.rearDistance[preset];
        f32 height = FUN_001e27f8(vertexX, vertexY, vertexZ, x, z);
        DAT_004474f0.work->values[2] = height - g_lmapScene->transform.position[1];
    }
}
}
