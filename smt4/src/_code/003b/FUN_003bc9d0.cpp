/* NON_MATCHING: with the radians-to-degrees conversion as its own function the two multiplies and their constants match; the cameraExportProviderEntryWords out-pointer setup (retail forms &fov last) and the frame-counter load before the two flag stores are scheduled differently. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "script/scrScriptProcess.h"
#include "code/Code0038.h"
#include "gfx/CameraPerspective.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"

/* Radians to degrees, as moverAimCameraAlongPart and the title menu's FUN_001e9990 convert the same camera field of view. */
static f32 radiansToDegrees(f32 radians)
{
    return radians * 180.0f * 0.31830987f;
}

extern "C" {

extern char DAT_00407dc4[]; /* "title/title.bcenv" */
extern char DAT_00407db0[]; /* "title/title_1.bccam" */
extern char DAT_00407d9c[]; /* "title/title_1.bam" */

/* The camera object the title intro plays: its +8 word is the scene node the camera reads. */
typedef struct TitleIntroCamera {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *node;
} TitleIntroCamera;

/* Work block of the title intro (the animated logo before the title menu). */
typedef struct TitleIntro {
    /* 0x00 */ u8 started;
    /* 0x01 */ u8 fadingOut;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 finished;
    /* 0x04 */ AsdMdlObject *model;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ TitleIntroCamera *camera;
    /* 0x1C */ u8 unk1c[4];
    /* 0x20 */ s32 step;
    /* 0x24 */ u8 skipRequested;
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ s32 fadeFrames;
} TitleIntro;

void asdWorkAreaReset(void);

void FUN_002a09b4(const char *path, s32 flags);
void modelSlotAttachChild(TitleIntroCamera *camera, s32 index);
void *asdCameraGetSavedRenderPairs(void);
void cameraExportProviderEntryWords(void *node, f32 *a, f32 *b, f32 *c, f32 *d);
void stereoCameraSetPerspective(void *camera, u32 pivot, CameraPerspective perspective);

s32 modelHasLoadedAttachment(AsdMdlObject *model);

s32 effTimelineIsDone(void *effect);
void slotSetRequest(s32 slot, s32 value, s32 arg);
s32 screenFadeIsBusy(void);


void modelRemoveFromSlotList(void *camera, s32 arg);
void gfxObjectDestroy(void *object);
void asdModelSlotRelease(s32 slot);
s32 padIsButtonPressed(u32 button);

/* Flags a model as being destroyed and stops the effect from following its position. */
static inline void modelFlagDestroyed(AsdMdlObject *model)
{
    model->flags |= 2;
    model->node->sceneNode->positionFollowed = 0;
}

/* Updates the title intro: loads the logo scene and camera on the first call, then plays it until
 * it ends or the player presses a button, fades out and releases everything. */
void FUN_003bc9d0(TitleIntro *intro)
{
    if (intro->step == 0) {
        asdWorkAreaReset();
        FUN_002a09b4(DAT_00407dc4, 0);
        intro->camera = static_cast<TitleIntroCamera *>(asdCameraLoadFromFile(DAT_00407db0));
        modelSlotAttachChild(intro->camera, 0);
        void *camera = asdCameraGetSavedRenderPairs();
        CameraPerspective perspective;
        cameraExportProviderEntryWords(intro->camera->node, &perspective.fovy, &perspective.aspect, &perspective.nearZ, &perspective.farZ);
        perspective.fovy = radiansToDegrees(perspective.fovy);
        stereoCameraSetPerspective(camera, 1, perspective);
        FUN_00298d50(reinterpret_cast<u32>(camera));
        intro->model = asdMdlManagerCreateLoaded(DAT_00407d9c, 0x38);
        if (modelHasLoadedAttachment(intro->model) != 0) {
            lightOwnerRegister(intro->model, 1);
            AsdMdlObject *model = intro->model;
            if ((model->flags & 4) != 0) {
                model->flags &= ~4;
                model->node->animationSpeed = 1.0f;
                modelSetScale(model->node, model->node->speed);
            }
        }
        intro->started = 1;
        intro->unk02 = 1;
        intro->step++;
    }
    if (intro->step == 1) {
        if ((effTimelineIsDone(intro->camera) != 0 && intro->fadingOut == 0) || intro->skipRequested != 0) {
            if (intro->fadingOut == 0) {
                slotSetRequest(0, 10, 0xFF);
                slotSetRequest(1, 10, 0xFF);
            }
            intro->fadingOut = 1;
            intro->skipRequested = 0;
        }
        if (screenFadeIsBusy() == 0 && intro->fadingOut != 0 && ++intro->fadeFrames >= 2) {
            intro->fadingOut = 0;
            modelFlagDestroyed(intro->model);
            asdMdlManagerMarkDestroy(intro->model);
            asdMdlManagerDestroy(intro->model);
            intro->model = NULL;
            modelRemoveFromSlotList(intro->camera, 0);
            gfxObjectDestroy(intro->camera);
            intro->camera = NULL;
            asdModelSlotRelease(0);
            intro->finished = 1;
        }
    }
    if (padIsButtonPressed(0) != 0) {
        if (screenFadeIsBusy() == 0) {
            intro->skipRequested = 1;
        }
    }
}

}
