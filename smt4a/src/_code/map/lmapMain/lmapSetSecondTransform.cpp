#include "common.h"
#include "game/GameStateA.h"

extern "C" {

void lmapSetSecondTransform(f32 x, f32 y, f32 z, f32 a, f32 b, f32 c)
{
    g_gameState.followCameraPose.eye.x = x;
    g_gameState.followCameraPose.eye.y = y;
    g_gameState.followCameraPose.eye.z = z;
    g_gameState.followCameraPose.target.x = a;
    g_gameState.followCameraPose.target.y = b;
    g_gameState.followCameraPose.target.z = c;
}

} /* extern "C" */
