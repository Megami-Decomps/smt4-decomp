#include "classes/Obj557d90.h"
#include "gfx/ControllerModel.h"

struct TripleOwner;
struct ValueTriple;

extern "C" {
void tripleOwnerSetValue(TripleOwner *handle, const ValueTriple *scale);
}

// Restore the model's original transform when the particle is released.
Obj557d90::~Obj557d90()
{
    void *handle = owner->request;
    controllerSetDestination(static_cast<Obj557b18 *>(handle), &originalPosition);
    controllerSetRotationEulerDegrees(static_cast<Obj557b18 *>(handle), originalRotation.x, originalRotation.y, originalRotation.z);
    tripleOwnerSetValue(static_cast<TripleOwner *>(handle), reinterpret_cast<const ValueTriple *>(&originalScale));
}
