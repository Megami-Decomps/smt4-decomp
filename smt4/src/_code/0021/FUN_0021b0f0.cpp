/* NON_MATCHING: map checks, case layout and the per-corner copies now follow retail; the stack frame is 96 bytes in retail against 88 here (locals in another order, 4+8 unused bytes), and armcc here hoists the rearDistance offset (392 + preset * 4) where retail re-adds it at each read. */
#include "gamedata/MapSaveBlock.h"
#include "map/LmapGlobals.h"
#include "shard/W6_W6Match6_CollisionQuad.h"
#include "util/TrigF32.h"
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"

extern "C" {
u8 mapCollisionGetStoredVectors(CollisionVector *, CollisionVector *, CollisionVector *, CollisionVector *);
f32 FUN_001e27f8(const f32 *, const f32 *, const f32 *, f32, f32);

void FUN_0021b0f0(void)
{
    g_lmapViewHolder.view->values[2] = 0.0f;
    if (g_gameState.mapId == 25) {
        if (g_gameState.areaId == 3)
            return;
    } else if (g_gameState.mapId == 26) {
        if (g_gameState.areaId == 1)
            return;
    } else if (g_gameState.mapId == 27) {
        if (g_gameState.areaId == 1)
            return;
    } else if (g_gameState.mapId == 28) {
        if (g_gameState.areaId == 1)
            return;
    }
    CollisionVector first, second, third, fourth;
    if (mapCollisionGetStoredVectors(&first, &second, &third, &fourth)) {
        f32 vertexX[3];
        f32 vertexY[3];
        f32 vertexZ[3];
        vertexX[0] = first.x;
        vertexY[0] = first.y;
        vertexZ[0] = first.z;
        vertexX[1] = second.x;
        vertexY[1] = second.y;
        vertexZ[1] = second.z;
        vertexX[2] = third.x;
        vertexY[2] = third.y;
        vertexZ[2] = third.z;
        MapSaveBlock *saved = gameGetMapBlock();
        LmapView *work = g_lmapViewHolder.view;
        s32 preset = work->preset;
        if (work->contextOverride != -1) {
            preset = work->contextOverride;
        } else {
            switch (static_cast<s32>(work->contextMode)) {
            case -3: preset = 5; break;
            case -1: preset = 8; break;
            case -2: preset = 9; break;
            case 0: preset += saved->cameraPresetOffset; break;
            case 1: preset = 6; break;
            case 2: preset = 10; break;
            }
        }
        const f32 degreesToRadians = 0.017453292f;
        f32 x = g_lmapScene->pose.position.x - libm_sinf(g_lmapViewHolder.view->heading * degreesToRadians) *
                g_lmapViewHolder.view->rearDistance[preset];
        f32 z = g_lmapScene->pose.position.z - libm_cosf(g_lmapViewHolder.view->heading * degreesToRadians) *
                g_lmapViewHolder.view->rearDistance[preset];
        f32 height = FUN_001e27f8(vertexX, vertexY, vertexZ, x, z);
        g_lmapViewHolder.view->values[2] = height - g_lmapScene->pose.position.y;
    }
}
}
