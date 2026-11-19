/* NON_MATCHING: 6 rows, the port of Apocalypse's FUN_00225ddc: the pool holds g_aocMain before g_aocJob where
 * retail has them the other way round (the two entry loads, their registers and all the code agree). Scoping
 * the entry check's `main` in a bare block ({ AocMain *main = g_aocMain; if ...; if ...; }) with state 95
 * declaring its own gives IDENTICAL, but the block has no meaning beyond its scope, so it is not written. */
#include <stdio.h>
#include "event/EventScriptJob.h"
#include "addon/aocMain.h"
#include "addon/AocSystem.h"
#include "addon/AocFileBufferApi.h"
#include "addon/QuestScriptLoader.h"
#include "game/GameState.h"
#include "gamedata/GameFlags.h"
#include "map/MapJumpTransition.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntryLookup.h"
#include "quest_center/qcMain.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "shard/W6_W6Match2_ScrollList.h"
#include "sys/RuntimeObjects.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "code/Code002c.h"
#include "code/Code0028_Smt4.h"

extern "C" {
extern EventScriptJobWork *g_aocJob;
extern EventScriptRequest DAT_004937c4;

s32 aocPackageGrantsItem(AocSystem *system, u32 itemId, s32 checkAvailable); // declcheck: local (the shared declaration takes Apocalypse's AocSystemA)
void messageSlotSet(s32 value);
void msgWindowReset(void);
void titleSetSlotValueState2(u32 index, u32 value);
u8 campButtonHelpIsActive(void);
void FUN_00289c98(s32 clearTouches);
void commonBgAcquire(void);
void uiFadeRelease(void);
void buttonHelpCreate(void);
void buttonHelpRelease(void);
void messageSetConfirmDisplayMode(void);
void bustupCutAnimStopJob(void);
void eventTexReleaseJobs(void);
void eventCommandStop(void);
void event3dOpeningRequestExit(void);
s32 FUN_002897e0(void);
void FUN_002897d0(u8 value);
s32 FUN_002897c0(void);
void FUN_002897b0(u8 value);
int FUN_002c1d5c(void);
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
u32 tableGroupFindEntryIndex(void *commands, const char *name);
void scrScriptProcessStartEntry(ScriptProcess *process, u32 entry);
/* The game flag an event entry raises when it ends, 0 when it has none. */
u32 eventScriptFindCompletionFlag(u32 eventId, const ScriptVmLabel *entry);
u8 gameJumpRequestIsPending(void);
MapJumpRequest *gameJumpRequestGet(void);
void gameStateSetJumpRequest(u32 map, u32 entrance, u32 object, f32 a, f32 b, f32 c, f32 d, f32 e);
void gameJumpRequestClear(void);
u32 mapConsumePendingJumpRequest(AocScriptHolder *holder, s32 changeSequence);
}

/* aocJobStop(): stops the job and clears the script-holder request bits. */
static __inline void eventJobStop(void)
{
    asdDebugHookVoid();
    jobStop(g_aocJob->job, 0);
    g_aocMain->flags &= ~0x70;
}

/* The event script job's update: loads the event's script, runs it to its end, then returns to the
 * map through the quest-script holder and the jump or resume point the script left. */
extern "C" s32 eventScriptJobUpdate(u32 job)
{
    char commandsPath[128];
    char messagesPath[128];
    EventScriptJobWork *work = g_aocJob;
    AocMain *main = g_aocMain;
    if (main->flags & 4)
        return 0;
    if (main->flags & 8)
        return 0;

    switch (work->state) {
    case 0: {
        asdDebugHookVoid();
        work->unk22 = 0;
        work->eventId = DAT_004937c4.eventId;
        work->entry = DAT_004937c4.entry;
        sprintf(commandsPath, "event/e%03d/e%03d.bf", work->eventId, work->eventId);
        sprintf(messagesPath, "event/e%03d/e%03d.mbm", work->eventId, work->eventId);
        if (aocPackageGrantsItem(g_aocSystem, work->eventId, 0)) {
            work->commands = FUN_00289de4(g_aocSystem, work->eventId, NULL);
            work->messages = aocBufferQueueDisplay(g_aocSystem, work->eventId, NULL);
            if (work->commands == NULL || work->messages == NULL) {
                // The package has no script: fade out and leave through the quest-script holder.
                work->state = 95;
                if (FUN_002c2a04(0) == 3)
                    titleSetSlotValueState2(0, 5);
                if (FUN_002c2a04(1) == 3)
                    titleSetSlotValueState2(1, 5);
                if (campButtonHelpIsActive())
                    FUN_00289c98(1);
                break;
            }
        } else {
            work->commands = asdLoadFileSyncDefault(commandsPath);
            work->messages = asdLoadFileSyncDefault(messagesPath);
        }
        commonBgAcquire();
        buttonHelpCreate();
        commonBgStopChildAndBeginTransition();
        buttonHelpSetPreset(0x90);
        work->script = scrScriptProcessCreate(work->commands, work->messages);
        scriptProcessSetMode(work->script, 2);
        if (work->entry == -1)
            work->entry = tableGroupFindEntryIndex(work->commands, DAT_004937c4.entryName);
        scrScriptProcessStartEntry(work->script, work->entry);
        work->completionFlag = 0;
        u32 completionFlag = eventScriptFindCompletionFlag(work->eventId, scrScriptProcessGetEntry(work->script, work->entry));
        work->state++;
        work->completionFlag = completionFlag;
        break;
    }
    case 1:
        if (FUN_002c2a04(0) != 3 || FUN_002c2a04(1) != 3) {
            if (FUN_002897e0())
                FUN_002897d0(0);
        }
        if (FUN_002897c0()) {
            FUN_002897b0(0);
            FUN_002897d0(0);
        }
        if (FUN_002897e0() && !FUN_002c1d5c()) {
            // The script's fade is still running: black both screens out and wait for them.
            titleSetSlotValueState2(0, 5);
            titleSetSlotValueState2(1, 5);
            FUN_002897d0(0);
            work->state = 11;
            break;
        }
        if (scrRunOpcodesStub(work->script) == 2) {
            if (work->completionFlag != 0)
                gameFlagSetValue(work->completionFlag, 1, 1);
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
            work->state = 99;
            messageSlotSet(0);
        }
        break;
    case 10:
        break;
    case 11:
        if (screenFadesAllReady())
            work->state = 1;
        break;
    case 95:
        if (screenFadesAllReady()) {
            main = g_aocMain;
            u32 flags = main->flags;
            if (flags & 4)
                return 0;
            if (flags & 8)
                return 0;
            main->flags = flags & ~0x70;
            FUN_00289608(&main->scriptHolder, 0);
            work->state = 96;
        }
        return 0;
    case 96:
        if (questSysUpdateLoad(&g_aocMain->scriptHolder)) {
            FUN_002895a8(&g_aocMain->scriptHolder);
            if (gameJumpRequestIsPending())
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
        const MapJumpRequest *request = gameJumpRequestGet();
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
        g_gameState.map.savedLocationSet = 0;
        g_gameState.entryValue = 0;
        gameJumpRequestClear();
        eventJobStop();
        work->state = 100;
        break;
    }
    case 98:
        // No jump: return to the resume point, if one was saved.
        if (g_gameState.map.savedLocationSet) {
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
            mapConsumePendingJumpRequest(&g_aocMain->scriptHolder, 1);
        }
        break;
    }
    return 0;
}
