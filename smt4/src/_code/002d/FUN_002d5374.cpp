/* NON_MATCHING: vector load/register allocation and clamp branch scheduling differ from retail. */
#include "map/MapEnvironment.h"
#include "map/LmapGlobals.h"
#include <math.h>
#include "AsdSDK/Source/Gfx/Effect/effParts.h"
#include "map/LmapViewGlobals.h"

extern "C" {
extern MapEnvironmentEntry DAT_0049fb1c;
void mapEnvironmentApplySelectedEntry();
u32 FUN_0025bb34(u32 group, const char *name, u32 flags);

// Place the two player lights along the camera-to-target direction.
void FUN_002d5374()
{
    if (DAT_0049fb1c.unk26 != DAT_0049fb1c.unk24) {
        DAT_0049fb1c.unk26 = DAT_0049fb1c.unk24;
    }
    mapEnvironmentApplySelectedEntry();
    const LmapView *camera = g_mapCamera;
    f32 dx = camera->savedEye.x - camera->savedTarget.x;
    f32 dy = camera->savedEye.y - camera->savedTarget.y;
    f32 dz = camera->savedEye.z - camera->savedTarget.z;
    f32 length = sqrtf(dx * dx + dy * dy + dz * dz);
    length = length < 0.01f ? 0.01f : length;
    f32 distance = length < 300.0f ? length : 300.0f;
    f32 directionX = dx / length;
    f32 directionY = dy / length;
    f32 directionZ = dz / length;
    f32 x = camera->savedTarget.x + directionX * distance;
    f32 y = camera->savedTarget.y + directionY * distance;
    f32 z = camera->savedTarget.z + directionZ * distance;
    u32 slot = FUN_0025bb34(1, "Light_Player2", 0);
    asdModelSlotSetTranslation(slot, 0, x, y, z);
    if (length >= 120.0f) {
        length = 120.0f;
    }
    camera = g_mapCamera;
    x = camera->savedTarget.x + directionX * length;
    y = g_lmapScene->pose.position.y + 130.0f;
    z = camera->savedTarget.z + directionZ * length;
    slot = FUN_0025bb34(1, "Light_Player3", 0);
    asdModelSlotSetTranslation(slot, 0, x, y, z);
}
}
