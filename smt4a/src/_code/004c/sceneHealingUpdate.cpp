/* NON_MATCHING: the block layout and every call match. Retail keeps the work in r5 and its short-lived values in r4 (this build the other way round) and reloads g_freeCamera through r4 for the second store. */
#include "shard/HealingSceneWork.h"
#include "script/scrScriptProcess.h"
#include "game/GameStateA.h"
#include "code/Code0013.h"
#include "Model/MoriModelManager.h"
#include "gfx/ControllerModel.h"
#include "gfx/FreeCamera.h"


struct HealingFieldJob {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 job;
};

extern "C" {
extern HealingFieldJob *DAT_0057f658;
extern f32 DAT_005f1b80[5];
void messageSetMode(u32 mode);
void frameTexConfigureCaptureTextures(u32 value);
void FUN_004cdddc(HealingSceneWork *work);
s32 bgmGetStateById(u32 id);
void soundChannelRequestIfEnabled(u32 id, u32 channel, u32 duration);
void FUN_0035d03c(u32 value);
void *dataTableFileGetTable(void *file, u32 index);
void *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
void placeWinStartText(const char *text);
void screenFadeStartIn(u32 index, u32 duration, u32 value);
void priceMenuUpdateScripts(HealingSceneWork *work);
void slotSetRequest(u32 index, u32 value, u32 extra);
s32 screenFadeIsBusy();
void sceneHealingRelease(HealingSceneWork *work);
void FUN_002c2610();
void soundChannelStopAll(u32 channel);
s32 jobIsValid(u32 job);
void jobStop(u32 job, u16 option);
void titleSetSlotValueState2(u32 index, u32 value);
void gameStateSetJumpRequest(u32 first, u32 second, u32 third, f32 a, f32 b, f32 c, f32 d, f32 e);
void gameStateClearFlag();
void asdSequenceRequest(u32 sequence, u32 first, u32 second);
}


/* Creates a loaded model's body, starts its idle clip and registers it for drawing. */
static __inline void healingModelStart(MoriModelContent **slot)
{
    moriModelContentLoadBody(*slot, NULL);
    Obj557b18 *body = (*slot)->body;
    modelPlayClip(body, 0, 2, 0.0f, 0.0f);
    handleRegistryRegisterObject(g_handleRegistry, body);
}

/* Loads and runs the Spring of Healing scene, then restores its field or map context. */
extern "C" s32 sceneHealingUpdate(HealingSceneWork *work)
{
    switch (work->state) {
    case 0:
        messageSetMode(0);
        frameTexConfigureCaptureTextures(1);
        /* Both entry modes start the same way; retail keeps the flag's read. */
        if (work->returnToField) {
            work->state = 1;
            work->timer = 0;
        } else {
            work->state = 1;
            work->timer = 0;
        }
        break;
    case 1:
        FUN_004cdddc(work);
        if (bgmGetStateById(0x100007a) != 1)
            soundChannelRequestIfEnabled(0x100007a, 0, 60);
        FUN_0035d03c(1);
        work->state = 2;
        break;
    case 2: {
        bool ready = true;
        if (!moriModelContentIsLoaded(work->primary))
            ready = false;
        if (!moriModelContentIsLoaded(work->secondary))
            ready = false;
        for (s32 index = 0; index < 3; ++index) {
            if (!moriModelContentIsLoaded(work->models[index]))
                ready = false;
        }
        if (work->heapA == NULL)
            ready = false;
        if (work->heapB == NULL)
            ready = false;
        if (work->tableFile != NULL && ready) {
            healingModelStart(&work->primary);
            healingModelStart(&work->secondary);
            for (s32 index = 0; index < 3; ++index) {
                healingModelStart(&work->models[index]);
            }
            work->script = scrScriptProcessCreate(work->heapA, work->heapB);
            scriptProcessSetMode(work->script, 2);
            void *table = dataTableFileGetTable(work->tableFile, 0);
            work->entries = dataTableGetEntries(table);
            work->count = dataTableGetCount(table);
            /* The full-width "Spring of Healing" caption, in Shift-JIS. */
            placeWinStartText("\x82\x72\x82\x90\x82\x92\x82\x89\x82\x8e\x82\x87\x81\x40"
                              "\x82\x8f\x82\x86\x81\x40\x82\x67\x82\x85\x82\x81\x82\x8c"
                              "\x82\x89\x82\x8e\x82\x87");
            if (pairedAvailabilityGetState(0) == 3)
                screenFadeStartIn(0, 10, 255);
            if (pairedAvailabilityGetState(1) == 3)
                screenFadeStartIn(1, 10, 255);
            work->state = 3;
            freeCameraCreate(2);
            g_freeCamera->target = work->cameraTarget;
            g_freeCamera->active = 1;
        }
        break;
    }
    case 3:
        priceMenuUpdateScripts(work);
        break;
    case 4:
        slotSetRequest(0, 10, 255);
        slotSetRequest(1, 10, 255);
        work->state = 5;
        freeCameraDestroy();
        break;
    case 5:
        if (!screenFadeIsBusy()) {
            sceneHealingRelease(work);
            FUN_002c2610();
            messageSetMode(1);
            FUN_0035d03c(0);
            if (work->returnToField == 0) {
                gameStateSetJumpRequest(g_gameState.savedMapId, g_gameState.savedAreaId, g_gameState.savedObjectId,
                              DAT_005f1b80[0], DAT_005f1b80[1], DAT_005f1b80[2],
                              DAT_005f1b80[3], DAT_005f1b80[4]);
                gameStateClearFlag();
                asdSequenceRequest(6, 0, 0);
            } else {
                soundChannelStopAll(15);
                HealingFieldJob *field = DAT_0057f658;
                if (jobIsValid(field->job))
                    jobStop(field->job, 0);
                titleSetSlotValueState2(0, 1);
                titleSetSlotValueState2(1, 1);
            }
        }
        break;
    }
    return 0;
}
