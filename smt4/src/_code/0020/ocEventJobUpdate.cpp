/* NON_MATCHING: 42 lines, registers only: retail keeps the 0.0 constant in s17 and the truncated motion frame in s18 (swapped here), &work->model in r6 and &work->motion in r5 in the start-camera switch (swapped), and loads the frame controller's frame into r0 rather than r1. */
#include "common.h"
#include "shard/JobWork.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0038.h"
#include "gfx/CameraStereoDepth.h"

/* unit-local: the frame controller of a loaded camera animation (only the fields this job drives). */
struct OcCameraFrames {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 frame;
    /* 0x3C */ f32 previousFrame;
    /* 0x40 */ u8 unk40[4];
    /* 0x44 */ f32 startFrame;
    /* 0x48 */ f32 endFrame;
    /* 0x4C */ f32 (*playPolicy)(f32 startFrame, f32 endFrame, f32 frame, void *userData);
    /* 0x50 */ void *userData;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u8 dirty;
};

/* unit-local: a camera animation loaded from a .bccam file. */
struct OcCameraAnim {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ OcCameraFrames *frames;
};

/* unit-local: the perspective stereoCameraSetPerspective takes by value. */
struct OcCameraPerspective {
    f32 fovy;
    f32 nearZ;
    f32 farZ;
    f32 aspect;
};

/* unit-local: the opening-event job's work block. */
struct OcEventWork {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 camera[0x508];          /* the stereo camera the animation drives */
    /* 0x50C */ f32 eye[3];                /* camera parameters exported from the animation */
    /* 0x518 */ f32 target[3];
    /* 0x524 */ f32 up[3];
    /* 0x530 */ OcCameraPerspective perspective;
    /* 0x540 */ u8 unk540[0x10];
    /* 0x550 */ f32 twist;
    /* 0x554 */ AsdMdlObject *model;
    /* 0x558 */ OcCameraAnim *current;     /* the camera animation playing */
    /* 0x55C */ OcCameraAnim *cameras[2];  /* the loop and the start animation */
    /* 0x564 */ s32 state;
    /* 0x568 */ s32 frames;                /* frames spent in the state */
    /* 0x56C */ u8 attached;               /* the current camera is in the slot list */
    /* 0x570 */ s32 motion;                /* the camera (and model motion) in use */
};

extern "C" {
s32 eventIsSkipping(void);
void FUN_002a09b4(const char *path, u32 bank);
s32 modelHasLoadedAttachment(const AsdMdlObject *object);
void animPlayerSetLoopPolicy(AsdMdlNode *node, s32 loop);
void FUN_002a04f0(void *arg);
void modelSlotAttachChild(OcCameraAnim *camera, s32 index);
void cameraExportParameters(f32 *output, const OcCameraAnim *camera);
void cameraMatrixCacheSetLookAt(void *camera, const f32 *eye, const f32 *target, const f32 *up);
void stereoCameraSetPerspective(void *camera, u32 pivot, OcCameraPerspective perspective);
void titleSetSlotValueState2(u32 index, u32 value);
u32 effTimelineIsDone(OcCameraAnim *camera);
f32 FUN_002f50b8(const AsdMdlNode *node);
void modelRemoveFromSlotList(OcCameraAnim *camera, s32 slotIndex);
u32 gfxObjectDestroy(OcCameraAnim *camera);
void asdModelSlotRelease(s32 slot);
f32 nw_anim_PlayPolicy_Loop(f32 startFrame, f32 endFrame, f32 frame, void *userData);
}

static const char s_modelPath[] = "event/oc/oc_loop.bam";
static const char s_startCameraPath[] = "event/oc/oc_start.bccam";
static const char s_loopCameraPath[] = "event/oc/oc_loop.bccam";
static const char s_environmentPath[] = "event/oc/oc_loop.bcenv";

/* Points the job's stereo camera at the current camera animation's frame. */
static void ocEventApplyCamera(OcEventWork *work)
{
    cameraExportParameters(work->eye, work->current);
    asdCameraSetStereoDepth(work->camera, work->twist, 1.0f);
    cameraMatrixCacheSetLookAt(work->camera, work->eye, work->target, work->up);
    stereoCameraSetPerspective(work->camera, 1, work->perspective);
}

/* Steps the opening event: loads the environment, cameras and model, starts the loop camera,
 * switches to the start camera when the loop ends (or the event is skipped), then releases
 * everything. Returns -1 once released. */
extern "C" s32 ocEventJobUpdate(u32 job)
{
    OcEventWork *work = (OcEventWork *)jobGetWork(job);
    switch (work->state) {
    case 0:
        if (eventIsSkipping() == 0) {
            FUN_002a09b4(s_environmentPath, 0);
            work->current = NULL;
            work->cameras[0] = (OcCameraAnim *)asdCameraLoadFromFile(s_loopCameraPath);
            work->cameras[1] = (OcCameraAnim *)asdCameraLoadFromFile(s_startCameraPath);
            work->model = asdMdlManagerCreateSecondList(s_modelPath, 0x38);
        }
        break;
    case 1:
        if (work->model != NULL && modelHasLoadedAttachment(work->model) == 0)
            break;
        work->motion = 1;
        if (work->model != NULL && work->model->node->unk0c < 0) {
            lightOwnerRegister(work->model, 1);
            animPlayerSetLoopPolicy(work->model->node, 1);
            modelSelectPrimaryMotion(work->model->node, work->motion, 0.0f);
            animationEvaluateCallback((ScalarAnimationOwner *)work->model->node, 0.0f);
            modelSetScale(work->model->node, 1.0f);
        }
        FUN_002a04f0(NULL);
        work->current = work->cameras[work->motion];
        modelSlotAttachChild(work->current, 0);
        OcCameraFrames *loop = work->cameras[0]->frames;
        loop->playPolicy = nw_anim_PlayPolicy_Loop;
        loop->dirty = 1;
        work->attached = 1;
        ocEventApplyCamera(work);
        screenFadeSlotReset(0);
        titleSetSlotValueState2(1, 10);
        work->state = 2;
        work->frames = 0;
        break;
    case 2:
        if (effTimelineIsDone(work->current) != 0 || eventIsSkipping() != 0) {
            s32 frame = (s32)ownerGetFloatValue(work->model->node);
            modelSelectPrimaryMotion(work->model->node, work->motion, FUN_002f50b8(work->model->node));
            modelRemoveFromSlotList(work->current, 0);
            work->motion = 0;
            modelSelectPrimaryMotion(work->model->node, work->motion, (f32)frame);
            work->current = work->cameras[work->motion];
            modelSlotAttachChild(work->current, 0);
            OcCameraFrames *frames = work->cameras[work->motion]->frames;
            f32 next = frames->playPolicy(frames->startFrame, frames->endFrame, 0.0f, frames->userData);
            frames->previousFrame = frames->frame;
            frames->frame = next;
            frames->dirty = 1;
            work->state = 3;
            work->frames = 0;
        }
        /* fall through */
    case 3:
        ocEventApplyCamera(work);
        break;
    case 4:
        if (work->frames == 0) {
            asdMdlManagerMarkDestroy(work->model);
            work->frames++;
            break;
        }
        if (work->attached != 0)
            modelRemoveFromSlotList(work->current, 0);
        gfxObjectDestroy(work->cameras[0]);
        gfxObjectDestroy(work->cameras[1]);
        work->cameras[0] = NULL;
        work->cameras[1] = NULL;
        asdModelSlotRelease(0);
        if (work->model != NULL)
            asdMdlManagerDestroy(work->model);
        work->current = NULL;
        work->model = NULL;
        return -1;
    }
    return 0;
}
