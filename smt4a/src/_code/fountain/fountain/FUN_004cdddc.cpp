/* NON_MATCHING: camera-parameter aggregate register loads, allocation scratch and stripped-call NOPs differ. */
#include "Model/ModelList.h"
#include "gfx/CameraMatrixCache.h"
#include "gfx/CameraParameters.h"
#include "status/StatusCamera.h"
#include "shard/Shard0040.h"
#include "title/titleMain.h"
#include "util/FUN_001cd3ec.h"

namespace {
struct FountainInitializationView {
    u8 unk000[0x10];
    void *effectFile;
    void *messageFile;
    u8 unk018[8];
    ModelList *environment;
    ModelList *character;
    ModelList *objects[3];
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
void *FUN_00178b04(u32 bytes, const char *file, u32 line);
ModelList *modelListInit(ModelList *list);
s32 textFormatBuffer(char *output, const char *format, ...);
void resourceOwnerLoadNamed(LockedObj *owner, const char *name);
u8 FUN_0040af60(LockedObj *owner);
void FUN_0040ae70(LockedObj *owner, u32 enabled);
void mapLoadSkyTable(u32 number);
void mapEnvironmentApplyPreset(s32 preset, s32 mode);
CameraParameterOwner *FUN_00387350(const char *name);
void asdCameraInitializeDefaults(CameraMatrixCache *camera, u32 mode);
void cameraExportParameters(CameraParameters *output, const CameraParameterOwner *owner);
void uiSetFloatPair(CameraMatrixCache *camera, f32 first, f32 second);
void FUN_0014f0dc(CameraMatrixCache *camera, const Vec3 *eye, const Vec3 *target, const Vec3 *up);
void FUN_001523b8(CameraMatrixCache *camera, u32 pivot, f32 first, f32 second, f32 third, f32 fourth);
void campCommonBgAcquire();
void campButtonHelpAcquire();
void asdLoadFileAsyncSimple(const char *name, void **output, u32 mode);
void FUN_0031e198();

void FUN_004cdddc(FountainInitializationView *work)
{
    const char *file = "c:\\SMT4F\\SMT4F\\sdds4\\program\\fountain\\fountain.cpp";
    ModelList *list = static_cast<ModelList *>(FUN_00178b04(sizeof(ModelList), file, 0x18D));
    if (list != NULL)
        list = modelListInit(list);
    work->environment = list;
    FUN_001cd3ec(list, "fountain/fountain.bam");
    list = static_cast<ModelList *>(FUN_00178b04(sizeof(ModelList), file, 0x191));
    if (list != NULL)
        list = modelListInit(list);
    work->character = list;
    FUN_001cd3ec(list, "fountain/ch001.bam");
    char name[128];
    for (s32 index = 0; index < 3; ++index) {
        textFormatBuffer(name, "fountain/obj%03d.bam", index + 1);
        list = static_cast<ModelList *>(FUN_00178b04(sizeof(ModelList), file, 0x198));
        if (list != NULL)
            list = modelListInit(list);
        work->objects[index] = list;
        FUN_001cd3ec(list, name);
    }
    LockedObj *resources = g_handleRegistry;
    work->resources = resources;
    resourceOwnerLoadNamed(resources, "fountain/fountain.bch");
    if (FUN_0040af60(work->resources) != 0)
        FUN_0040ae70(work->resources, 1);
    mapLoadSkyTable(200);
    mapEnvironmentApplyPreset(4, 0);
    CameraParameterOwner *parameters = FUN_00387350("fountain/fountain.bccam");
    work->mode = 0;
    work->cameraParameters = parameters;
    asdCameraInitializeDefaults(&work->camera, 1);
    CameraParameters pose;
    cameraExportParameters(&pose, work->cameraParameters);
    uiSetFloatPair(&work->camera, 5.0f, 1.0f);
    FUN_0014f0dc(&work->camera, reinterpret_cast<const Vec3 *>(&pose.eye),
                reinterpret_cast<const Vec3 *>(&pose.target), reinterpret_cast<const Vec3 *>(&pose.up));
    FUN_001523b8(&work->camera, 1, pose.fieldOfView, pose.nearClip, pose.farClip, pose.aspect);
    FUN_0036b824(reinterpret_cast<u32>(&work->camera));
    g_handleRegistry->fountain.camera = &work->camera;
    campCommonBgAcquire();
    campButtonHelpAcquire();
    asdLoadFileAsyncSimple("fountain/fountain.bf", &work->effectFile, 0);
    asdLoadFileAsyncSimple("fountain/mes_data.mbm", &work->messageFile, 0);
    asdLoadFileAsyncSimple("fountain/Fountain.tbb", &work->tableFile, 0);
    FUN_0031e198();
}
}
