/* NON_MATCHING: 350 lines: the stick read is called with its real arguments (its release body is a linker-inlined
 * `return 0` stub, inlined.txt, so the outputs keep whatever the stack held, as in retail); the frame is 0x80 against
 * retail's 0x6c, the phase samples are inlined in another order and the registers differ. */
#include "gfx/EffectEditorStorage.h"

extern "C" {

extern const PhaseTrigEntry g_sinCosTable[];

s32 padButtonIsPressed(u32 button);
s32 slotIsActive(u32 button);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(PhaseVector *destination, const f32 *matrix);
void cameraMatrixCacheSetLookAt(void *camera, const PhaseVector *eye, const PhaseVector *center, const PhaseVector *up);

/* Updates the editor's free camera from the pads: both sticks turn and move it (button 27
 * resets it, 28 swaps the move axes, 23/18 raise and lower it), then rebuilds the orbit offset
 * through the rotation matrix of the three angles and aims the camera at the orbit centre. */
void FUN_002fe590(void)
{
    f32 leftX, leftY, rightX, rightY;
    f32 matrix[12];
    PhaseVector offset;
    PhaseVector center;
    PhaseVector eye;

    effectEditorReadSticks(&leftX, &leftY, &rightX, &rightY, 0);
    if (padButtonIsPressed(27) != 0) {
        g_effectEditorCameraOffset.x = 0.0f;
        g_effectEditorCameraOffset.y = 0.0f;
        g_effectEditorCameraOffset.z = 0.0f;
        g_effectEditorCameraRotation.x = 0.0f;
        g_effectEditorCameraRotation.y = 0.0f;
        g_effectEditorCameraRotation.z = 0.0f;
    }
    g_effectEditorCameraRotation.y += rightX * 3.2f;
    g_effectEditorCameraRotation.x -= rightY * 3.2f;
    if (slotIsActive(28) == 0) {
        g_effectEditorCameraOffset.x += leftX * 10.0f;
        g_effectEditorCameraOffset.z -= leftY * 10.0f;
    }
    if (slotIsActive(23) != 0) {
        g_effectEditorCameraOffset.y -= 5.0f;
    }
    if (slotIsActive(18) != 0) {
        g_effectEditorCameraOffset.y += 5.0f;
    }
    offset.x = g_effectEditorCameraEye.x - g_effectEditorCameraTarget.x;
    offset.y = g_effectEditorCameraEye.y - g_effectEditorCameraTarget.y;
    offset.z = g_effectEditorCameraEye.z - g_effectEditorCameraTarget.z;
    PhaseSinCos a = samplePhase(g_sinCosTable, g_effectEditorCameraRotation.x * 0.71111107f);
    PhaseSinCos b = samplePhase(g_sinCosTable, g_effectEditorCameraRotation.y * 0.71111107f);
    PhaseSinCos c = samplePhase(g_sinCosTable, g_effectEditorCameraRotation.z * 0.71111107f);

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
    center.x = g_effectEditorCameraTarget.x + g_effectEditorCameraOffset.x;
    center.y = g_effectEditorCameraTarget.y + g_effectEditorCameraOffset.y;
    center.z = g_effectEditorCameraTarget.z + g_effectEditorCameraOffset.z;
    eye.x = center.x + offset.x;
    eye.y = center.y + offset.y;
    eye.z = center.z + offset.z;
    cameraMatrixCacheSetLookAt(&g_effectEditorCamera, &eye, &center, &g_effectEditorCameraUp);
}

}
