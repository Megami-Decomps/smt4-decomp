/* NON_MATCHING: camera vector scratch copies and temporary projection frame differ from retail. */
#include "gfx/CameraVectorScratch.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include <math.h>
#include "code/Code0015.h"
extern "C" {
extern CameraVectorScratch DAT_006471dc;
extern Vector4 DAT_005c1120;
void FUN_002a1850(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);
void FUN_001bced4(Matrix44 *output);

f32 FUN_002914e8(f32 size)
{
    Vector4 saved = DAT_006471dc.direction;
    const ProjectionMatrices *camera = reinterpret_cast<const ProjectionMatrices *>(FUN_00152f54());
    DAT_005c1120 = DAT_006471dc.direction;
    f32 world[3] = {DAT_005c1120.x, DAT_005c1120.y, DAT_005c1120.z};
    Vector4 projected;
    FUN_002a1850(&projected.x, 0, camera, world);
    projected.w = 0.0f;
    DAT_006471dc.direction = projected;
    Matrix44 view;
    FUN_001bced4(&view);
    DAT_006471dc.direction = saved;
    DAT_005c1120.x = view.values[3];
    DAT_005c1120.y = view.values[7];
    DAT_005c1120.z = view.values[11];
    DAT_006471dc.origin = DAT_005c1120;
    DAT_006471dc.direction.x -= DAT_006471dc.origin.x;
    DAT_006471dc.direction.y -= DAT_006471dc.origin.y;
    DAT_006471dc.direction.z -= DAT_006471dc.origin.z;
    DAT_006471dc.direction.w -= DAT_006471dc.origin.w;
    f32 distance = sqrtf(DAT_006471dc.direction.x * DAT_006471dc.direction.x +
                         DAT_006471dc.direction.y * DAT_006471dc.direction.y +
                         DAT_006471dc.direction.z * DAT_006471dc.direction.z);
    DAT_006471dc.direction = projected;
    f32 scale = (size * 650.0f) / distance;
    if (scale > 1500.0f)
        scale = 1500.0f;
    return scale;
}
}
