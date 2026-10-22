/* NON_MATCHING: Integer layout attributes use a different address base from the retail parameter subobject. */
#include "gfx/ScaledLayout.h"

extern "C" void FUN_0035bc4c(ScaledLayout* layout, QuadVector3 translation, f32 scale)
{
    QuadVector3 position = layout->position;
    position.x *= scale;
    position.y *= scale;
    position.z *= scale;
    position.x += translation.x;
    position.y += translation.y;
    position.z += translation.z;
    layout->position = position;
    layout->unk58 *= scale;
    layout->unk9C *= scale;
    layout->unkE0 *= scale;
    layout->unk124 *= scale;
    layout->parameters.unk14 = (s32)((f32)layout->parameters.unk14 * scale);
    layout->parameters.unk38 = (s16)((f32)layout->parameters.unk38 * scale);
}
