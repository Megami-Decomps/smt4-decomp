/* NON_MATCHING: vector load/register allocation and clamp branch scheduling differ from retail. */
#include "map/MapCameraWork.h"
#include "map/MapEnvironment.h"
#include "map/lmapMain.h"
#include <math.h>

extern "C" {
extern MapEnvironmentEntry DAT_0049fb1c;
extern MapCameraWork *DAT_004474f4;
extern LmapScene *g_lmapScene;
void mapEnvironmentApplySelectedEntry();
u32 FUN_0025bb34(u32 group, const char *name, u32 flags);
void asdModelSlotSetTranslation(u32 slot, s32 index, f32 x, f32 y, f32 z);

// Place the two player lights along the camera-to-target direction.
void FUN_002d5374()
{
    if (DAT_0049fb1c.unk24 != DAT_0049fb1c.unk26) {
        DAT_0049fb1c.unk26 = DAT_0049fb1c.unk24;
    }
    mapEnvironmentApplySelectedEntry();
    const MapCameraWork *camera = DAT_004474f4;
    f32 dx = camera->eyeSnapshot.x - camera->targetSnapshot.x;
    f32 dy = camera->eyeSnapshot.y - camera->targetSnapshot.y;
    f32 dz = camera->eyeSnapshot.z - camera->targetSnapshot.z;
    f32 length = sqrtf(dx * dx + dy * dy + dz * dz);
    if (length < 0.01f) {
        length = 0.01f;
    }
    f32 distance = length < 300.0f ? length : 300.0f;
    f32 directionX = dx / length;
    f32 directionY = dy / length;
    f32 directionZ = dz / length;
    f32 x = camera->targetSnapshot.x + directionX * distance;
    f32 y = camera->targetSnapshot.y + directionY * distance;
    f32 z = camera->targetSnapshot.z + directionZ * distance;
    u32 slot = FUN_0025bb34(1, "Light_Player2", 0);
    asdModelSlotSetTranslation(slot, 0, x, y, z);
    if (length >= 120.0f) {
        length = 120.0f;
    }
    camera = DAT_004474f4;
    x = camera->targetSnapshot.x + directionX * length;
    y = g_lmapScene->transform.position[1] + 130.0f;
    z = camera->targetSnapshot.z + directionZ * length;
    slot = FUN_0025bb34(1, "Light_Player3", 0);
    asdModelSlotSetTranslation(slot, 0, x, y, z);
}
}
