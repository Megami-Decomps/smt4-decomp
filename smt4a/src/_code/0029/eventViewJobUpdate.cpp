/* The wraps are EVENT_WRAP_VALUE (event/EventScriptJob.h), as in IV's twin: retail forms the stepped value again
 * for the in-range result, as the macro does. */
#include <stdio.h>
#include "event/EventScriptJob.h"
#include "addon/aocMain.h"
#include "addon/AocSystemA.h"
#include "addon/AocDrawText.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntryLookup.h"
#include "event/2dEvent/EventEffect.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "sys/RuntimeObjects.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0013.h"
#include "code/Code002e.h"
#include "quest_center/qcMain.h"

extern "C" {
extern EventScriptJobWork *g_aocJob;

void rt_aeabi_memclr(void *memory, u32 size);

void jobSetIntensity(u32 job, s32 fullIntensity);
void messageSlotSet(s32 value);
u32 messageMainGetValue(void);
s32 messageAnyWindowActive(void);
void msgWindowReset(void);
void sysPlaySe(u32 id);
void titleRestartSlotState3(u32 index, u32 value);
void campCommonBgAcquire(void);
void campCommonBgRelease(void);
void campButtonHelpAcquire(void);
void campButtonHelpRelease(void);
void bustupCutAnimStopJob(void);
void eventTexReleaseJobs(void);
void eventCommandStop(void);
void eventOpeningResetValidJob(void);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
u32 eventScriptFindCompletionFlag(u32 eventId, const ScriptVmLabel *entry);
u32 padButtonIsPressed(u32 button);
s32 flagBrowserStep(void);
u32 asdLoadFileExists(const char *path);
s32 asdLoadFileGetUseRawPaths(void);
void asdLoadFileSetUseRawPaths(s32 enabled);
void soundChannelStopAll(u32 channels);
}

/* aocJobStop(): stops the job and clears the script-holder request bits. */
static __inline void eventJobStop(void)
{
    asdDebugHookVoid();
    jobStop(g_aocJob->job, 0);
    aocMainClearResult(g_aocMain);
}

/* FUN_003ca208(): forgets the jobs the script dims. */
static __inline void eventJobClearHighlights(void)
{
    if (g_aocJob != NULL) {
        g_aocJob->highlightsActive = 0;
        rt_aeabi_memclr(g_aocJob->highlights, sizeof(g_aocJob->highlights));
    }
}

/* The event viewer's update (the debug counterpart of eventScriptJobUpdate): a menu picks the event number and the
 * script entry, then the event's script is loaded and run until it ends or is cancelled, and the menu returns. */
