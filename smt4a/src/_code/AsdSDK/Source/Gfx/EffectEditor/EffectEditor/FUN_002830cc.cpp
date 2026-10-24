/* NON_MATCHING: camera vector stores and editor global reset scheduling differ from retail. */
#include "common.h"

namespace {
struct EditorCameraDefaults {
    f32 position[3];
    f32 up[3];
    f32 target[3];
    f32 rotation[3];
    f32 offset[3];
};
struct EditorCamera;
/* The editor's scratch buffer is past the shared menu-state prefix. */
struct EditorResetStateView {
    u8 unk00, inhibited, unk02[5], flag7, flag8, mode, unk0A[2];
    u32 frame;
    u8 unk10[0x18];
    void *buffer;
    u8 unk2C[0xD64];
    u8 scratch[1];
};
struct EditorRenderResetView {
    u8 active;
    u8 unk01[0x3F];
    u32 rotation[3];
    f32 scale;
};
}
extern "C" {
extern EditorCameraDefaults DAT_006352ac;
extern EditorCamera DAT_00634da0;
extern EditorResetStateView g_effectEditor;
extern EditorRenderResetView DAT_00634c50;
void randomStateSeed(u32 stream, u32 seed);
void FUN_00387454(void);
void asdCameraInitializeDefaults(EditorCamera *camera, s32 mode);
void FUN_0014f0dc(EditorCamera *camera, const f32 *position, const f32 *target, const f32 *up);
void FUN_001523b8(EditorCamera *camera, s32 mode, f32 nearPlane, f32 fieldOfView, f32 farPlane, f32 aspect);
void FUN_0036b824(EditorCamera *camera);
void FUN_003627ac(f32 x, f32 y);

/* Reset the effect editor's deterministic random state, camera and preview controls. */
void FUN_002830cc(void)
{
    randomStateSeed(0, 0x12345678);
    FUN_00387454();
    DAT_006352ac.position[0] = 0.0f;
    DAT_006352ac.position[1] = 100.0f;
    DAT_006352ac.position[2] = 600.0f;
    DAT_006352ac.up[0] = 0.0f;
    DAT_006352ac.up[1] = 1.0f;
    DAT_006352ac.up[2] = 0.0f;
    DAT_006352ac.target[0] = 0.0f;
    DAT_006352ac.target[1] = 0.0f;
    DAT_006352ac.target[2] = 0.0f;
    DAT_006352ac.rotation[0] = 0.0f;
    DAT_006352ac.rotation[1] = 0.0f;
    DAT_006352ac.rotation[2] = 0.0f;
    DAT_006352ac.offset[0] = 0.0f;
    DAT_006352ac.offset[1] = 0.0f;
    DAT_006352ac.offset[2] = 0.0f;
    asdCameraInitializeDefaults(&DAT_00634da0, 1);
    FUN_0014f0dc(&DAT_00634da0, DAT_006352ac.position, DAT_006352ac.target, DAT_006352ac.up);
    FUN_001523b8(&DAT_00634da0, 1, 30.0f, 20.0f, 25600.0f, 5.0f / 3.0f);
    FUN_0036b824(&DAT_00634da0);
    g_effectEditor.buffer = g_effectEditor.scratch;
    g_effectEditor.frame = 0;
    DAT_00634c50.active = 0;
    g_effectEditor.flag8 = 0;
    g_effectEditor.flag7 = 0;
    g_effectEditor.mode = 0;
    g_effectEditor.inhibited = 0;
    DAT_00634c50.rotation[0] = 0;
    DAT_00634c50.rotation[1] = 0;
    DAT_00634c50.rotation[2] = 0;
    DAT_00634c50.scale = 1.0f;
    FUN_003627ac(0.0f, 0.0f);
}
}
