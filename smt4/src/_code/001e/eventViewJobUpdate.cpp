/* NON_MATCHING: 14 lines. As in eventScriptJobUpdate, retail's pool holds g_aocJob before g_aocMain and loads both
 * addresses before `sub sp` (this build: g_aocMain first, one load after); everything else agrees. The two empty
 * calls (states 0 and 99) are linker-removed in retail; asdDebugHookVoid is assumed, as its sibling
 * eventScriptJobUpdate calls it at the same point. */
#include "runtime/Stdio.h"
#include "event/EventScriptJob.h"
#include "addon/aocMain.h"
#include "addon/AocSystem.h"
#include "addon/AocFileBufferApi.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntryLookup.h"
#include "quest_center/qcMain.h"
#include "sys/RuntimeObjects.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0028_Smt4.h"

extern "C" {

extern EventScriptJobWork *g_aocJob;

u32 padIsButtonRepeat(u32 button);
u32 padIsButtonPressed(u32 button);
s32 aocPackageGrantsItem(AocSystem *system, u32 itemId, s32 checkAvailable); // declcheck: local (the shared declaration takes Apocalypse's AocSystemA)
s32 FUN_002cb8d8(const char *name);
void asdLoadFileSetUseRawPaths(u8 useRawPaths);
s32 asdLoadFileGetUseRawPaths(void);
u32 jyoucyuGetTableEntry(s32 index);
void commonBgAcquire(void);
void buttonHelpCreate(void);
void buttonHelpRelease(void);
void uiFadeRelease(void);
void messageSetConfirmDisplayMode(void);
void msgWindowReset(void);
void bustupCutAnimStopJob(void);
void eventTexReleaseJobs(void);
void eventCommandStop(void);
void event3dOpeningRequestExit(void);
void titleRestartSlotState3(u32 index, u32 extra);
void messageSlotSet(s32 value);
void soundChannelStopAll(u32 value);
bool messageAnyWindowActive(void);
u32 debugFlagEditorUpdate(void);
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
/* The game flag an event entry raises when it ends, 0 when it has none. */
u32 eventScriptFindCompletionFlag(u32 eventId, const ScriptVmLabel *entry);

} /* extern "C" */

/* aocJobStop(): stops the job and clears the script-holder request bits. */
static __inline void eventJobStop(void)
{
    asdDebugHookVoid();
    jobStop(g_aocJob->job, 0);
    g_aocMain->flags &= ~0x70;
}

