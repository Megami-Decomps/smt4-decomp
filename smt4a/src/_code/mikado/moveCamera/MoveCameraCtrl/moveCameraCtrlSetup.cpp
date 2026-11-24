/* NON_MATCHING: 54 lines (50 by shape), three places.
 * - The first key: retail loads the key's target pointer before it copies the position, then stores in the order
 *   first-key position, first-key target, initial target, initial position; this build copies the position to both
 *   fields before it reads the target. (moveCameraCtrlSnapToNode and moveCameraCtrlLoadTrack load the pointer early too.)
 * - The bone loop: retail keeps the name offset 20 in fp and loads `[names, 20 + i * 12]` (so it saves fp and its
 *   frame is 140 bytes, not 144); this build adds `i * 12` to the base and loads `[.., #20]`.
 * - The found name: retail moves strstr's result straight into r1 (`movs r1, r0`), this build tests r0 and moves it. */
#include "common.h"
#include <stdio.h>
#include "Model/MoriModelManager.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriScene.h"
#include "classes/Obj557d00.h"
#include "gfx/ControllerModel.h"
#include "gfx/MoveCameraCtrl.h"
#include "classes/Obj557b58.h"
#include "code/Code0040_Shard0040.h"
#include "gamedata/GameDataAccess.h"

extern "C" {
extern const char DAT_0053295c[]; /* this file's __FILE__: mikado/moveCamera/MoveCameraCtrl.cpp */

void moveCameraCtrlLoadTrack(MoveCameraCtrlWork *ctrl, const char *name);
void resourceOwnerLoadNamed(Obj557c48 *registry, const char *name);
void FUN_0045b538(void *owner);
char *FUN_00102c30(const char *text, const char *pattern);  /* strstr */

/* Allocates and constructs one model content at line `line` of MoveCameraCtrl.cpp. */
static __inline MoriModelContent *mcCreateContent(s32 line)
{
    MoriModelContent *content = (MoriModelContent *)asdMemoryAllocTraced(0x20, DAT_0053295c, line);
    if (content != NULL) {
        content = modelListInit(content);
    }
    return content;
}

/* Loads the camera model and its camera track, collects the positions of the model's "Dum_" bones and, when it
 * has any, loads the arrow and point markers. `dataName` names the model when it differs from the camera's. */
void moveCameraCtrlSetup(MoveCameraCtrlWork *ctrl, const char *cameraName, const char *dataName)
{
    char path[128];
    Vec3f point;

    ctrl->cameraModel = NULL;
    ctrl->frameCount = 0;
    ctrl->auxiliaryCount = 0;
    ctrl->frame = 0;
    ctrl->pointCount = 0;
    if (dataName == NULL) {
        dataName = cameraName;
    }
    ctrl->hasPoints = 0;

    sprintf(path, "%s.bam", dataName);
    ctrl->cameraModel = mcCreateContent(245);
    resourceOwnerLoadFileSync(ctrl->cameraModel, path);
    moriModelContentLoadBody(ctrl->cameraModel, NULL);
    FUN_0045b538(ctrl->cameraModel->resource->unk0C);
    Obj557b18 *body = ctrl->cameraModel->body;
    handleRegistryRegisterObject(g_handleRegistry, body);
    modelPlayClip(body, 0, 1, 0.0f, 0.0f);
    controllerSetPosition(body, 1.0f, 1.0f, 1.0f);
    controllerSetPositionXyz(body, 0.0f, 0.0f, 0.0f);

    sprintf(path, "%s_cam.bch", cameraName);
    moveCameraCtrlLoadTrack(ctrl, path);
    sprintf(path, "%s.bch", cameraName);
    Obj557c48 *registry = g_handleRegistry;
    resourceOwnerLoadNamed(registry, path);
    if (FUN_0040af60((LockedObj *)registry) != 0) {
        moriModelManagerEnsureScene(registry, 1);
    }

    const MoveCameraTrackKey *key = ctrl->resource->track->keys[0];
    ctrl->initialPosition = ctrl->firstKeyPosition = key->position;
    ctrl->initialTarget = ctrl->firstKeyTarget = *key->target;

    s32 boneCount = body->skeleton->boneCount;
    Obj557b18NameNode *boneNames = body->modelData->boneNames;
    for (s32 i = 0; i < boneCount; i++) {
        const char *name = FUN_00102c30(boneNames[i + 1].name, "Dum_");
        if (name != NULL) {
            lookupNameEntry(body, (u32)name, (u32 *)&point);
            ctrl->points[ctrl->pointCount].x = point.x;
            ctrl->points[ctrl->pointCount].y = point.y;
            ctrl->points[ctrl->pointCount].z = point.z;
            ctrl->pointCount++;
        }
    }

    if (ctrl->pointCount > 0) {
        ctrl->hasPoints = 1;
        sprintf(path, "mikado/yaji.bam");
        ctrl->arrowModel = mcCreateContent(350);
        resourceOwnerLoadFileSync(ctrl->arrowModel, path);
        FUN_0040ab7c(ctrl->arrowModel, 0);
        moriModelContentLoadBody(ctrl->arrowModel, NULL);
        Obj557b18 *arrow = ctrl->arrowModel->body;
        handleRegistryRegisterObject(g_handleRegistry, arrow);
        modelPlayClip(arrow, 0, 1, 0.0f, 0.0f);
        controllerSetPosition(arrow, 1.0f, 1.0f, 1.0f);
        controllerSetPositionXyz(arrow, 0.0f, 0.0f, 0.0f);

        sprintf(path, "mikado/point.bam");
        ctrl->pointModel = mcCreateContent(364);
        resourceOwnerLoadFileSync(ctrl->pointModel, path);
        FUN_0040ab7c(ctrl->pointModel, 0);
        moriModelContentLoadBody(ctrl->pointModel, NULL);
        Obj557b18 *marker = ctrl->pointModel->body;
        handleRegistryRegisterObject(g_handleRegistry, marker);
        modelPlayClip(marker, 0, 1, 0.0f, 0.0f);
        controllerSetPosition(marker, 1.0f, 1.0f, 1.0f);
        ctrl->pointPosition = ctrl->points[0];
        controllerSetPositionXyz(marker, ctrl->pointPosition.x, ctrl->pointPosition.y, ctrl->pointPosition.z);
    }
}

} /* extern "C" */
