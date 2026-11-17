#include "common.h"
#include "game/GameStateA.h"

extern "C" {

void lmapSetFirstTransform(f32 x, f32 y, f32 z, f32 a, f32 b, f32 c)
{
    g_gameState.followCameraTargetPose.eye.x = x;
    g_gameState.followCameraTargetPose.eye.y = y;
    g_gameState.followCameraTargetPose.eye.z = z;
    g_gameState.followCameraTargetPose.target.x = a;
    g_gameState.followCameraTargetPose.target.y = b;
    g_gameState.followCameraTargetPose.target.z = c;
}

} /* extern "C" */
