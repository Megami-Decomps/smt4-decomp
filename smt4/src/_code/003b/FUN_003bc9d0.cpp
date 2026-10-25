/* NON_MATCHING: the degree conversion's two float constants come out in swapped VFP registers (s2/s1) and the first-call stores schedule differently; folding the two multiplies into one is what armcc does for a single expression. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "script/scrScriptProcess.h"

extern "C" {

extern char DAT_00407dc4[]; /* "title/title.bcenv" */
extern char DAT_00407db0[]; /* "title/title_1.bccam" */
extern char DAT_00407d9c[]; /* "title/title_1.bam" */

/* The camera object the title intro plays: its +8 word is the scene node the camera reads. */
typedef struct TitleIntroCamera {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *node;
} TitleIntroCamera;

/* The model node's motion speed: the base (0x74) and the applied value (0x78). */
typedef struct TitleIntroNode {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ f32 baseSpeed;
    /* 0x78 */ f32 speed;
} TitleIntroNode;

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
typedef struct CameraView {
    f32 fov;
    f32 v[3];
} CameraView;

void FUN_002a09b4(const char *path, s32 flags);
TitleIntroCamera *asdCameraLoadFromFile(const char *path);
void modelSlotAttachChild(TitleIntroCamera *camera, s32 index);
void *FUN_002c501c(void);
void FUN_002a8638(void *node, f32 *a, f32 *b, f32 *c, f32 *d);
void FUN_002c1e30(void *camera, s32 flag, CameraView view);
AsdMdlObject *asdMdlManagerCreateLoaded(const char *path, u32 flags);
s32 modelHasLoadedAttachment(AsdMdlObject *model);
void FUN_002a0428(AsdMdlObject *model, u32 enabled);
void FUN_0029bb14(void *node, f32 speed);
s32 effTimelineIsDone(void *effect);
void slotSetRequest(s32 slot, s32 value, s32 arg);
s32 screenFadeIsBusy(void);
void asdMdlManagerMarkDestroy(AsdMdlObject *model);
void asdMdlManagerDestroy(AsdMdlObject *model);
void FUN_0029c2cc(void *camera, s32 arg);
void gfxObjectDestroy(void *object);
void asdModelSlotRelease(s32 slot);
s32 padIsButtonPressed(u32 button);

/* Flags a model as being destroyed and stops the effect from following its position. */
static inline void modelFlagDestroyed(AsdMdlObject *model)
{
    model->flags |= 2;
    model->node->resource->positionFollowed = 0;
}

/* Updates the title intro: loads the logo scene and camera on the first call, then plays it until
 * it ends or the player presses a button, fades out and releases everything. */
void FUN_003bc9d0(TitleIntro *intro)
{
    if (intro->step == 0) {
        asdWorkAreaReset();
        FUN_002a09b4(DAT_00407dc4, 0);
        intro->camera = asdCameraLoadFromFile(DAT_00407db0);
        modelSlotAttachChild(intro->camera, 0);
        void *camera = FUN_002c501c();
        CameraView view;
        FUN_002a8638(intro->camera->node, &view.fov, &view.v[2], &view.v[0], &view.v[1]);
        f32 degrees = view.fov * 180.0f;
        view.fov = degrees * 0.31830987f;
        FUN_002c1e30(camera, 1, view);
        FUN_00298d50(reinterpret_cast<u32>(camera));
        intro->model = asdMdlManagerCreateLoaded(DAT_00407d9c, 0x38);
        if (modelHasLoadedAttachment(intro->model) != 0) {
            FUN_002a0428(intro->model, 1);
            AsdMdlObject *model = intro->model;
            if ((model->flags & 4) != 0) {
                model->flags &= ~4;
                ((TitleIntroNode *)model->node)->baseSpeed = 1.0f;
                FUN_0029bb14(model->node, ((TitleIntroNode *)model->node)->speed);
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
            FUN_0029c2cc(intro->camera, 0);
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
