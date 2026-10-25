/* NON_MATCHING: the global camera-owner load and saved-register setup are scheduled differently in the prologue. */
#include "map/lmapMain.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "classes/Obj557af8.h"
#include "gfx/CameraAnimationApply.h"
#include <new>

struct CameraPoseValues { f32 eyeX, eyeY, eyeZ, targetX, targetY, targetZ; };


extern "C" {
extern LmapExtraGlobalsA DAT_005806a0;
s32 textFormatBuffer(char *destination, const char *format, ...);
void *FUN_00178b04(u32 size, const char *file, u32 line);
s32 settings5BGetValue();
void settings5BSetValue(s8 value);

// Restore the previous static pose, load the requested camera clip, then sample its first frame.
void FUN_0035243c(s32 mapId, s32 variant)
{
    if (DAT_005806a0.extra->unk2BC != 0) {
        delete reinterpret_cast<Obj557af8 *>(DAT_005806a0.extra->unk2BC);
        LmapExtraA *view = DAT_005806a0.extra;
        view->unk2BC = 0;
        const CameraPoseValues pose = *reinterpret_cast<const CameraPoseValues *>(view->unk2C0);
        view->camera.eye.x = pose.eyeX;
        view->camera.eye.y = pose.eyeY;
        view->camera.eye.z = pose.eyeZ;
        view->camera.target.x = pose.targetX;
        view->camera.target.y = pose.targetY;
        view->camera.target.z = pose.targetZ;
        view->unk2B8 = 0;
        view->unk304 = 0;
        view->camera.savedEye.x = pose.eyeX;
        view->camera.savedEye.y = pose.eyeY;
        view->camera.savedEye.z = pose.eyeZ;
        view->camera.savedTarget.x = pose.targetX;
        view->camera.savedTarget.y = pose.targetY;
        view->camera.savedTarget.z = pose.targetZ;
    }
    u32 size = 0;
    char path[64];
    textFormatBuffer(path, "map/m%03d/cam%03d_%02d.bch", mapId, mapId, variant);
    const AsdAnimCameraResource *resource = static_cast<const AsdAnimCameraResource *>(asdLoadFileWithSize(path, &size, 1));
    void *storage = FUN_00178b04(sizeof(Obj557af8), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCamera.cpp", 0x15ad);
    Obj557af8 *camera = static_cast<Obj557af8 *>(storage);
    if (camera != NULL)
        camera = new (camera) Obj557af8(resource);
    LmapExtraA *view = DAT_005806a0.extra;
    view->unk2BC = reinterpret_cast<u32>(camera);
    controllerApplyAtUnitScale(camera, view->unk2C0, 0);
    if (settings5BGetValue())
        settings5BSetValue(0);
}
}
