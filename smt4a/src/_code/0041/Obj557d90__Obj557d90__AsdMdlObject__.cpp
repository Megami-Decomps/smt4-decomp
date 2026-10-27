/* NON_MATCHING: scalar scale-copy scheduling and retained owner/position values differ from retail. */
#include "classes/Obj557d90.h"


// Preserve the model transform and start a particle with no motion or rotation.
Obj557d90::Obj557d90(AsdMdlObject *model)
{
    owner = model;
    unk08 = 0;
    unk0C.set(0.0f, 0.0f, 0.0f);
    unk3C[0].set(0.0f, 0.0f, 0.0f);
    unk3C[1].set(0.0f, 0.0f, 0.0f);
    unk3C[2].set(0.0f, 0.0f, 0.0f);
    ControllerPose *transform = static_cast<ControllerPose *>(owner->request);
    static_cast<MapVector &>(position) = transform->destination;
    static_cast<MapVector &>(unk30) = transform->position;
    rotation.set(0.0f, 0.0f, 0.0f);
    unk0C.y = unk30.y * 0.5f;
    originalPosition.y = position.y;
    originalPosition.x = position.x;
    originalPosition.z = position.z;
    originalRotation.set(0.0f, 0.0f, 0.0f);
    originalScale = unk30;
    transform->flags.value &= ~3u;
}
