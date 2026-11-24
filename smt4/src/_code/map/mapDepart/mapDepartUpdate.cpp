/* NON_MATCHING: control flow, frame, calls and constants follow retail (159 raw / 93 shape rows, from 646). What
 * differs: in the merge loops retail keeps the row count in r2 and the amount in r3 (the build: r7 and r2, the same
 * instructions); the first state's inner switch shares the state store between cases 1-5 and gives the default its
 * own (the build shares it between the default and cases 4-5); retail loads g_gameState.mapId before the sound
 * position's `vldm` (the build after); `foundCount = 1` takes r0 after the flag store; and the confirm state passes
 * the message data to scrScriptProcessCreate straight from r0 where the two other script starts reload both. */
#include "map/mapDepart.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "game/GameState.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/MsSearchTable.h"
#include "code/Code0025.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match5_NamedLookup.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/TexTableLoaded.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "battle/Talk/btlTalkBustUpRelease.h"
#include "code/Code002c_VariantA.h"

extern "C" {

/* The module's globals; the other units of the file only use the first word (`MapDepart *g_mapDepart`). */
extern MapDepartModule g_mapDepart;

u32 fileSlotLoad(u32 id);
void buttonHelpSetPresetDefault(void);
u32 eventScriptFindCompletionFlag(u16 id, const NamedRecordName *name);
s32 tableGroupFindEntryIndex(void *table, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
void navigationResetTimer(void);
void messageSlotSet(s32 value);
u32 unlockFlagTest(u32 id);
/* Lists the relics found under a search record's mark bit. */
u32 rewardDrawFromRecord(s32 markBit, u32 *ids, u8 *isNew, s32 *count);
void FUN_00273358(u32 handle);
s32 inputConfirmPressed(void);
s32 inputIsQuestMenuPressed(void);
void mapIfRequestRecordById(s32 id);
void entrySetParams(s32 id, u16 first, u16 second);
void FUN_002f364c(s32 flagIndex, s32 enabled);
u32 messageMainGetChoiceResult(void);
void mapDepartSetTarget(s32 group, s32 map, u32 target);

enum {
    DEPART_STATE_INIT = 0,
    DEPART_STATE_WAIT = 1,
    DEPART_STATE_EVENT = 4,
    DEPART_STATE_RESULT = 5,
    DEPART_STATE_RESULT_END = 6,
    DEPART_STATE_SCRIPT_START = 7,
    DEPART_STATE_SCRIPT_RUN = 8,
    DEPART_STATE_CONFIRM_START = 9,
    DEPART_STATE_CONFIRM_RUN = 10,
    DEPART_STATE_END = 11
};

/* Enters `state` with its frame counter cleared. */
static __inline void mapDepartEnterState(MapDepartJobWork *work, s32 state)
{
    work->state = state;
    work->counter = 0;
}

/* The departure job's update (registered by MapDepart_Init): shows what was found on the map (or runs the exit's
 * script), then leaves. Returns -1 when done. */
s32 mapDepartUpdate(u32 job)
{
    MapDepartJobWork *work = g_mapDepart.work;

    switch (work->state) {
    case DEPART_STATE_INIT:
        asdTMTexTablePrepareNodeImage(10, 4);
        work->texture = asdTMTexTableGetNodeTexture(10, 4);
        work->texture->filterX = 1;
        work->texture->filterY = 1;
        work->texture->unk38 = 0;
        if (work->mode != 0) {
            mapDepartEnterState(work, DEPART_STATE_WAIT);
            break;
        }
        fileSlotLoad(33);
        work->counter = 0;
        switch (g_gameState.tableKind) {
        case 1:
        case 2:
        case 3:
            work->state = DEPART_STATE_CONFIRM_START;
            break;
        case 4:
            work->state = !gameFlagIsSet(99) ? DEPART_STATE_EVENT : DEPART_STATE_RESULT;
            break;
        case 5:
            work->state = DEPART_STATE_SCRIPT_START;
            break;
        default:
            work->state = DEPART_STATE_END;
            break;
        }
        break;

    case DEPART_STATE_WAIT:
        if (++work->counter > 10) {
            mapDepartEnterState(work, DEPART_STATE_RESULT);
        }
        break;

    case DEPART_STATE_EVENT:
        if (work->counter == 0) {
            buttonHelpSetPresetDefault();
            work->scriptData = asdLoadFileSyncDefault("event/e071/e071.bf");
            work->messageData = asdLoadFileSyncDefault("event/e071/e071.mbm");
            work->script = scrScriptProcessCreate(work->scriptData, work->messageData);
            work->script->mode = 2;
            work->completionFlag =
                eventScriptFindCompletionFlag(71, reinterpret_cast<const NamedRecordName *>("e071_01"));
            scrScriptProcessStartEntry(work->script, tableGroupFindEntryIndex(work->scriptData, "e071_01"));
            navigationResetTimer();
        } else if (scrRunOpcodesStub(work->script) == 2) {
            if (work->completionFlag != 0) {
                gameFlagSetValue(work->completionFlag, 1, 1);
            }
            messageSlotSet(0);
            scrScriptProcessDestroy(work->script);
            asdMemFree(work->scriptData);
            asdMemFree(work->messageData);
            work->script = NULL;
            work->scriptData = NULL;
            work->messageData = NULL;
            mapDepartEnterState(work, DEPART_STATE_RESULT);
            break;
        }
        work->counter++;
        break;

    case DEPART_STATE_RESULT:
        if (++work->counter == 1) {
            if (work->mode == 0) {
                rewardDrawFromRecord(msSearchGetRecordAt(g_gameState.recordId)->markBit, g_mapDepartState.depart.foundIds, g_mapDepartState.depart.foundIsNew,
                             &g_mapDepartState.depart.foundCount);
            } else {
                g_mapDepartState.depart.foundIds[0] = work->entry;
                g_mapDepartState.depart.foundIsNew[0] = unlockFlagTest(work->entry) == 0;
                g_mapDepartState.depart.foundCount = 1;
            }

            /* Merge equal ids into one row each, counting them. */
            s16 ids[16] = { 0 };
            u8 isNew[16] = { 0 };
            s32 i;
            for (i = 0; i < g_mapDepartState.depart.foundCount; i++) {
                ids[i] = g_mapDepartState.depart.foundIds[i];
                isNew[i] = g_mapDepartState.depart.foundIsNew[i];
            }
            s32 rows = 0;
            for (i = 0; i < g_mapDepartState.depart.foundCount; i++) {
                if (ids[i] != 0) {
                    s32 amount = 1;
                    for (s32 j = 0; j < g_mapDepartState.depart.foundCount - i - 1; j++) {
                        if (ids[i + 1 + j] != 0 && ids[i + 1 + j] == ids[i]) {
                            ids[i + 1 + j] = 0;
                            amount++;
                            isNew[i + 1 + j] = 0;
                        }
                    }
                    g_mapDepartState.depart.listIds[rows] = ids[i];
                    g_mapDepartState.depart.listIsNew[rows] = isNew[i];
                    g_mapDepartState.depart.listAmounts[rows] = amount;
                    rows++;
                }
            }
            g_mapDepartState.depart.listCount = rows;
            for (i = 0; i < g_mapDepartState.depart.listCount; i++) {
                jyoucyuGetTableEntry(0);
            }
        }
        if (work->counter == 6) {
            work->effectActive = 1;
            SoundActorQueuePosition soundPosition = soundActorPositionFromArray(&g_lmapScene->pose.position.x);
            soundPosition.y += 30.0f;
            if (g_gameState.mapId < 100) {
                soundActorStartOnFreeChannel(0x1000200, soundPosition);
            } else {
                soundActorStartOnFreeChannel(0x1000200, soundActorScalePosition(soundPosition, 1.0f / 3.0f));
            }
        }
        if (work->counter == 7) {
            if (work->mode == 0 && g_mapCamera->contextMode == 0) {
                FUN_00273358(1);
            }
        }
        if (work->counter == 13) {
            work->listActive = 1;
            navigationResetTimer();
        }
        if (work->counter == 18) {
            work->promptActive = 1;
        }
        if (work->listActive) {
            if (++work->listDelay > 20) {
                if (work->listFrame % 13 == 0) {
                    if (g_mapDepartState.depart.listShown < g_mapDepartState.depart.listCount) {
                        g_mapDepartState.depart.listShown++;
                    } else {
                        work->listDone = 1;
                    }
                }
                work->listFrame++;
            }
        }
        if (work->effectActive) {
            if (++work->effectDelay > 6) {
                if (++work->effectFrame > 30) {
                    work->effectFrame = 0;
                }
            }
        }
        if (work->promptActive) {
            if (++work->promptDelay > 5) {
                work->promptFrame++;
            }
            if (work->listDone) {
                work->promptReady = 1;
            }
        }
        if (work->listDone) {
            if (inputConfirmPressed() || inputIsQuestMenuPressed()) {
                FUN_00273358(0xFFFFFFFF);
                work->listActive = 0;
                work->promptActive = 0;
                work->effectActive = 0;
                if (work->mode == 0) {
                    mapIfRequestRecordById(work->map);
                    entrySetParams(work->map, 5, 0);
                    gameCounterAddSaturating(19, 1);
                }
                FUN_002f364c(msSearchGetRecordAt(g_gameState.recordId)->markBit, 0);
                mapDepartEnterState(work, DEPART_STATE_RESULT_END);
            }
        }
        break;

    case DEPART_STATE_RESULT_END:
        work->counter++;
        work->state = DEPART_STATE_END;
        break;

    case DEPART_STATE_SCRIPT_START:
        buttonHelpSetPresetDefault();
        work->scriptData = asdLoadFileSyncDefault("map/all/ibutu_scr.bf");
        work->messageData = asdLoadFileSyncDefault("map/all/ibutu_mes.mbm");
        work->script = scrScriptProcessCreate(work->scriptData, work->messageData);
        work->script->mode = 3;
        scrScriptProcessStartEntry(work->script, 1);
        navigationResetTimer();
        mapDepartEnterState(work, work->state + 1);
        break;

    case DEPART_STATE_SCRIPT_RUN:
        if (scrRunOpcodesStub(work->script) == 2) {
            scrScriptProcessDestroy(work->script);
            asdMemFree(work->scriptData);
            asdMemFree(work->messageData);
            work->script = NULL;
            work->scriptData = NULL;
            work->messageData = NULL;
            mapDepartEnterState(work, DEPART_STATE_END);
        }
        break;

    case DEPART_STATE_CONFIRM_START:
        if (g_mapCamera->contextMode == 0) {
            FUN_00273358(1);
        }
        buttonHelpSetPresetDefault();
        work->scriptData = asdLoadFileSyncDefault("map/all/ibutu_scr.bf");
        work->messageData = asdLoadFileSyncDefault("map/all/ibutu_mes.mbm");
        work->script = scrScriptProcessCreate(work->scriptData, work->messageData);
        work->script->mode = 3;
        scrScriptProcessStartEntry(work->script, g_gameState.mapId < 100 ? 2 : 3);
        navigationResetTimer();
        mapDepartEnterState(work, work->state + 1);
        break;

    case DEPART_STATE_CONFIRM_RUN:
        if (scrRunOpcodesStub(work->script) == 2) {
            scrScriptProcessDestroy(work->script);
            asdMemFree(work->scriptData);
            asdMemFree(work->messageData);
            work->script = NULL;
            work->scriptData = NULL;
            work->messageData = NULL;
            if (messageMainGetChoiceResult() == 0) {
                mapDepartSetTarget(24, 1, 0);
                gameCounterAddSaturating(27, 1);
            } else {
                FUN_00273358(0xFFFFFFFF);
            }
            mapDepartEnterState(work, DEPART_STATE_END);
        }
        break;

    case DEPART_STATE_END:
        fileSlotFree(33);
        asdTMTexTableReleaseNode(10, 4);
        g_mapDepart.exitCycle = (g_mapDepart.exitCycle + 1) % 3;
        return -1;
    }
    return 0;
}

} /* extern "C" */
