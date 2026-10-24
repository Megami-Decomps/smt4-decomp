/* NON_MATCHING: Camera pointer reloads and saved-vector copy grouping differ. */
#include "common.h"
#include "map/lmapMain.h"
#include "map/mapDepart.h"
#include <stddef.h>

struct LocalCamera;

extern "C" {
extern LmapExtraGlobalsA DAT_005806a0;
extern LocalCamera g_localCamera;

void asdCameraInitializeDefaults(LocalCamera *, s32);
void FUN_0014f0dc(LocalCamera *, const MapVector *, const MapVector *,
                  const MapVector *);
void FUN_001523b8(LocalCamera *, s32, f32, f32, f32, f32);
void FUN_0036b824(LocalCamera *);

void FUN_00303710(void)
{
    /* The binding pointer is beyond sizeof(LmapExtraA), so it must not
     * be added to that canonical type. These are access prefixes only. */
    struct CameraBindingPrefixA {
        u8 unk00[0xC];
        LocalCamera *camera;
    };
    struct CameraBindingAccessA {
        u8 unk000[0x314];
        CameraBindingPrefixA *binding;
    };
    typedef char BindingLayoutCheck[
        offsetof(CameraBindingPrefixA, camera) == 0xC &&
        sizeof(CameraBindingPrefixA) == 0x10 ? 1 : -1];
    typedef char BindingAccessLayoutCheck[
        offsetof(CameraBindingAccessA, binding) == 0x314 &&
        sizeof(CameraBindingAccessA) == 0x318 ? 1 : -1];

    DAT_005806a0.extra->camera.up.x = 0.0f;
    DAT_005806a0.extra->camera.up.y = 1.0f;
    DAT_005806a0.extra->camera.up.z = 0.0f;

    DAT_005806a0.extra->camera.target.x = 0.0f;
    DAT_005806a0.extra->camera.target.y = 0.0f;
    DAT_005806a0.extra->camera.target.z = 0.0f;

    DAT_005806a0.extra->camera.eye.x = 0.0f;
    DAT_005806a0.extra->camera.eye.y = 300.0f;
    DAT_005806a0.extra->camera.eye.z = 300.0f;

    DAT_005806a0.extra->camera.savedTarget = DAT_005806a0.extra->camera.target;
    DAT_005806a0.extra->camera.savedEye = DAT_005806a0.extra->camera.eye;

    asdCameraInitializeDefaults(&g_localCamera, 1);
    FUN_0014f0dc(&g_localCamera,
                 &DAT_005806a0.extra->camera.eye,
                 &DAT_005806a0.extra->camera.target,
                 &DAT_005806a0.extra->camera.up);
    FUN_001523b8(&g_localCamera, 1, 36.0f, 10.0f, 2560000.0f,
                 1.66666662693023681640625f);
    FUN_0036b824(&g_localCamera);

    LmapExtraA *extra = DAT_005806a0.extra;
    reinterpret_cast<CameraBindingAccessA *>(extra)->binding->camera = &g_localCamera;
    extra->camera.parameterA0 = 500.0f;
    extra->camera.parameterA4 = 0.0f;
    extra->camera.enabled = 1;
    extra->camera.state = 0;
}
}
