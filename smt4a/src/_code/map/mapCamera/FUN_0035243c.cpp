/* NON_MATCHING: the global camera-owner load and saved-register setup are scheduled differently in the prologue. */
#include "map/LmapViewGlobals.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "classes/Obj557af8.h"
#include "gfx/CameraAnimationApply.h"
#include <new>



extern "C" {
s32 textFormatBuffer(char *destination, const char *format, ...);
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);
s32 settings5BGetValue();
void settings5BSetValue(s8 value);

// Restore the previous static pose, load the requested camera clip, then sample its first frame.
void FUN_0035243c(s32 mapId, s32 variant)
{
    if (DAT_005806a0.view->clip != NULL) {
        delete DAT_005806a0.view->clip;
        LmapViewA *view = DAT_005806a0.view;
        view->clip = NULL;
        const MapVector eye = view->homeEye;
        const MapVector target = view->homeTarget;
        view->eye.x = eye.x;
        view->eye.y = eye.y;
        view->eye.z = eye.z;
        view->target.x = target.x;
        view->target.y = target.y;
        view->target.z = target.z;
        view->unk2B8 = 0;
        view->unk304 = 0;
        view->savedEye.x = eye.x;
        view->savedEye.y = eye.y;
        view->savedEye.z = eye.z;
        view->savedTarget.x = target.x;
        view->savedTarget.y = target.y;
        view->savedTarget.z = target.z;
    }
    u32 size = 0;
    char path[64];
    textFormatBuffer(path, "map/m%03d/cam%03d_%02d.bch", mapId, mapId, variant);
    const AsdAnimCameraResource *resource = static_cast<const AsdAnimCameraResource *>(asdLoadFileWithSize(path, &size, 1));
    void *storage = asdMemoryAllocTraced(sizeof(Obj557af8), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCamera.cpp", 0x15ad);
    Obj557af8 *camera = static_cast<Obj557af8 *>(storage);
    if (camera != NULL)
        camera = new (camera) Obj557af8(resource);
    LmapViewA *view = DAT_005806a0.view;
    view->clip = camera;
    controllerApplyAtUnitScale(camera, &view->homeEye, 0);
    if (settings5BGetValue())
        settings5BSetValue(0);
}
}
