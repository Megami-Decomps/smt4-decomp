/* NON_MATCHING: vector initializer grouping, projection constant loads and packed-color initialization differ. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/S1Mover.h"
#include <stddef.h>

struct EditorCameraVectors {
    Vec3f eye, up, target;
    Vec3f additional[2];
};
struct EditorInitialColor {
    u8 enabled;
    u8 unk01[0x3f];
    f32 rgba[4];
};
struct CameraPerspective { f32 fovy, nearZ, farZ, aspect; };
struct FloatPair { f32 first, second; };
typedef char EditorInitializationOffsets[offsetof(EditorCameraVectors, up) == 0xc &&
    offsetof(EditorCameraVectors, target) == 0x18 &&
    offsetof(EditorInitialColor, rgba) == 0x40 ? 1 : -1];

extern "C" {
extern EditorCameraVectors DAT_004d9228;
extern EditorInitialColor DAT_004d8bd0;
extern u8 DAT_004d8d20[];
void randomStateSeed(u32 stream, u32 seed);
void FUN_002fc1a8();
void FUN_002c2044(void *camera, s32 enabled);
void FUN_002c1edc(void *camera, const Vec3f *eye, const Vec3f *target, const Vec3f *up);
void FUN_002c1e30(void *camera, u32 pivot, CameraPerspective perspective);
void FUN_00298d50(void *camera);
void floatPairStore(FloatPair value);

void FUN_001dce30()
{
    randomStateSeed(0, 0x12345678);
    FUN_002fc1a8();
    DAT_004d9228.eye.x = 0.0f;
    DAT_004d9228.eye.y = 100.0f;
    DAT_004d9228.eye.z = 600.0f;
    DAT_004d9228.up.x = 0.0f;
    DAT_004d9228.up.y = 1.0f;
    DAT_004d9228.up.z = 0.0f;
    DAT_004d9228.target.x = 0.0f;
    DAT_004d9228.target.y = 0.0f;
    DAT_004d9228.target.z = 0.0f;
    for (s32 i = 0; i < 2; ++i) {
        DAT_004d9228.additional[i].x = 0.0f;
        DAT_004d9228.additional[i].y = 0.0f;
        DAT_004d9228.additional[i].z = 0.0f;
    }
    FUN_002c2044(DAT_004d8d20, 1);
    FUN_002c1edc(DAT_004d8d20, &DAT_004d9228.eye, &DAT_004d9228.target, &DAT_004d9228.up);
    CameraPerspective perspective = { 30.0f, 20.0f, 25600.0f, 5.0f / 3.0f };
    FUN_002c1e30(DAT_004d8d20, 1, perspective);
    FUN_00298d50(DAT_004d8d20);
    struct StartupView {
        u8 unk00[7];
        u8 first;
        u8 second;
        u8 unk09[0x1f];
        void *resource;
    };
    // The default resource's storage extends past the shared menu-state prefix.
    struct StorageView { u8 unk000[0xda0]; u8 resource[1]; };
    typedef char EditorStartupOffsets[offsetof(StartupView, first) == 7 &&
        offsetof(StartupView, second) == 8 && offsetof(StartupView, resource) == 0x28 &&
        offsetof(StorageView, resource) == 0xda0 ? 1 : -1];
    StartupView *startup = reinterpret_cast<StartupView *>(&g_effectEditor);
    startup->resource = reinterpret_cast<StorageView *>(&g_effectEditor)->resource;
    g_effectEditor.selection.index = 0;
    DAT_004d8bd0.enabled = 0;
    startup->second = 0;
    startup->first = 0;
    g_effectEditor.dispatch.mode = 0;
    g_effectEditor.dispatch.inhibited = 0;
    DAT_004d8bd0.rgba[0] = 0.0f;
    DAT_004d8bd0.rgba[1] = 0.0f;
    DAT_004d8bd0.rgba[2] = 0.0f;
    DAT_004d8bd0.rgba[3] = 1.0f;
    FloatPair zero = { 0.0f, 0.0f };
    floatPairStore(zero);
}
}
