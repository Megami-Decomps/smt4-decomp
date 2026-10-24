/* NON_MATCHING: retail batches the three phase wrap loops (and skips the constant x phase's) before the table lookups, keeps the rotation in a different register/VFP schedule and pushes r4-r6 where this pushes r4-r7; the same phase-sampler family as FUN_001a1c28/FUN_0044b5f4. */
#include "map/mapDepart.h"
#include "map/lmapMain.h"
#include "gfx/CameraMatrixCache.h"
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
extern const PhaseTrigEntry DAT_00536d14[256];
extern LmapExtraA *g_lmapView;
extern GameStateA g_gameState;

s32 scrGetArg(u32 index);
void FUN_00303460(s32 mode);
void mapSetSceneState(s32 state);
void FUN_003a2278(s32 flag);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(f32 *out, const f32 *matrix, const f32 *in);

/* Script command: put the field camera at a fixed distance behind a target, looking along a heading. */
u32 FUN_003702b4(void)
{
    f32 x = (f32)scrGetArg(0);
    f32 y = (f32)scrGetArg(1);
    f32 z = (f32)scrGetArg(2);
    f32 heading = (f32)scrGetArg(3);
    f32 direction[3] = {0.0f, 0.0f, -1.0f};
    f32 distance = 500.0f;

    f32 phase = heading * (256.0f / 360.0f);
    PhaseSinCos pitch = samplePhase(DAT_00536d14, 0.0f);
    PhaseSinCos yaw = samplePhase(DAT_00536d14, phase);
    PhaseSinCos roll = samplePhase(DAT_00536d14, 0.0f);
    Matrix34Data rotation;
    rotation.values[8] = -yaw.sine;
    rotation.values[0] = roll.cosine * yaw.cosine;
    rotation.values[4] = roll.sine * yaw.cosine;
    rotation.values[1] = pitch.sine * roll.cosine * yaw.sine - pitch.cosine * roll.sine;
    rotation.values[6] = pitch.cosine * roll.sine * yaw.sine - pitch.sine * roll.cosine;
    rotation.values[2] = pitch.sine * roll.sine + pitch.cosine * roll.cosine * yaw.sine;
    rotation.values[5] = pitch.cosine * roll.cosine + pitch.sine * roll.sine * yaw.sine;
    rotation.values[9] = pitch.sine * yaw.cosine;
    rotation.values[10] = pitch.cosine * yaw.cosine;
    rotation.values[3] = 0.0f;
    rotation.values[7] = 0.0f;
    rotation.values[11] = 0.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(direction, rotation.values, direction);

    g_gameState.scriptCamera.eye.x = x - direction[0] * distance;
    g_gameState.scriptCamera.eye.y = y - direction[1] * distance;
    g_gameState.scriptCamera.eye.z = z - direction[2] * distance;
    g_gameState.scriptCamera.target.x = x;
    g_gameState.scriptCamera.target.y = y;
    g_gameState.scriptCamera.target.z = z;
    g_gameState.scriptCamera.fov = 40.0f;
    if (g_lmapView->camera.mode != 3) {
        g_lmapView->camera.enabled = 1;
        FUN_00303460(3);
        mapSetSceneState(0x1d);
    }
    FUN_003a2278(1);
    return 1;
}
}
