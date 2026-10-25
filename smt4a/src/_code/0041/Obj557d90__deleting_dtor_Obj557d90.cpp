#include "classes/Obj557d90.h"
#include "shard/W5_W5Match7_ControllerPose.h"

struct TripleOwner;
struct ValueTriple;

extern "C" {
void controllerSetDestination(ControllerPose *handle, const MapVector *position);
void controllerSetRotationEulerDegrees(u32 handle, f32 x, f32 y, f32 z);
void tripleOwnerSetValue(TripleOwner *handle, const ValueTriple *scale);
}

// Restore the model's original transform when the particle is released.
Obj557d90::~Obj557d90()
{
    void *handle = owner->request;
    controllerSetDestination(static_cast<ControllerPose *>(handle), reinterpret_cast<const MapVector *>(&originalPosition));
    controllerSetRotationEulerDegrees(reinterpret_cast<u32>(handle), originalRotation.x, originalRotation.y, originalRotation.z);
    tripleOwnerSetValue(static_cast<TripleOwner *>(handle), reinterpret_cast<const ValueTriple *>(&originalScale));
}
