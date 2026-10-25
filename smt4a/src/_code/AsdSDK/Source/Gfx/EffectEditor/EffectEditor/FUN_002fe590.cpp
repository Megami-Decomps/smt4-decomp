/* NON_MATCHING: the stick values stay unwritten as in retail (its stub call was inlined away) but the argument setup for that call is not emitted, the phase samples are inlined in another order and register assignment differs (237 vs 234 rows); the free camera update is the same. */
#include "gfx/EffectEditorStorage.h"

extern "C" {

extern const PhaseTrigEntry DAT_00536d14[];

s32 padButtonIsPressed(u32 button);
s32 FUN_00163fd4(u32 button);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(PhaseVector *destination, const f32 *matrix);
void FUN_0014f0dc(void *camera, const PhaseVector *eye, const PhaseVector *center, const PhaseVector *up);

/* Updates the editor's free camera from the pads: both sticks turn and move it (button 27
 * resets it, 28 swaps the move axes, 23/18 raise and lower it), then rebuilds the orbit offset
 * through the rotation matrix of the three angles and aims the camera at the orbit centre. */
void FUN_002fe590(void)
{
    f32 stick[4]; /* retail's stick read was a stub call armlink inlined to `mov r0,#0`: nothing writes these, so they hold whatever the stack had */
    f32 matrix[16];
    PhaseVector offset;
    PhaseVector center;
    PhaseVector eye;

    if (padButtonIsPressed(27) != 0) {
        g_effectEditorCameraDefaults.offset.x = 0.0f;
        g_effectEditorCameraDefaults.offset.y = 0.0f;
        g_effectEditorCameraDefaults.offset.z = 0.0f;
        g_effectEditorCameraDefaults.rotation.x = 0.0f;
        g_effectEditorCameraDefaults.rotation.y = 0.0f;
        g_effectEditorCameraDefaults.rotation.z = 0.0f;
    }
    g_effectEditorCameraDefaults.rotation.y += stick[2] * 3.2f;
    g_effectEditorCameraDefaults.rotation.x -= stick[3] * 3.2f;
    if (FUN_00163fd4(28) == 0) {
        g_effectEditorCameraDefaults.offset.x += stick[0] * 10.0f;
        g_effectEditorCameraDefaults.offset.z -= stick[1] * 10.0f;
    }
    if (FUN_00163fd4(23) != 0) {
        g_effectEditorCameraDefaults.offset.y -= 5.0f;
    }
    if (FUN_00163fd4(18) != 0) {
        g_effectEditorCameraDefaults.offset.y += 5.0f;
    }
    offset.x = g_effectEditorCameraDefaults.eye.x - g_effectEditorCameraDefaults.target.x;
    offset.y = g_effectEditorCameraDefaults.eye.y - g_effectEditorCameraDefaults.target.y;
    offset.z = g_effectEditorCameraDefaults.eye.z - g_effectEditorCameraDefaults.target.z;
    PhaseSinCos a = samplePhase(DAT_00536d14, g_effectEditorCameraDefaults.rotation.x * 0.71111107f);
    PhaseSinCos b = samplePhase(DAT_00536d14, g_effectEditorCameraDefaults.rotation.y * 0.71111107f);
    PhaseSinCos c = samplePhase(DAT_00536d14, g_effectEditorCameraDefaults.rotation.z * 0.71111107f);

    matrix[0] = c.cosine * b.cosine;
    matrix[1] = a.sine * c.cosine * b.sine - a.cosine * c.sine;
    matrix[2] = a.sine * c.sine + a.cosine * c.cosine * b.sine;
    matrix[3] = 0.0f;
    matrix[4] = c.sine * b.cosine;
    matrix[5] = a.cosine * c.cosine + a.sine * c.sine * b.sine;
    matrix[6] = a.cosine * c.sine * b.sine - a.sine * c.cosine;
    matrix[7] = 0.0f;
    matrix[8] = -b.sine;
    matrix[9] = a.sine * b.cosine;
    matrix[10] = a.cosine * b.cosine;
    matrix[11] = 0.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&offset, matrix);
    center.x = g_effectEditorCameraDefaults.target.x + g_effectEditorCameraDefaults.offset.x;
    center.y = g_effectEditorCameraDefaults.target.y + g_effectEditorCameraDefaults.offset.y;
    center.z = g_effectEditorCameraDefaults.target.z + g_effectEditorCameraDefaults.offset.z;
    eye.x = center.x + offset.x;
    eye.y = center.y + offset.y;
    eye.z = center.z + offset.z;
    FUN_0014f0dc(&g_effectEditorCamera, &eye, &center, &g_effectEditorCameraDefaults.up);
}

}
