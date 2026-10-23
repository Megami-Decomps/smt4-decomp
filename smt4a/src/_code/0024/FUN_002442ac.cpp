/* NON_MATCHING: selected-index store moves before the flags store; literal-pool ordering differs. */
#include "map/lmapMain.h"

extern "C" {
void FUN_00303710(void);
void FUN_00352a14(void);
extern u32 g_handleRegistry;
extern LmapExtraGlobalsA DAT_005806a0;

// Reset the map camera's defaults, transitions, and tracked resource handle.
void FUN_002442ac(void)
{
    // The initialized tail extends beyond the shared LmapExtraA prefix.
    struct CameraDefaultsView {
        u32 state, phase, flags; // 0x000
        u8 unk00C[8];
        u32 unk014;
        u8 unk018[4];
        f32 angle; // 0x01c
        u8 unk020[0x48];
        f32 target[3]; // 0x068
        f32 eye[4]; // 0x074
        u8 unk084[0x18];
        f32 scale; // 0x09c
        u8 unk0A0[0x10];
        u32 transitionState; // 0x0b0
        u8 enabled, pending;
        u16 elapsed, duration;
        u8 unk0BA[2];
        f32 rotation[2]; // 0x0bc
        f32 zoom; // 0x0c4
        u32 preset; // 0x0c8
        f32 presets[5][16]; // 0x0cc
        s32 selected; // 0x20c
        f32 transition[4]; // 0x210
        u8 transitioning; // 0x220
        u8 unk221[0x7b];
        f32 blend[3]; // 0x29c
        u32 blendMode, priority;
        s16 bounds[4]; // 0x2b0
        u8 blendEnabled;
        u8 unk2B9[3];
        u32 pendingRequest;
        u8 unk2C0[0x44];
        u8 active;
        u8 unk305[3];
        f32 distance, velocity, acceleration; // 0x308
        u32 handle; // 0x314
    };
    typedef char CameraDefaultsOffsets[
        offsetof(CameraDefaultsView, presets) == 0xcc &&
        offsetof(CameraDefaultsView, blend) == 0x29c &&
        offsetof(CameraDefaultsView, handle) == 0x314 ? 1 : -1];
    CameraDefaultsView *camera = reinterpret_cast<CameraDefaultsView *>(DAT_005806a0.extra);
    camera->state = 0;
    camera->phase = 0;
    camera->flags = 0;
    camera->selected = -1;
    camera->preset = 0;
    camera->presets[0][0] = 100.0f;
    camera->presets[1][0] = 220.0f;
    camera->presets[2][0] = 0.0f;
    camera->presets[3][0] = 700.0f;
    camera->presets[4][0] = 42.0f;
    camera->transitionState = 0;
    camera->angle = 0.0f;
    camera->unk014 = 0;
    camera->scale = 1.0f;
    camera->transition[0] = 0.0f;
    camera->transition[1] = 0.0f;
    camera->transition[2] = 0.0f;
    camera->transition[3] = 0.0f;
    camera->velocity = 0.0f;
    camera->acceleration = 0.0f;
    camera->transitioning = 0;
    camera->blendEnabled = 0;
    camera->active = 0;
    camera->blend[0] = 0.0f;
    camera->blend[1] = 0.0f;
    camera->blend[2] = 0.0f;
    camera->blendMode = 0;
    camera->priority = 0;
    camera->bounds[0] = 0;
    camera->bounds[1] = 0;
    camera->bounds[2] = 0;
    camera->bounds[3] = 0;
    camera->eye[0] = 0.0f;
    camera->eye[1] = 50.0f;
    camera->eye[2] = 0.0f;
    camera->eye[3] = 40.0f;
    camera->target[0] = 0.0f;
    camera->target[1] = 50.0f;
    camera->target[2] = 100.0f;
    camera->distance = 0.0f;
    camera->enabled = 0;
    camera->pending = 0;
    camera->elapsed = 0;
    camera->duration = 0;
    camera->rotation[0] = 0.0f;
    camera->rotation[1] = 0.0f;
    camera->zoom = 1.0f;
    FUN_00352a14();
    camera = reinterpret_cast<CameraDefaultsView *>(DAT_005806a0.extra);
    camera->pendingRequest = 0;
    camera->handle = g_handleRegistry;
    FUN_00303710();
}
}
