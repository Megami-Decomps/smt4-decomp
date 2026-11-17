/* NON_MATCHING: Camera pointer reloads and saved-vector copy grouping differ. */
#include "common.h"
#include "map/LmapViewGlobals.h"
#include "map/mapDepart.h"
#include <stddef.h>
#include "title/titleMain.h"
#include "shard/W6_W6Match3_EffectColor.h"

struct LocalCamera;

extern "C" {
extern LocalCamera g_localCamera;

void FUN_0014f0dc(LocalCamera *, const MapVector *, const MapVector *,
                  const MapVector *);
void FUN_001523b8(LocalCamera *, s32, f32, f32, f32, f32);

void FUN_00303710(void)
{
    /* The model manager (an Obj557c48) takes the camera in its word at 0x0C. */
    struct ModelManagerCameraPrefix {
        u8 unk00[0xC];
        LocalCamera *camera;
    };

    DAT_005806a0.view->up.x = 0.0f;
    DAT_005806a0.view->up.y = 1.0f;
    DAT_005806a0.view->up.z = 0.0f;

    DAT_005806a0.view->target.x = 0.0f;
    DAT_005806a0.view->target.y = 0.0f;
    DAT_005806a0.view->target.z = 0.0f;

    DAT_005806a0.view->eye.x = 0.0f;
    DAT_005806a0.view->eye.y = 300.0f;
    DAT_005806a0.view->eye.z = 300.0f;

    DAT_005806a0.view->savedTarget = DAT_005806a0.view->target;
    DAT_005806a0.view->savedEye = DAT_005806a0.view->eye;

    asdCameraInitializeDefaults(reinterpret_cast<AsdCamera *>(&g_localCamera), 1);
    FUN_0014f0dc(&g_localCamera,
                 &DAT_005806a0.view->eye,
                 &DAT_005806a0.view->target,
                 &DAT_005806a0.view->up);
    FUN_001523b8(&g_localCamera, 1, 36.0f, 10.0f, 2560000.0f,
                 1.66666662693023681640625f);
    FUN_0036b824(reinterpret_cast<u32>(&g_localCamera));

    LmapViewA *view = DAT_005806a0.view;
    reinterpret_cast<ModelManagerCameraPrefix *>(view->modelManager)->camera = &g_localCamera;
    view->parameterA0 = 500.0f;
    view->parameterA4 = 0.0f;
    view->enabled = 1;
    view->state = 0;
}
}
