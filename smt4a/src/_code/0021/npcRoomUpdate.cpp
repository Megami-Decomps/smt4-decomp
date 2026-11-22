/* NON_MATCHING: 72 lines, same size, frame and block layout as retail; registers only. As in the IV twin (smt4 FUN_00194278) the exit request reads its sequence into r0 with -1 in r3 and the size loaded early (r1/r2 here); the slot fade reset numbers its index, counter and constant r1/r3/r0 (r2/r1/r3 here); three state changes (5, 2, 7) take the room pointer and the state constant in swapped registers; the closing increments load the state frames into r1 and the room clock into r0 (swapped here). */
#include <stdio.h>
#include <string.h>
#include "npc_room/NpcRoom.h"
#include "gamedata/NpcRoomTable.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/DataTableSections.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "gamedata/SavedUnitSelection.h"
#include "script/scrScriptProcess.h"
#include "sys/RuntimeObjects.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "code/Code003c_Smt4a.h"

extern "C" {

extern NpcRoomA *g_npcRoom;

void npcRoomDestroy(void);
void titleSetSlotValueState2(s32 screen, s32 frames);
void jobSetIntensity(u32 job, s32 intensity);
s32 slotIsReady(u32 index);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
void sysPlaySe(u32 id);
void buttonHelpSetSelectedId(s32 id);
u8 messageWindowIsState1(void);
s32 messageMainGetValue(void);
u8 panelIsMissingOrFlagClear(void);
void obj04Finish(void);
s32 messageGetChoiceResult(void); // declcheck: local (the item description's header declares it u32; the room tests its sign)
void eventTexAddHandle(u32 job);
s32 tableGroupFindEntryIndex(void *table, const char *name);
s32 gameSaveTestFlag(u16 id, u8 kind);
void bgmFadeOut(s32 frames);
void campButtonHelpRelease(void);
void campCommonBgRelease(void);
void soundChannelStopAll(s32 mask);
void asdTMTexTableReleaseNode(s32 table, u32 node); // declcheck: local (its only header is the battle talk portrait's; npcRoomDestroy declares it the same way)

/* Enters `state` and restarts its frame counter. */
static __inline void npcRoomSetState(s32 state)
{
    NpcRoomA *room = g_npcRoom;
    room->state = state;
    room->stateFrames = 0;
}

/* npcRoomDestroy's body, as the update repeats it when the room is left through an exit. */
static __inline void npcRoomRelease(void)
{
    NpcRoomA *room = g_npcRoom;
    s32 i;

    if (g_npcRoom != NULL) {
        messageMainClearBannerRequest();
        if (room->mode == NPC_ROOM_MODE_SPECIAL) {
            soundChannelStopAll(0xF);
            bgmFadeOut(0x3C);
        }
        asdTMTexTableReleaseNode(0, room->backgroundImage);
        for (i = 0; i < NPC_ROOM_JOBS; i++) {
            if (room->events[i] != NULL) {
                jobStop(room->jobs[i], 0);
            }
        }
        scrScriptProcessDestroy(room->processA);
        scrScriptProcessDestroy(room->processB);
        asdMemFree(room->dataB);
        asdMemFree(room->dataA);
        jobStop(room->job, 0);
        asdMemFree(room);
        g_npcRoom = NULL;
        dataTableFree(0x1A);
        campButtonHelpRelease();
        campCommonBgRelease();
    }
}

/* Finds the room's row of table 0. */
static __inline void npcRoomFindRecord(u16 id)
{
    NpcRoomA *room = g_npcRoom;
    room->record = NULL;
    void *table = dataTableGet(0x35, 0);
    NpcRoomRecordIV *row = (NpcRoomRecordIV *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (u32 i = 0; i < count; i++, row++) {
        if (row->id == id) {
            room->record = row;
            break;
        }
    }
}

/* Lists the room's events whose flag conditions hold, up to eight. */
static __inline void npcRoomCollectEvents(u16 id)
{
    NpcRoomA *room = g_npcRoom;
    room->events[0] = NULL;
    room->events[1] = NULL;
    room->events[2] = NULL;
    room->events[3] = NULL;
    void *table = dataTableGet(0x35, 1);
    NpcRoomEventRecord *row = npcRoomEventRecords(table);
    u32 count = dataTableGetCount(table);
    room->eventCount = 0;
    for (u32 i = 0; i < count; i++, row++) {
        if (row->id == id && (row->requiredFlagA == 0 || gameFlagIsSet(row->requiredFlagA)) &&
            (row->requiredFlagB == 0 || gameFlagIsSet(row->requiredFlagB)) &&
            (row->excludedFlagA == 0 || !gameFlagIsSet(row->excludedFlagA)) &&
            (row->excludedFlagB == 0 || !gameFlagIsSet(row->excludedFlagB))) {
            room->events[room->eventCount] = row;
            if (++room->eventCount >= NPC_ROOM_JOBS) {
                break;
            }
        }
    }
}

/* The NPC room's update: fades in, lets the player choose an occupant, plays its event script and lists the
   events again, until the room is left. Returns -1 once the room has been destroyed. */
s32 npcRoomUpdate(void)
{
    NpcRoomA *room = g_npcRoom;

    switch (room->state) {
    case 0:
        if (asdTMTexTableNodeIsLoaded(0, room->backgroundImage)) {
            titleSetSlotValueState2(0, 1);
            titleSetSlotValueState2(1, 1);
            /* An exit whose flags hold replaces the room at once. */
            for (s32 i = 0; i < 3; i++) {
                if (room->record->exits[i].requiredFlag != 0 && gameFlagIsSet(room->record->exits[i].requiredFlag) &&
                    (room->record->exits[i].excludedFlag == 0 || !gameFlagIsSet(room->record->exits[i].excludedFlag))) {
                    EntrySequencePacket request;
                    request.id = room->record->exits[i].sequence;
                    request.argument = -1;
                    memcpy(request.name, room->record->exits[i].name, sizeof(room->record->exits[i].name));
                    asdSequenceRequest(4, &request, sizeof(request));
                    npcRoomRelease();
                    return -1;
                }
            }
            room->messageParameter = 0;
            for (s32 row = 0; row < room->displayCount; row++) {
                for (s32 column = 0; column < NPC_ROOM_JOBS; column++) {
                    s32 model = room->displayModels[row][column];
                    if (model >= 0) {
                        jobSetIntensity(room->jobs[model], 0);
                    }
                }
            }
            for (s32 slot = 0; slot < NPC_ROOM_JOBS; slot++) {
                room->progress[slot].delayElapsed = 0;
                room->progress[slot].delay = 0;
                room->progress[slot].fadeStep = NPC_ROOM_FADE_STEPS;
            }
            room->frame = 0;
            npcRoomSetState(1);
        }
        break;
    case 1:
        if (!slotIsReady(0)) {
            if (room->eventCount <= 0) {
                /* Nobody is in: the room's own script says so. */
                if (scrScriptProcessStartEntry(room->processA, 2)) {
                    sysPlaySe(0xA4);
                    npcRoomSetState(5);
                }
            } else if (room->eventCount == 1 || (room->eventCount == 2 && room->displayCount == 1) ||
                       (room->eventCount == 3 && room->displayCount == 1) ||
                       (room->eventCount == 4 && room->displayCount == 1)) {
                room->selectedEvent = 0;
                room->selectedRow = 0;
                npcRoomSetState(3);
            } else if (room->eventCount > 1) {
                if (scrScriptProcessStartEntry(room->processA, 0)) {
                    scrScriptProcessStartEntry(room->processB, 1);
                    npcRoomSetState(2);
                }
            }
        }
        break;
    case 2:
        /* The choice of an occupant: the row under the cursor is lit. */
        if (messageWindowIsState1()) {
            for (s32 row = 0; row < room->displayCount; row++) {
                s32 lit = 0;
                if (messageMainGetValue() == row) {
                    lit = 1;
                }
                for (s32 column = 0; column < NPC_ROOM_JOBS; column++) {
                    s32 model = room->displayModels[row][column];
                    if (model >= 0) {
                        jobSetIntensity(room->jobs[model], lit);
                    }
                }
            }
        }
        scrRunOpcodesStub(room->processA);
        scrRunOpcodesStub(room->processB);
        if (panelIsMissingOrFlagClear()) {
            obj04Finish();
            if (messageGetChoiceResult() >= 0) {
                room->selectedRow = messageGetChoiceResult();
                room->selectedEvent = room->displayModels[room->selectedRow][0];
                npcRoomSetState(3);
                room->messageParameter = room->selectedRow;
            } else {
                slotSetRequest(0, 10, 0xFF);
                slotSetRequest(1, 10, 0xFF);
                npcRoomSetState(6);
            }
        }
        break;
    case 3: {
        char path[64];
        for (s32 column = 0; column < NPC_ROOM_JOBS; column++) {
            s32 model = room->displayModels[room->selectedRow][column];
            if (model >= 0) {
                eventTexAddHandle(room->jobs[model]);
            }
        }
        for (s32 row = 0; row < room->displayCount; row++) {
            s32 lit = 0;
            if (messageMainGetValue() == row) {
                lit = 1;
            }
            for (s32 column = 0; column < NPC_ROOM_JOBS; column++) {
                s32 model = room->displayModels[row][column];
                if (model >= 0) {
                    jobSetIntensity(room->jobs[model], lit);
                }
            }
        }
        sprintf(path, "npc_room/n%03d/n%03d.mbm", room->events[room->selectedEvent]->id,
                room->events[room->selectedEvent]->id);
        room->eventMessages = asdLoadFileSyncDefault(path);
        sprintf(path, "npc_room/n%03d/n%03d.bf", room->events[room->selectedEvent]->id,
                room->events[room->selectedEvent]->id);
        room->eventScript = asdLoadFileSyncDefault(path);
        room->eventProcess = scrScriptProcessCreate(room->eventScript, room->eventMessages);
        scrScriptProcessStartEntry(room->eventProcess,
                                   tableGroupFindEntryIndex(room->eventScript, room->events[room->selectedEvent]->label));
        npcRoomSetState(4);
        buttonHelpTransitionPresetFlags(0xA4);
        sysPlaySe(0xA4);
        break;
    }
    case 4:
        if (scrRunOpcodesStub(room->eventProcess) == 2) {
            scrScriptProcessDestroy(room->eventProcess);
            asdMemFree(room->eventScript);
            asdMemFree(room->eventMessages);
            /* The event may have changed the flags: list the events again. */
            npcRoomFindRecord(room->mode);
            npcRoomCollectEvents(room->mode);
            if (room->eventCount <= 1 || (room->eventCount == 2 && room->displayCount == 1) ||
                (room->eventCount == 3 && room->displayCount == 1) ||
                (room->eventCount == 4 && room->displayCount == 1)) {
                slotSetRequest(0, 10, 0xFF);
                slotSetRequest(1, 10, 0xFF);
                npcRoomSetState(6);
            } else {
                npcRoomSetState(1);
                buttonHelpTransitionPresetFlags(0xA2);
                buttonHelpSetSelectedId(0xA2);
            }
        }
        break;
    case 5:
        if (scrRunOpcodesStub(room->processA) == 2) {
            slotSetRequest(0, 10, 0xFF);
            slotSetRequest(1, 10, 0xFF);
            npcRoomSetState(6);
        }
        break;
    case 6:
        if (!slotIsReady(0)) {
            npcRoomSetState(7);
        }
        break;
    case 7:
        if (g_gameState.savedLocationSet) {
            if (g_gameState.resumeMode == 1) {
                asdSequenceRequest(6, NULL, 0);
            }
            if (g_gameState.resumeMode == 3) {
                s16 location[2];
                location[0] = g_gameState.savedMapId - 200;
                location[1] = g_gameState.savedAreaId;
                asdSequenceRequest(14, location, sizeof(location));
            }
        } else {
            titleSetSlotValueState2(0, 1);
            titleSetSlotValueState2(1, 1);
        }
        if (gameFlagIsSet(0x295) && !gameFlagIsSet(0x296)) {
            gameFlagSetValue(0x296, 1, 1);
        }
        if (gameFlagIsSet(0x297) && !gameFlagIsSet(0x298)) {
            gameFlagSetValue(0x298, 1, 1);
        }
        npcRoomDestroy();
        return -1;
    }
    /* Each occupant whose save flag is clear waits out its delay, then fades in. */
    if (room->state != 0) {
        for (s32 slot = 0; slot < NPC_ROOM_JOBS; slot++) {
            NpcRoomEventRecord *event = room->events[slot];
            if (event != NULL && !gameSaveTestFlag(event->id, event->param)) {
                if (room->progress[slot].delayElapsed < room->progress[slot].delay) {
                    room->progress[slot].delayElapsed++;
                } else if (room->progress[slot].fadeStep < NPC_ROOM_FADE_STEPS) {
                    room->progress[slot].fadeStep++;
                }
            }
        }
    }
    room->stateFrames++;
    room->frame++;
    return 0;
}

} /* extern "C" */