extern "C" {

/* The event viewer's update: a menu picks an event and one of its script entries, then the viewer loads
 * the event's files, runs the entry to its end and comes back to the menu. */
s32 eventViewJobUpdate(void)
{
    char commandsPath[128];
    char messagesPath[128];
    EventScriptJobWork *work = g_aocJob;
    AocMain *main = g_aocMain;

    if (main->flags & 4) {
        return 0;
    }
    if (main->flags & 8) {
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
        if (padIsButtonRepeat(5)) {
            work->cursor = EVENT_WRAP_VALUE(work->cursor - 1, EVENT_VIEW_ROW_LAST);
        }
        if (padIsButtonRepeat(6)) {
            work->cursor = EVENT_WRAP_VALUE(work->cursor + 1, EVENT_VIEW_ROW_LAST);
        }
        switch (work->cursor) {
        case EVENT_VIEW_ROW_EVENT:
            if (padIsButtonRepeat(4)) {
                work->eventId = EVENT_WRAP_VALUE((s32)work->eventId - 1, EVENT_VIEW_NUMBER_MAX);
            }
            if (padIsButtonRepeat(3)) {
                work->eventId = EVENT_WRAP_VALUE((s32)work->eventId + 1, EVENT_VIEW_NUMBER_MAX);
            }
            if (padIsButtonRepeat(8)) {
                work->eventId = EVENT_WRAP_VALUE((s32)work->eventId - 10, EVENT_VIEW_NUMBER_MAX);
            }
            if (padIsButtonRepeat(7)) {
                work->eventId = EVENT_WRAP_VALUE((s32)work->eventId + 10, EVENT_VIEW_NUMBER_MAX);
            }
            if (padIsButtonPressed(0)) {
                work->state = EVENT_VIEW_LOAD;
            }
            break;
        case EVENT_VIEW_ROW_ENTRY:
            if (padIsButtonRepeat(4)) {
                work->entry = EVENT_WRAP_VALUE(work->entry - 1, EVENT_VIEW_NUMBER_MAX);
            }
            if (padIsButtonRepeat(3)) {
                work->entry = EVENT_WRAP_VALUE(work->entry + 1, EVENT_VIEW_NUMBER_MAX);
            }
            if (padIsButtonRepeat(8)) {
                work->entry = EVENT_WRAP_VALUE(work->entry - 10, EVENT_VIEW_NUMBER_MAX);
            }
            if (padIsButtonRepeat(7)) {
                work->entry = EVENT_WRAP_VALUE(work->entry + 10, EVENT_VIEW_NUMBER_MAX);
            }
            if (padIsButtonPressed(0)) {
                work->state = EVENT_VIEW_LOAD;
            }
            break;
        case EVENT_VIEW_ROW_FLAG_EDITOR:
            if (padIsButtonPressed(0)) {
                work->state = EVENT_VIEW_FLAG_EDITOR;
            }
            break;
        case EVENT_VIEW_ROW_RAW_PATHS:
            if (jyoucyuGetTableEntry(2) == 0) {
                if (padIsButtonRepeat(4) || padIsButtonRepeat(3)) {
                    work->useRawPaths = work->useRawPaths == 1 ? 0 : 1;
                }
            }
            break;
        case EVENT_VIEW_ROW_RESET_SLOTS:
            if (padIsButtonRepeat(4) || padIsButtonRepeat(3)) {
                work->resetSlots = work->resetSlots == 1 ? 0 : 1;
            }
            break;
        case EVENT_VIEW_ROW_COMPLETION_FLAG:
            if (padIsButtonRepeat(4) || padIsButtonRepeat(3)) {
                work->setCompletionFlag = work->setCompletionFlag == 1 ? 0 : 1;
            }
            break;
        }
        if (padIsButtonPressed(2)) {
            work->state = EVENT_VIEW_EXIT;
        }
        break;
    case EVENT_VIEW_LOAD:
        if (work->useRawPaths && !asdLoadFileGetUseRawPaths()) {
            asdLoadFileSetUseRawPaths(1);
            work->rawPathsSet = 1;
        }
        __2sprintf(commandsPath, "event/e%03d/e%03d.bf", work->eventId, work->eventId);
        __2sprintf(messagesPath, "event/e%03d/e%03d.mbm", work->eventId, work->eventId);
        if (aocPackageGrantsItem(g_aocSystem, work->eventId, 0)) {
            work->commands = aocDrawText7(g_aocSystem, work->eventId, NULL);
            work->messages = aocBufferQueueDisplay(g_aocSystem, work->eventId, NULL);
            if (work->commands == NULL || work->messages == NULL) {
                work->state = EVENT_VIEW_MENU;
                work->frames = 0;
                break;
            }
        } else {
            if (!FUN_002cb8d8(commandsPath)) {
                work->state = EVENT_VIEW_MENU;
                work->frames = 0;
                break;
            }
            work->commands = asdLoadFileSyncDefault(commandsPath);
            work->messages = asdLoadFileSyncDefault(messagesPath);
        }
        commonBgAcquire();
        buttonHelpCreate();
        commonBgStopChildAndBeginTransition();
        buttonHelpSetPreset(0x90);
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
            work->completionFlag =
                eventScriptFindCompletionFlag(work->eventId, scrScriptProcessGetEntry(work->script, work->entry));
        } else {
            work->state = EVENT_VIEW_MENU;
            work->frames = 0;
        }
        break;
    case EVENT_VIEW_RUN: {
        bool close = false;

        work->frames++;
        if (scrRunOpcodesStub(work->script) == 2) {
            close = true;
        } else if (!messageAnyWindowActive() && padIsButtonPressed(2)) {
            /* Cancelled between messages; with the completion-flag option on, the event goes on. */
            if (work->setCompletionFlag) {
                if (work->completionFlag != 0) {
                    gameFlagIsSet(work->completionFlag);
                }
            } else {
                close = true;
            }
        }
        if (close) {
            if (work->setCompletionFlag && work->completionFlag != 0) {
                gameFlagSetValue(work->completionFlag, 1, 1);
            }
            /* Release what the event showed, its script and its files, and go back to the menu. */
            uiFadeRelease();
            buttonHelpRelease();
            messageSetConfirmDisplayMode();
            msgWindowReset();
            bustupCutAnimStopJob();
            eventTexReleaseJobs();
            eventCommandStop();
            event3dOpeningRequestExit();
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
            soundChannelStopAll(15);
            gameFlagSetValue(0x522, 0, 1);
        }
        break;
    }
    case EVENT_VIEW_FLAG_EDITOR:
        if (debugFlagEditorUpdate()) {
            work->state = EVENT_VIEW_MENU;
        }
        break;
    case EVENT_VIEW_EXIT:
        eventJobStop();
        break;
    }
    return 0;
}

} /* extern "C" */
