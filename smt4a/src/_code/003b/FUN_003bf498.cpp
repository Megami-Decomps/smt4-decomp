#include "common.h"
#include "game/GameStateA.h"

extern "C" {

void lmapCameraSetMode(s32 value);

/* Clears the twelve floats at 0x41c of the game state, its word at 0x44c and flag at 0x450, then runs lmapCameraSetMode(0). */
void FUN_003bf498(void)
{
    g_gameState.followCameraPose.eye.x = 0.0f;
    g_gameState.followCameraPose.eye.y = 0.0f;
    g_gameState.followCameraPose.eye.z = 0.0f;
    g_gameState.followCameraPose.target.x = 0.0f;
    g_gameState.followCameraPose.target.y = 0.0f;
    g_gameState.followCameraPose.target.z = 0.0f;
    g_gameState.followCameraTargetPose.eye.x = 0.0f;
    g_gameState.followCameraTargetPose.eye.y = 0.0f;
    g_gameState.followCameraTargetPose.eye.z = 0.0f;
    g_gameState.followCameraTargetPose.target.x = 0.0f;
    g_gameState.followCameraTargetPose.target.y = 0.0f;
    g_gameState.followCameraTargetPose.target.z = 0.0f;
    g_gameState.unk44C = 0;
    g_gameState.unk450 = 0;
    lmapCameraSetMode(0);
}

} /* extern "C" */
