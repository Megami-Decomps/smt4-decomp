/* NON_MATCHING: only scratch registers differ: retail computes the step increment of step 2 and the state constants 7 and 2 in r1, the build in r0. */
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntry.h"


struct CallbackWorkflow {
    /* 0x00 */ u32 task;
    /* 0x04 */ u8 state;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 step;
    /* 0x0C */ u32 timer;
    /* 0x10 */ void *heapA;
    /* 0x14 */ ScriptProcess *script;
    /* 0x18 */ void *heapB;
    /* 0x1C */ void *resource;
    /* 0x20 */ ScriptProcess *process;
    /* 0x24 */ void *allocation;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 region;
    /* 0x30 */ s32 slot;
};

extern "C" {
s32 loadSlotIsLoaded(u32 slot);
void campTalkOpenPairStatus(CallbackWorkflow *work);
void FUN_004cbd70(CallbackWorkflow *work);
u16 *saveGetSelectedRecordSlot(u32 region);
void statusPanelClose();
void statusDownRestartTransition();
void countersAddSaturating(u32 index, s32 value);
s32 gameGlobalsIsActiveStateFour();
s32 FUN_002effbc();
s32 btlTalkBustUpGetValue();
void btlTalkBustUpSetDemonTexture(u16 entry, u32 option);
void btlTalkBustUpSetUnk2F4(u32 value);
s32 btlTalkBustupMatchesEntry(u16 entry);
s32 bgmGetStateById(u32 id);
void gameGlobalsSetSceneState(u32 value);
void FUN_002c39dc(u32 first, u32 second, u32 third);
void FUN_00284ee4(u32 value);
void FUN_00215bbc();
void asdMemFree(void *allocation);
void btlTalkBustUpDestroy();
void soundChannelStopAll(u32 channel);
s32 mapMainIsBusy();
void mapSelectRoomMusicIfActive();
s32 lmapMainIsRunning();
void lmapMainCallIfActive();
s32 mikadoPollShutdown();
void mikadoRequestSoundChannel();
void bgmFadeOut(u32 duration);
}

/* Moves the workflow to `state`, restarting its step counter. */
static void workflowEnterState(CallbackWorkflow *work, u8 state)
{
    work->step = 0;
    work->state = state;
}

// Drive the callback's resource, dialogue, and return-to-map workflow.
extern "C" s32 FUN_004cc34c(CallbackWorkflow *work)
{
    switch (work->state) {
    case 0:
    case 2:
    case 4:
        break;
    case 1:
        if (work->heapA == NULL || work->heapB == NULL || work->resource == NULL ||
            !loadSlotIsLoaded(20) || !loadSlotIsLoaded(37) || !loadSlotIsLoaded(62))
            break;
        if (work->script == NULL) {
            work->script = scrScriptProcessCreate(work->heapA, work->heapB);
            scriptProcessSetMode(work->script, 0);
        }
        workflowEnterState(work, 2);
        break;
    case 3:
        campTalkOpenPairStatus(work);
        break;
    case 5:
        FUN_004cbd70(work);
        break;
    case 6: {
        saveGetSelectedRecordSlot(work->region);
        SlotRecordA *record = gameGetSlotRecord(work->slot);
        switch (work->step) {
        case 0:
            statusPanelClose();
            statusDownRestartTransition();
            countersAddSaturating(6, 1);
            ++work->step;
            break;
        case 1:
            if (!gameGlobalsIsActiveStateFour() || !FUN_002effbc())
                break;
            if (!btlTalkBustUpGetValue()) {
                btlTalkBustUpSetDemonTexture(record->id, 1);
                btlTalkBustUpSetUnk2F4(1);
            }
            scrScriptProcessStartEntry(work->process, 13);
            ++work->step;
            break;
        case 2:
            if (btlTalkBustupMatchesEntry(record->id) && bgmGetStateById(0x100002d) == 1)
                ++work->step;
            break;
        case 3:
            if (scrRunOpcodesStub(work->process) == 2) {
                statusDownRestartTransition();
                workflowEnterState(work, 7);
            }
            break;
        }
        break;
    }
    case 7: {
        if (FUN_002effbc()) {
            u16 *region = saveGetSelectedRecordSlot(work->region);
            region[0] = 0;
            region[1] = 0;
            region[2] = 0;
            region[3] = 0;
            work->region = ~0u;
            gameGlobalsSetSceneState(0);
            FUN_002c39dc(17, 0, ~0u);
            FUN_00284ee4(1);
            FUN_00215bbc();
            if (work->process != NULL) {
                scrScriptProcessDestroy(work->process);
                work->process = NULL;
            }
            if (work->allocation != NULL) {
                asdMemFree(work->allocation);
                work->allocation = NULL;
            }
            btlTalkBustUpDestroy();
            soundChannelStopAll(0);
            if (mapMainIsBusy())
                mapSelectRoomMusicIfActive();
            else if (lmapMainIsRunning())
                lmapMainCallIfActive();
            else if (mikadoPollShutdown())
                mikadoRequestSoundChannel();
            else
                bgmFadeOut(45);
            workflowEnterState(work, 2);
        }
        break;
    }
    }
    ++work->timer;
    return 0;
}
