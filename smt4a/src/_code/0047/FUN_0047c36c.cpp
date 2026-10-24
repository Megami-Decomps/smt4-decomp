/* NON_MATCHING: readable rewrite of the quest scene update; constructor/strd result copy now match retail, but the build hoists the jobStop mode argument and the zero move ahead of the flag clear, allocates the tick counters in r0/r1 the other way round and loads the step PTMF adjustment before the pointer test. */
#include "addon/aocMain.h"
#include "classes/Obj526238.h"
#include "classes/WindowOperation.h"

struct JobOwner;
struct JobFlagsWork;
struct PanelSprite;
struct SceneWindowWork;
struct QuestScene;

typedef void (QuestScene::*QuestSceneStep)();

// One of the 25 animated panels of the scene (0x8c bytes).
struct QuestPanel {
    u8 data[0x8c];
};

// The quest scene's work block; its step handlers are member-function pointers indexed by the state.
struct QuestScene {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ s32 state;
    /* 0x0008 */ s32 substate;
    /* 0x000C */ u8 unk000c[4];
    /* 0x0010 */ QuestSceneStep steps[63];
    /* 0x0208 */ Obj526238Child *child;
    /* 0x020C */ u8 unk020c[4];
    /* 0x0210 */ WindowOperationResult operation;
    /* 0x0220 */ u8 unk0224[0x158];
    /* 0x037C */ QuestPanel panels[25];
    /* 0x1128 */ s32 slowTick;      // 0..19
    /* 0x112C */ s32 fastTick;      // 0..29
    /* 0x1130 */ u8 unk1130[0x80];
    /* 0x11B0 */ u8 owner[0x5f0];
    /* 0x17A0 */ u32 childJob;
    /* 0x17A4 */ u8 unk17a4[8];
    /* 0x17AC */ s32 touchMarker;
};

extern "C" {
extern AocMain *g_aocMain;
extern AocSystem *g_aocSystem;

s32 sysLightEventTryWait(AocObjB *event);
void FUN_00163aa4(PanelSprite *panel, f32 step);
void FUN_00477d10(SceneWindowWork *window, s32 value, s32 mode);
void jobOwnerFreeSlotAndStop(JobOwner *owner);
void jobFlagsWorkStop(JobFlagsWork *work);
u32 jobIsValid(u32 job);
u32 jobStop(u32 job, s32 mode);
void ifTouchRegionRemove();
void FUN_0016ccb4(u32 *queryResult);
void aocClearDisplayFlag(AocSystem *system);
void aocReleasePackageOwner(AocSystem *system);

// Runs the scene one frame. While the content is released (states 4..14 with the add-on event signalled) the scene
// shuts down instead: it stops its job, clears the result and returns to state 17.
void FUN_0047c36c(QuestScene *scene)
{
    if ((u32)(scene->state - 4) < 11 && sysLightEventTryWait(&g_aocMain->objB) != 0) {
        g_aocMain->flags &= ~0x10000;
        FUN_00477d10((SceneWindowWork *)scene, -1, 0);
        jobOwnerFreeSlotAndStop((JobOwner *)scene->owner);
        jobFlagsWorkStop((JobFlagsWork *)scene);
        if (jobIsValid(scene->childJob)) {
            if (scene->touchMarker != -1) {
                scene->touchMarker = -1;
                ifTouchRegionRemove();
            }
            scene->flags &= ~0x3000;
            jobStop(scene->childJob, 0);
        }
        WindowOperationResult *operation = &scene->operation;
        operation->succeeded = true;
        operation->first = 0;
        operation->result = WindowStatusResult(operation->first);
        FUN_0016ccb4(&g_aocMain->operation.queryResult);
        g_aocMain->flags &= ~0x10000;
        if (scene->state == 10) {
            aocClearDisplayFlag(g_aocSystem);
            aocReleasePackageOwner(g_aocSystem);
        }
        scene->state = 17;
        scene->substate = 0;
        if (scene->child != NULL) {
            delete scene->child;
            scene->child = NULL;
        }
        return;
    }
    for (s32 index = 0; index < 25; index++) {
        FUN_00163aa4((PanelSprite *)&scene->panels[index], 1.0f);
    }
    scene->slowTick = (scene->slowTick + 1) % 20;
    scene->fastTick = (scene->fastTick + 1) % 30;
    QuestSceneStep step = scene->steps[scene->state];
    if (step != NULL) {
        (scene->*step)();
    }
}
}
