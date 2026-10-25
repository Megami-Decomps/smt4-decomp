/* NON_MATCHING: 174 vs 136 rows: retail addresses the fields through grouped sub-structures (vectors, timers) that this flat word view does not model. */
#include "common.h"
#include "script/scrScriptProcess.h"

// One 32-bit slot of the event camera object, read as an integer or a float.
union CameraWord {
    u32 u;
    f32 f;
};

// Event camera state, indexed by word; the named slots are the ones this reset
// gives a meaning to (everything else is cleared).
struct EventCamera {
    CameraWord w[0x211];
};

enum {
    CAM_RESET_FLAGS = 0x18d,    // bit 7 set while a reset is pending
    CAM_POSITION = 0x15a,       // 3 floats: base position
    CAM_DIRECTION = 0x160,      // 3 floats: direction, scaled by CAM_DISTANCE
    CAM_DISTANCE = 0x166,
    CAM_ZOOM = 0x158,
    CAM_BLEND = 0x159,
    CAM_PENDING_ACTION = 0x1b7,
    CAM_ACTION_ID_A = 0x1d7,
    CAM_ACTION_ID_B = 0x1d8,
    CAM_SHAKE = 0xb,
    CAM_ACTIVE = 10
};

extern "C" {

void FUN_003d84d8(EventCamera* camera, s32 mode, s32 arg);
void FUN_002c2044(void* node, s32 flag);
void FUN_002c1edc(void* node, void* position, f32* target, s32* result);
void FUN_002c1e30(void* node, s32 flag);
void asdCameraRegister(void* node);
s32 shakeEffectAlloc(void);
void eventCommandSetPendingCleanup(void);

// Resets the event camera to its idle state and registers it with the camera manager.
void FUN_003d5830(EventCamera* camera)
{
    CameraWord* w = camera->w;
    FUN_003d84d8(camera, 0, 0);
    w[0x1e5].f = 0.0f;
    w[0x1eb].f = 0.0f;
    w[0x1f4].f = 0.0f;
    w[0x1f1].f = 0.0f;
    w[0x1fc].f = 0.0f;
    w[0x1fb].f = 0.0f;
    w[0x1fa].f = 0.0f;
    w[0x208].f = 0.0f;
    w[0x207].f = 0.0f;
    w[0x206].f = 0.0f;
    w[0x1e9].u = 0;
    w[0x1ef].u = 0;
    w[0x1f8].u = 0;
    w[0x204].u = 0;
    w[0x210].u = 0;

    s32 result = 0;
    f32 distance = w[CAM_DISTANCE].f;
    f32 target[3];
    target[0] = w[CAM_POSITION].f + w[CAM_DIRECTION].f * distance;
    target[1] = w[CAM_POSITION + 1].f + w[CAM_DIRECTION + 1].f * distance;
    target[2] = w[CAM_POSITION + 2].f + w[CAM_DIRECTION + 2].f * distance;
    w[0x169].f = 0.0f;
    w[CAM_ZOOM].f = 5.0f;
    w[CAM_BLEND].f = 0.8f;
    FUN_002c2044(&w[0x16], 1);
    FUN_002c1edc(&w[0x16], &w[CAM_POSITION], target, &result);
    FUN_002c1e30(&w[0x16], 1);
    FUN_00298d50(reinterpret_cast<u32>(&w[0x16]));
    asdCameraRegister(&w[0x16]);

    w[0x192].f = 0.0f;
    w[0x191].f = 0.0f;
    w[0x190].f = 0.0f;
    w[0x1a4].f = 0.0f;
    w[0x1a3].f = 0.0f;
    w[0x1a2].f = 0.0f;
    w[CAM_RESET_FLAGS].u |= 0x80;
    w[0x19c].f = 0.0f;
    w[0x1a6].f = 0.0f;
    w[0x1aa].f = 0.0f;
    w[0x1ae].f = 0.0f;
    w[0x169].f = 0.0f;
    w[2].f = 0.0f;
    w[1].f = 0.0f;
    w[0].f = 0.0f;
    w[0x198].f = 0.0f;
    w[0x197].f = 0.0f;
    w[0x196].f = 0.0f;
    w[0x1b5].f = 0.0f;
    w[0x1b4].f = 0.0f;
    w[0x1b3].f = 0.0f;
    w[0x1bb].f = 0.0f;
    w[0x1ba].f = 0.0f;
    w[0x1b9].f = 0.0f;
    w[5].f = 0.0f;
    w[4].f = 0.0f;
    w[3].f = 0.0f;
    w[8].f = 0.0f;
    w[7].f = 0.0f;
    w[6].f = 0.0f;
    w[9].u = 0;
    w[0x1d0].f = 0.0f;
    w[0x1cf].f = 0.0f;
    w[0x1ce].f = 0.0f;
    w[0x1db].f = 0.0f;
    w[0x1da].f = 0.0f;
    w[0x1d9].f = 0.0f;
    w[0x1de].f = 0.0f;
    w[0x1dd].f = 0.0f;
    w[0x1dc].f = 0.0f;
    w[0x1e1].f = 0.0f;
    w[0x1e0].f = 0.0f;
    w[0x1df].f = 0.0f;
    w[0x1e4].f = 0.0f;
    w[0x1e3].f = 0.0f;
    w[0x1e2].f = 0.0f;
    w[0x1a8].u = 0;
    w[0x1ac].u = 0;
    w[0x1b0].u = 0;
    w[CAM_PENDING_ACTION].u = 0;
    w[0x1bd].u = 0;
    w[CAM_ACTION_ID_A].u = 0xffffffff;
    w[0x1ca].u = 0;
    w[CAM_ACTION_ID_B].u = 0xffffffff;
    w[CAM_SHAKE].u = shakeEffectAlloc();
    eventCommandSetPendingCleanup();
    w[0xc].u = 0;
    w[0xd].u = 0;
    w[0xe].u = 0;
    w[0xf].u = 0;
    w[0x10].u = 0;
    w[0x11].u = 0;
    w[0x12].u = 0;
    w[0x13].u = 0;
    w[0x14].u = 0;
    w[CAM_ACTIVE].u = 1;
    w[0x15].u = 0;
}

} /* extern "C" */
