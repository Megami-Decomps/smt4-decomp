/* NON_MATCHING: shared phase samplers remain serial instead of retail's batched interpolation; VFP/GPR scheduling and allocation differ, possibly with optimization flags. */
#include "shard/W6_W6Match6_PhaseTrig.h"
#include "shard/W5_W5Match7_ControllerPose.h"

extern "C" {
extern const PhaseTrigEntry DAT_00536d14[];

// Build the controller's 3x4 rotation matrix from Euler angles in degrees.
void controllerSetRotationEulerDegrees(u32 controllerAddress, f32 x, f32 y, f32 z)
{
    ControllerPose *controller = reinterpret_cast<ControllerPose *>(controllerAddress);
    f32 *matrix = reinterpret_cast<f32 *>(controller->unk1c0);
    const f32 degreesToPhase = 256.0f / 360.0f;
    x *= degreesToPhase;
    y *= degreesToPhase;
    z *= degreesToPhase;
    PhaseSinCos xRotation = samplePhase(DAT_00536d14, x);
    PhaseSinCos yRotation = samplePhase(DAT_00536d14, y);
    PhaseSinCos zRotation = samplePhase(DAT_00536d14, z);

    matrix[8] = -yRotation.sine;
    matrix[0] = zRotation.cosine * yRotation.cosine;
    matrix[4] = zRotation.sine * yRotation.cosine;
    matrix[1] = xRotation.sine * zRotation.cosine * yRotation.sine -
                xRotation.cosine * zRotation.sine;
    matrix[2] = xRotation.sine * zRotation.sine +
                xRotation.cosine * zRotation.cosine * yRotation.sine;
    matrix[9] = xRotation.sine * yRotation.cosine;
    matrix[10] = xRotation.cosine * yRotation.cosine;
    matrix[5] = xRotation.cosine * zRotation.cosine +
                xRotation.sine * zRotation.sine * yRotation.sine;
    matrix[6] = xRotation.cosine * zRotation.sine * yRotation.sine -
                xRotation.sine * zRotation.cosine;
    matrix[3] = 0.0f;
    matrix[7] = 0.0f;
    matrix[11] = 0.0f;
}
}
