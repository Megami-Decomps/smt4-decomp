#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/Effect/effParts.h"

extern "C" {
extern PolyVec4 g_polyDefaultColor;

/* Initializes the part's transform, tint and time parameters without altering its links. */
void effPartInitDefaults(EffPart *part)
{
    sysMemClear(part, EFF_PART_DEFAULTS_BYTES);

    effPartResetVector(&part->position);
    effPartResetVector(&part->localPosition);
    effPartResetVector(&part->origin);
    part->origin.y = 5.0f;
    effPartResetVector(&part->rotation);

    part->color = g_polyDefaultColor;
    part->timeStep = 1.0f;
    part->timeScale = 1.0f;
    part->tint = EFF_PART_DEFAULT_TINT;
    part->flags = EFF_PART_SCALE_LOCAL_OFFSET;
}

} /* extern "C" */
