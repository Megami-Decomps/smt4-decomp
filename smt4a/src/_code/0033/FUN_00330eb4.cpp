#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

struct Vec3 {
    f32 x, y, z;
};

struct EventCameraState {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[0x2cf];
    /* 0x2d0 */ u32 mode;
    /* 0x2d4 */ u32 type;
    /* 0x2d8 */ Vec3 position;
    /* 0x2e4 */ f32 yaw;
    /* 0x2e8 */ f32 pitch;
};

// The event camera block lies inside g_gameState.
struct GameStateEventCameraView {
    /* 0x000 */ u8 unk000[0x2c8];
    /* 0x2c8 */ EventCameraState camera;
};
extern GameStateEventCameraView g_gameState;

void FUN_0035846c(void);

/* Script command 0x164f: resets the event camera to its fixed preset and activates it. */
u32 FUN_00330eb4(void)
{
    if (scrGetArg(0) == 0x164f) {
        FUN_0035846c();
        g_gameState.camera.mode = 0x65;
        g_gameState.camera.type = 5;
        g_gameState.camera.yaw = 180.0f;
        g_gameState.camera.pitch = 180.0f;
        g_gameState.camera.position.x = -12000.0f;
        g_gameState.camera.position.y = 107.0f;
        g_gameState.camera.position.z = 2958.0f;
        g_gameState.camera.active = 1;
    }
    return 1;
}

} /* extern "C" */
