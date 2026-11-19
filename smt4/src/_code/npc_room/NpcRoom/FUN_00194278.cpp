/* NON_MATCHING: 30 lines, same size, frame and block layout; registers only. The exit request reads its sequence into r0 through r3 and stores it before the name's address is formed (r1/r2 and one instruction later here), and the two entries into state 3 take the room pointer and the state constant in swapped registers (retail: r1/r0 after the single-event test, r0/r1 with the constant loaded early after the choice). */
#include <stdio.h>
#include <string.h>
#include "npc_room/NpcRoom.h"
#include "gamedata/NpcRoomTable.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "util/MemoryHelpers_VariantA.h"
#include "quest_center/qcMain.h"
#include "game/GameState.h"
#include "script/scrScriptProcess.h"
#include "shop/shopMain.h"
#include "sys/RuntimeObjects.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"

extern "C" {

extern NpcRoom *g_npcRoom;

void npcRoomDestroy(void);
void titleSetSlotValueState2(s32 screen, s32 frames);
void bgmRequestSelectedChannelFade(u32 frames);
void soundChannelRequestIfEnabled(u32 id, s32 a, s32 frames);
void jobSetIntensity(u32 job, s32 intensity);
s32 slotIsReady(u32 index);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
void buttonHelpSetContext(s32 context);
u8 messageWindowIsState1(void);
s32 messageTargetGetValue(void);
void messageMainFinishWindow(void);
s32 messageMainGetChoiceResult(void);
void eventTexAddHandle(u32 job);
s32 tableGroupFindEntryIndex(void *table, const char *name);
void bgmFadeOut(s32 frames);
void buttonHelpRelease(void);
void uiFadeRelease(void);
void soundChannelStopAll(s32 mask);
void messageMainClearBannerRequest(void);
void asdTMTexTableReleaseNode(s32 table, u32 node); // declcheck: local (its only header is Apocalypse's battle talk portrait; npcRoomDestroy declares it the same way)

/* Enters `state` and restarts its frame counter. */
static __inline void npcRoomSetState(s32 state)
{
    NpcRoom *room = g_npcRoom;
    room->state = state;
    room->unkEC = 0;
}

/* npcRoomDestroy's body, as the update repeats it when the room is left through an exit. */
static __inline void npcRoomRelease(void)
{
    NpcRoom *room = g_npcRoom;
    s32 i;

    if (g_npcRoom != NULL) {
        messageMainClearBannerRequest();
        if (room->mode == NPC_ROOM_MODE_SPECIAL) {
            soundChannelStopAll(0xF);
            bgmFadeOut(0x3C);
        }
        asdTMTexTableReleaseNode(2, room->unk102);
        for (i = 0; i < NPC_ROOM_JOBS; i++) {
            if (room->jobUsed[i] != 0) {
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
        fileSlotFree(0x35);
        fileSlotFree(0x1A);
        buttonHelpRelease();
        uiFadeRelease();
    }
}

/* Finds the room's row of table 0. */
static __inline void npcRoomFindRecord(u16 id)
{
    NpcRoom *room = g_npcRoom;
    room->record = NULL;
    void *table = dataTableGet(0x35, 0);
    NpcRoomRecordIV *row = static_cast<NpcRoomRecordIV *>(dataTableGetEntries(table));
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
    NpcRoom *room = g_npcRoom;
    room->events[0] = NULL;
    room->events[1] = NULL;
    room->events[2] = NULL;
    room->events[3] = NULL;
    void *table = dataTableGet(0x35, 1);
    NpcRoomEventRecordIV *row = static_cast<NpcRoomEventRecordIV *>(dataTableGetEntries(table));
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
s32 FUN_00194278(void)
{
    NpcRoom *room = g_npcRoom;

    switch (room->state) {
    case 0:
        if (asdTMTexTableNodeIsLoaded(2, room->unk102)) {
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
            if (room->mode == NPC_ROOM_MODE_SPECIAL) {
                bgmRequestSelectedChannelFade(30);
                soundChannelRequestIfEnabled(0x100005E, 0, 60);
            }
            room->highlightedRow = 0;
            for (s32 row = 0; row < room->displayCount; row++) {
                for (s32 column = 0; column < NPC_ROOM_JOBS; column++) {
                    s32 model = room->displayModels[row][column];
                    if (model >= 0) {
                        jobSetIntensity(room->jobs[model], 0);
                    }
                }
            }
            npcRoomSetState(1);
        }
        break;
    case 1:
        if (!slotIsReady(0)) {
            if (room->eventCount <= 0) {
                /* Nobody is in: the room's own script says so. */
                if (scrScriptProcessStartEntry(room->processA, 2)) {
                    buttonHelpSetPreset(0xA2);
                    npcRoomSetState(5);
                }
            } else if (room->eventCount == 1 || (room->eventCount == 2 && room->displayCount == 1)) {
                room->selectedEvent = 0;
                room->unkFC = 0;
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
                if (messageTargetGetValue() == row) {
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
        if (messageBannerIsIdle()) {
            messageMainFinishWindow();
            if (messageMainGetChoiceResult() >= 0) {
                room->unkFC = messageMainGetChoiceResult();
                room->selectedEvent = room->displayModels[room->unkFC][0];
                npcRoomSetState(3);
                room->highlightedRow = room->unkFC;
            } else {
                slotSetRequest(0, 10, 0xFF);
                npcRoomSetState(6);
            }
        }
        break;
    case 3: {
        char path[64];
        for (s32 column = 0; column < NPC_ROOM_JOBS; column++) {
            s32 model = room->displayModels[room->unkFC][column];
            if (model >= 0) {
                eventTexAddHandle(room->jobs[model]);
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
        buttonHelpSetContext(0xA2);
        buttonHelpSetPreset(0xA2);
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
            if (room->eventCount > 1 && !(room->eventCount == 2 && room->displayCount == 1)) {
                npcRoomSetState(1);
                buttonHelpSetContext(0xA0);
                FUN_00290d5c(0xA0);
            } else {
                slotSetRequest(0, 10, 0xFF);
                npcRoomSetState(6);
            }
        }
        break;
    case 5:
        if (scrRunOpcodesStub(room->processA) == 2) {
            slotSetRequest(0, 10, 0xFF);
            npcRoomSetState(6);
        }
        break;
    case 6:
        if (!slotIsReady(0)) {
            npcRoomSetState(7);
        }
        break;
    case 7:
        if (g_gameState.map.savedLocationSet) {
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
        npcRoomDestroy();
        return -1;
    }
    room->unkEC++;
    return 0;
}

} /* extern "C" */