extern "C" s32 eventViewJobUpdate(void)
{
    char commandsPath[128];
    char messagesPath[128];
    EventScriptJobWork *work = g_aocJob;

    if (aocMainIsBusy(g_aocMain)) {
        return 0;
    }

    switch (work->state) {
    case EVENT_VIEW_INIT:
        asdDebugHookVoid();
        work->frames = 0;
        work->unk22 = 1;
        work->state++;
        break;
    case EVENT_VIEW_MENU:
        if (padButtonRepeat(5)) {
            work->cursor = EVENT_WRAP_VALUE(work->cursor - 1, EVENT_VIEW_ROW_LAST);
        }
        if (padButtonRepeat(6)) {
            work->cursor = EVENT_WRAP_VALUE(work->cursor + 1, EVENT_VIEW_ROW_LAST);
        }
        switch (work->cursor) {
        case EVENT_VIEW_ROW_EVENT:
            if (padButtonRepeat(4)) {
                work->eventId = EVENT_WRAP_VALUE((s32)work->eventId - 1, EVENT_VIEW_NUMBER_MAX);
            }
            if (padButtonRepeat(3)) {
                work->eventId = EVENT_WRAP_VALUE((s32)work->eventId + 1, EVENT_VIEW_NUMBER_MAX);
            }
            if (padButtonRepeat(8)) {
                work->eventId = EVENT_WRAP_VALUE((s32)work->eventId - 10, EVENT_VIEW_NUMBER_MAX);
            }
            if (padButtonRepeat(7)) {
                work->eventId = EVENT_WRAP_VALUE((s32)work->eventId + 10, EVENT_VIEW_NUMBER_MAX);
            }
            if (padButtonIsPressed(0)) {
                work->state = EVENT_VIEW_LOAD;
            }
            break;
        case EVENT_VIEW_ROW_ENTRY:
            if (padButtonRepeat(4)) {
                work->entry = EVENT_WRAP_VALUE(work->entry - 1, EVENT_VIEW_NUMBER_MAX);
            }
            if (padButtonRepeat(3)) {
                work->entry = EVENT_WRAP_VALUE(work->entry + 1, EVENT_VIEW_NUMBER_MAX);
            }
            if (padButtonRepeat(8)) {
                work->entry = EVENT_WRAP_VALUE(work->entry - 10, EVENT_VIEW_NUMBER_MAX);
            }
            if (padButtonRepeat(7)) {
                work->entry = EVENT_WRAP_VALUE(work->entry + 10, EVENT_VIEW_NUMBER_MAX);
            }
            if (padButtonIsPressed(0)) {
                work->state = EVENT_VIEW_LOAD;
            }
            break;
        case EVENT_VIEW_ROW_FLAG_EDITOR:
            if (padButtonIsPressed(0)) {
                work->state = EVENT_VIEW_FLAG_EDITOR;
            }
            break;
        case EVENT_VIEW_ROW_RAW_PATHS:
            if (jyoucyuGetTableEntry(2) == 0 && (padButtonRepeat(4) || padButtonRepeat(3))) {
                work->useRawPaths = work->useRawPaths != 1;
            }
            break;
        case EVENT_VIEW_ROW_RESET_SLOTS:
            if (padButtonRepeat(4) || padButtonRepeat(3)) {
                work->resetSlots = work->resetSlots != 1;
            }
            break;
        case EVENT_VIEW_ROW_COMPLETION_FLAG:
            if (padButtonRepeat(4) || padButtonRepeat(3)) {
                work->setCompletionFlag = work->setCompletionFlag != 1;
            }
            break;
        }
        if (padButtonIsPressed(2)) {
            work->state = EVENT_VIEW_EXIT;
        }
        break;
    case EVENT_VIEW_LOAD:
        if (work->useRawPaths && !asdLoadFileGetUseRawPaths()) {
            asdLoadFileSetUseRawPaths(1);
            work->rawPathsSet = 1;
        }
        sprintf(commandsPath, "event/e%03d/e%03d.bf", work->eventId, work->eventId);
        sprintf(messagesPath, "event/e%03d/e%03d.mbm", work->eventId, work->eventId);
        if (aocPackageGrantsItem(g_aocSystem, work->eventId, 0)) {
            work->commands = aocDrawText7(g_aocSystem, work->eventId, 0);
            work->messages = aocDrawText8(g_aocSystem, work->eventId, 0);
            if (work->commands == NULL || work->messages == NULL) {
                work->state = EVENT_VIEW_MENU;
                work->frames = 0;
                break;
            }
        } else {
            if (!asdLoadFileExists(commandsPath)) {
                work->state = EVENT_VIEW_MENU;
                work->frames = 0;
                break;
            }
            work->commands = asdLoadFileSyncDefault(commandsPath);
            work->messages = asdLoadFileSyncDefault(messagesPath);
        }
        campCommonBgAcquire();
        campButtonHelpAcquire();
        commonBgStopChildAndBeginTransition();
        sysPlaySe(0x92);
        if (work->rawPathsSet) {
            asdLoadFileSetUseRawPaths(0);
            work->rawPathsSet = 0;
        }
        if (work->resetSlots) {
            titleRestartSlotState3(0, 0xff);
            titleRestartSlotState3(1, 0xff);
        }
        work->script = scrScriptProcessCreate(work->commands, work->messages);
        scriptProcessSetMode(work->script, 2);
        if (scrScriptProcessStartEntry(work->script, work->entry)) {
            work->state++;
            work->frames = 0;
            work->completionFlag = 0;
            work->completionFlag = eventScriptFindCompletionFlag(work->eventId,
                                                                 scrScriptProcessGetEntry(work->script, work->entry));
        } else {
            work->state = EVENT_VIEW_MENU;
            work->frames = 0;
        }
        break;
    case EVENT_VIEW_RUN: {
        bool finished = false;
        work->frames++;
        if (scrRunOpcodesStub(work->script) == 2) {
            finished = true;
        } else if (!messageAnyWindowActive() && padButtonIsPressed(2)) {
            /* cancelled */
            if (work->setCompletionFlag) {
                if (work->completionFlag != 0) {
                    gameFlagIsSet(work->completionFlag);  /* the result is not used */
                }
            } else {
                finished = true;
            }
        }
        if (work->highlightsActive) {
            /* Dim every registered job, then restore the one whose speaker is talking. */
            for (s32 i = 0; i < 8; i++) {
                if (work->highlights[i].job != 0)
                    jobSetIntensity(work->highlights[i].job, 0);
            }
            for (s32 i = 0; i < 8; i++) {
                if (work->highlights[i].job != 0 && messageMainGetValue() == work->highlights[i].speaker)
                    jobSetIntensity(work->highlights[i].job, 1);
            }
        }
        if (!finished) {
            break;
        }
        if (work->setCompletionFlag && work->completionFlag != 0) {
            gameFlagSetValue(work->completionFlag, 1, 1);
        }
        eventJobClearHighlights();
        campCommonBgRelease();
        campButtonHelpRelease();
        messageSetScriptDisplayMode();
        msgWindowReset();
        bustupCutAnimStopJob();
        eventTexReleaseJobs();
        eventCommandStop();
        eventOpeningResetValidJob();
        if (work->script != NULL) {
            scrScriptProcessDestroy(work->script);
            work->script = NULL;
        }
        if (work->commands != NULL) {
            asdMemFree(work->commands);
            work->commands = NULL;
        }
        if (work->messages != NULL) {
            asdMemFree(work->messages);
            work->messages = NULL;
        }
        work->state = EVENT_VIEW_MENU;
        messageSlotSet(0);
        screenFadeSlotReset(0);
        screenFadeSlotReset(1);
        soundChannelStopAll(0xf);
        gameFlagSetValue(0x522, 0, 1);
        break;
    }
    case EVENT_VIEW_FLAG_EDITOR:
        if (flagBrowserStep()) {
            work->state = EVENT_VIEW_MENU;
        }
        break;
    case EVENT_VIEW_EXIT:
        eventJobStop();
        break;
    }
    return 0;
}
