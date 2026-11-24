/* Retail's `mov r0, #0` at 0x22600c is the inlined eventScriptFindCompletionFlag stub (config/inlined.txt). */
#include <stdio.h>
#include "event/EventScriptJob.h"
#include "event/EventCompletion.h"
#include "addon/aocMain.h"
#include "addon/AocSystemA.h"
#include "addon/AocDrawText.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "map/MapJumpTransition.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntryLookup.h"
#include "event/2dEvent/EventEffect.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "sys/RuntimeObjects.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "code/Code0013.h"
#include "code/Code002e.h"

extern "C" {
extern EventScriptJobWork *g_aocJob;

void rt_aeabi_memclr(void *memory, u32 size);
extern EventScriptRequest DAT_005e1f70;

void jobSetIntensity(u32 job, s32 fullIntensity);
void messageSlotSet(s32 value);
u32 messageMainGetValue(void);
void msgWindowReset(void);
void sysPlaySe(u32 id);
void titleSetSlotValueState2(u32 index, u32 value);
u8 campButtonHelpIsActive(void);
void buttonHelpBeginExit(s32 clearKinds);
void campCommonBgAcquire(void);
void campCommonBgRelease(void);
void campButtonHelpAcquire(void);
void campButtonHelpRelease(void);
void bustupCutAnimStopJob(void);
void eventTexReleaseJobs(void);
void eventCommandStop(void);
void eventOpeningResetValidJob(void);
s32 getByteTableAValue(void);
void byteTableASetValue(s8 value);
s32 byteTableAGetValue3(void);
void byteTableASetValue3(s8 value);
s32 eventIsSkipping(void);
u32 tableGroupFindEntryIndex(void *commands, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
/* The game flag an event entry raises when it ends. Apocalypse's is a stub returning 0 that armlink
 * inlined at its only call and removed. */
void aocBootResetAndReleaseBuffers(AocScriptHolder *holder, u8 showButtonHelp);
s32 scriptHolderUpdateForward(AocScriptHolder *holder);
void scriptHolderFree2(AocScriptHolder *holder);
u8 gameBlockByte27E98Is1To3(void);
void gameStateSetJumpRequest(u32 map, u32 entrance, u32 object, f32 a, f32 b, f32 c, f32 d, f32 e);
void gameSaveBlockRebuild27E98(void);
u32 mapRestoreSavedDestination(AocScriptHolder *holder, s32 changeSequence);
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

/* The event script job's update: loads the event's script, runs it to its end, then returns to the
 * map through the quest-script holder and the jump or resume point the script left. */
extern "C" s32 eventScriptJobUpdate(u32 job)
{
    char commandsPath[128];
    char messagesPath[128];
    EventScriptJobWork *work = g_aocJob;
    AocMain *main = g_aocMain;
    if (aocMainIsBusy(main))
        return 0;

    switch (work->state) {
    case 0: {
        asdDebugHookVoid();
        work->unk22 = 0;
        work->eventId = DAT_005e1f70.eventId;
        work->entry = DAT_005e1f70.entry;
        sprintf(commandsPath, "event/e%03d/e%03d.bf", work->eventId, work->eventId);
        sprintf(messagesPath, "event/e%03d/e%03d.mbm", work->eventId, work->eventId);
        if (aocPackageGrantsItem(g_aocSystem, work->eventId, 0)) {
            work->commands = aocDrawText7(g_aocSystem, work->eventId, 0);
            work->messages = aocDrawText8(g_aocSystem, work->eventId, 0);
            if (work->commands == NULL || work->messages == NULL) {
                // The package has no script: fade out and leave through the quest-script holder.
                work->state = 95;
                if (pairedAvailabilityGetState(0) == 3)
                    titleSetSlotValueState2(0, 5);
                if (pairedAvailabilityGetState(1) == 3)
                    titleSetSlotValueState2(1, 5);
                if (campButtonHelpIsActive())
                    buttonHelpBeginExit(1);
                break;
            }
        } else {
            work->commands = asdLoadFileSyncDefault(commandsPath);
            work->messages = asdLoadFileSyncDefault(messagesPath);
        }
        campCommonBgAcquire();
        campButtonHelpAcquire();
        commonBgStopChildAndBeginTransition();
        sysPlaySe(0x92);
        work->script = scrScriptProcessCreate(work->commands, work->messages);
        scriptProcessSetMode(work->script, 2);
        if (work->entry == -1)
            work->entry = tableGroupFindEntryIndex(work->commands, DAT_005e1f70.entryName);
        scrScriptProcessStartEntry(work->script, work->entry);
        work->completionFlag = 0;
        u32 completionFlag = eventScriptFindCompletionFlag(work->eventId,
                                                           scrScriptProcessGetEntry(work->script, work->entry));
        work->state++;
        work->completionFlag = completionFlag;
        break;
    }
    case 1:
        if (pairedAvailabilityGetState(0) != 3 || pairedAvailabilityGetState(1) != 3) {
            if (getByteTableAValue())
                byteTableASetValue(0);
        }
        if (byteTableAGetValue3()) {
            byteTableASetValue3(0);
            byteTableASetValue(0);
        }
        if (getByteTableAValue() && !eventIsSkipping()) {
            // The script's fade is still running: black both screens out and wait for them.
            titleSetSlotValueState2(0, 5);
            titleSetSlotValueState2(1, 5);
            byteTableASetValue(0);
            work->state = 11;
            break;
        }
        if (scrRunOpcodesStub(work->script) == 2) {
            if (work->completionFlag != 0)
                gameFlagSetValue(work->completionFlag, 1, 1);
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
            work->state = 99;
            messageSlotSet(0);
        }
        if (work->highlightsActive) {
            // Dim every registered job, then restore the one whose speaker is talking.
            for (s32 i = 0; i < 8; i++) {
                if (work->highlights[i].job != 0)
                    jobSetIntensity(work->highlights[i].job, 0);
            }
            for (s32 i = 0; i < 8; i++) {
                if (work->highlights[i].job != 0 && messageMainGetValue() == work->highlights[i].speaker)
                    jobSetIntensity(work->highlights[i].job, 1);
            }
        }
        break;
    case 10:
        break;
    case 11:
        if (pairedAvailabilityBothReady())
            work->state = 1;
        break;
    case 95:
        if (pairedAvailabilityBothReady()) {
            if (aocMainIsBusy(g_aocMain))
                return 0;
            aocMainClearResult(g_aocMain);
            aocBootResetAndReleaseBuffers(&g_aocMain->scriptHolder, 0);
            work->state = 96;
        }
        return 0;
    case 96:
        /* retail still has the pointer read at entry here (no reload); after the call it reads the global again */
        if (scriptHolderUpdateForward(&main->scriptHolder)) {
            scriptHolderFree2(&g_aocMain->scriptHolder);
            if (gameBlockByte27E98Is1To3())
                work->state = 97;
            else
                work->state = 98;
            if (work->commands != NULL) {
                asdMemFree(work->commands);
                work->commands = NULL;
            }
            if (work->messages != NULL) {
                asdMemFree(work->messages);
                work->messages = NULL;
            }
        }
        break;
    case 97: {
        // The script asked for a map jump.
        const MapJumpRequest *request = reinterpret_cast<const MapJumpRequest *>(gameBlockGetArea27E98());
        switch (request->kind) {
        case 1:
            gameStateSetJumpRequest(request->map, request->entrance, request->object,
                         request->transform[0], request->transform[1], request->transform[2],
                         request->transform[3], request->transform[4]);
            asdSequenceRequest(6, NULL, 0);
            break;
        case 2:
            gameStateSetJumpRequest(request->map + 100, request->entrance, (u32)-1,
                         request->transform[0], request->transform[1], request->transform[2],
                         request->transform[3], request->transform[4]);
            g_gameState.currentObjectId = (u32)-1;
            asdSequenceRequest(8, NULL, 0);
            break;
        case 3: {
            u32 map = request->map;
            asdSequenceRequest(14, &map, sizeof(map));
            break;
        }
        }
        g_gameState.savedLocationSet = 0;
        g_gameState.entryValue = 0;
        gameSaveBlockRebuild27E98();
        eventJobStop();
        work->state = 100;
        break;
    }
    case 98:
        // No jump: return to the resume point, if one was saved.
        if (g_gameState.savedLocationSet) {
            if (g_gameState.resumeMode == 1)
                asdSequenceRequest(6, NULL, 0);
            if (g_gameState.resumeMode == 2)
                asdSequenceRequest(8, NULL, 0);
            if (g_gameState.resumeMode == 3) {
                struct {
                    s16 map;
                    s16 area;
                } location;
                location.map = g_gameState.savedMapId - 200;
                location.area = g_gameState.savedAreaId;
                asdSequenceRequest(14, &location, sizeof(location));
            }
        }
        eventJobStop();
        work->state = 100;
        break;
    case 99:
        eventJobStop();
        if (g_aocMain->jumpRequested) {
            g_aocMain->jumpRequested = 0;
            mapRestoreSavedDestination(&g_aocMain->scriptHolder, 1);
        }
        if (work->resumeRequested) {
            work->resumeRequested = 0;
            asdSequenceRequest(1, NULL, 0);
        }
        break;
    }
    return 0;
}
