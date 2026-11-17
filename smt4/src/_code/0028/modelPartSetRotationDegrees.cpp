/* NON_MATCHING: compiler tail-calls the rotation setter instead of preserving lr around the call. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "gfx/EulerPhaseRotation.h"

extern "C" {
/* Reads or updates the requested state. */
void FUN_0024bfb8(Matrix34Data *matrix, f32 x, f32 y, f32 z);
/* Sets the scene node's rotation from degrees; the index argument is not used. */
void modelPartSetRotationDegrees(AsdMdlNode *node, s32 index, NodeVec3 degrees)
{
    FUN_0024bfb8((Matrix34Data *)&node->sceneNode->transform, degrees.x * 0.017453292f, degrees.y * 0.017453292f,
                 degrees.z * 0.017453292f);
}
}
