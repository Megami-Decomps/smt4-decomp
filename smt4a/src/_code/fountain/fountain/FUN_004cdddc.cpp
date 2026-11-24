/* NON_MATCHING: camera-parameter aggregate register loads, allocation scratch and stripped-call NOPs differ. */
#include <stdio.h>
#include "Model/MoriModelContent.h"
#include "gfx/CameraMatrixCache.h"
#include "gfx/CameraParameters.h"
#include "status/StatusCamera.h"
#include "shard/Shard0040.h"
#include "title/titleMain.h"
#include "code/Code001c.h"
#include "code/Code0038.h"
#include "gfx/CameraStereoDepth.h"

namespace {
struct FountainInitializationView {
    u8 unk000[0x10];
    void *effectFile;
    void *messageFile;
    u8 unk018[8];
    MoriModelContent *environment;
    MoriModelContent *character;
    MoriModelContent *objects[3];
    u32 mode;
    CameraMatrixCache camera;
    /* The float-pair setter writes one float beyond the canonical camera prefix. */
    f32 cameraRange;
    CameraParameterOwner *cameraParameters;
    u8 unk548[0x10];
    LockedObj *resources;
    u8 unk55C[0x30];
    void *tableFile;
};
typedef char FountainInitializationOffsets[
    offsetof(FountainInitializationView, environment) == 0x20 &&
    offsetof(FountainInitializationView, camera) == 0x38 &&
    offsetof(FountainInitializationView, cameraParameters) == 0x544 &&
    offsetof(FountainInitializationView, resources) == 0x558 &&
    offsetof(FountainInitializationView, tableFile) == 0x58C ? 1 : -1];
}
extern "C" {
extern LockedObj *g_handleRegistry;
void *asdMemoryAllocTraced(u32 bytes, const char *file, u32 line);
void resourceOwnerLoadNamed(LockedObj *owner, const char *name);
u8 FUN_0040af60(LockedObj *owner);
void moriModelManagerEnsureScene(LockedObj *owner, u32 enabled);
void mapLoadSkyTable(u32 number);
void mapEnvironmentApplyPreset(s32 preset, s32 mode);
void asdCameraInitializeDefaults(CameraMatrixCache *camera, u32 mode);
void cameraExportParameters(CameraParameters *output, const CameraParameterOwner *owner);
void cameraMatrixCacheSetLookAt(CameraMatrixCache *camera, const Vec3 *eye, const Vec3 *target, const Vec3 *up);
void stereoCameraSetPerspective(CameraMatrixCache *camera, u32 pivot, f32 first, f32 second, f32 third, f32 fourth);
void campCommonBgAcquire();
void campButtonHelpAcquire();
void asdLoadFileAsyncSimple(const char *name, void **output, u32 mode);
void placeWinCreate();

void FUN_004cdddc(FountainInitializationView *work)
{
    const char *file = "c:\\SMT4F\\SMT4F\\sdds4\\program\\fountain\\fountain.cpp";
    MoriModelContent *list = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), file, 0x18D));
    if (list != NULL)
        list = modelListInit(list);
    work->environment = list;
    modelLoadFileAsyncByName(list, "fountain/fountain.bam");
    list = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), file, 0x191));
    if (list != NULL)
        list = modelListInit(list);
    work->character = list;
    modelLoadFileAsyncByName(list, "fountain/ch001.bam");
    char name[128];
    for (s32 index = 0; index < 3; ++index) {
        sprintf(name, "fountain/obj%03d.bam", index + 1);
        list = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), file, 0x198));
        if (list != NULL)
            list = modelListInit(list);
        work->objects[index] = list;
        modelLoadFileAsyncByName(list, name);
    }
    LockedObj *resources = g_handleRegistry;
    work->resources = resources;
    resourceOwnerLoadNamed(resources, "fountain/fountain.bch");
    if (FUN_0040af60(work->resources) != 0)
        moriModelManagerEnsureScene(work->resources, 1);
    mapLoadSkyTable(200);
    mapEnvironmentApplyPreset(4, 0);
    CameraParameterOwner *parameters = static_cast<CameraParameterOwner *>(asdCameraLoadFromFile("fountain/fountain.bccam"));
    work->mode = 0;
    work->cameraParameters = parameters;
    asdCameraInitializeDefaults(&work->camera, 1);
    CameraParameters pose;
    cameraExportParameters(&pose, work->cameraParameters);
    asdCameraSetStereoDepth(&work->camera, 5.0f, 1.0f);
    cameraMatrixCacheSetLookAt(&work->camera, reinterpret_cast<const Vec3 *>(&pose.eye),
                reinterpret_cast<const Vec3 *>(&pose.target), reinterpret_cast<const Vec3 *>(&pose.up));
    stereoCameraSetPerspective(&work->camera, 1, pose.fieldOfView, pose.nearClip, pose.farClip, pose.aspect);
    FUN_0036b824(reinterpret_cast<u32>(&work->camera));
    g_handleRegistry->fountain.camera = &work->camera;
    campCommonBgAcquire();
    campButtonHelpAcquire();
    asdLoadFileAsyncSimple("fountain/fountain.bf", &work->effectFile, 0);
    asdLoadFileAsyncSimple("fountain/mes_data.mbm", &work->messageFile, 0);
    asdLoadFileAsyncSimple("fountain/Fountain.tbb", &work->tableFile, 0);
    placeWinCreate();
}
}
