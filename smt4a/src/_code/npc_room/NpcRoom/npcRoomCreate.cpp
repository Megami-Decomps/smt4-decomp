/* NON_MATCHING: the twin of smt4 npcRoomCreate, 198 raw / 166 shape lines, all in the display-row loop: the loop
 * over a group's later members is unrolled by two as in retail, but the build keeps `i + 1` in r0 and the row
 * index in a saved register, where retail keeps `i` in r1 and folds the +1 into the offsets (`ldm` of events[i]
 * and events[i + 1], `[r8, #44]`), so the group count, the group list and the scratch registers differ. The
 * rest (the jobs, both lookups, the scripts, the portraits and the background switch) matches. */
#include "npc_room/NpcRoom.h"
#include "gamedata/NpcRoomTable.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers_Smt4a.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "camp/CampMenuEntry.h"
#include "code/Code0015_Smt4a.h"
#include "code/Code002c_VariantA.h"
#include "event/2dEvent/EventEffect.h"
#include "script/scrScriptProcess.h"

extern "C" {

extern NpcRoomA *g_npcRoom;

s32 npcRoomUpdate(u32 job);
s32 FUN_002394a8(u32 job);
s32 FUN_00284dbc(u32 job);
void __aeabi_memset4(void *destination, u32 size, s32 value);
u32 npc2dCreatePortraitJob(u32 npcId, u32 option, s32 x, s32 y, f32 alpha);
u32 npc2dCreateDemonPortrait(u32 id, u32 option, s32 x, s32 y, f32 alpha);
void jobSetParent(u32 parent, u32 job);
void jobSetWork3C(u32 job, u32 value);
void campCommonBgAcquire(void);
void campButtonHelpAcquire(void);
void buttonHelpSetSelectedId(u16 value);

/* Finds the room's row of the room table (the helper of IV's NpcRoom.cpp). */
static __inline void npcRoomFindRecord(u32 id)
{
    NpcRoomA *room = g_npcRoom;
    room->record = NULL;
    void *table = dataTableGet(0x35, 0);
    NpcRoomRecordIV *record = (NpcRoomRecordIV *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (u32 i = 0; i < count; i++, record++) {
        if (record->id == id) {
            room->record = record;
            break;
        }
    }
}

/* Collects the room's events whose flag conditions hold, eight at most (the helper of IV's NpcRoom.cpp). */
static __inline void npcRoomCollectEvents(u16 id)
{
    NpcRoomA *room = g_npcRoom;
    room->events[0] = NULL;
    room->events[1] = NULL;
    room->events[2] = NULL;
    room->events[3] = NULL;
    void *table = dataTableGet(0x35, 1);
    NpcRoomEventRecord *event = (NpcRoomEventRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    room->eventCount = 0;
    for (u32 i = 0; i < count; i++, event++) {
        if (event->id == id && (event->requiredFlagA == 0 || gameFlagIsSet(event->requiredFlagA)) &&
            (event->requiredFlagB == 0 || gameFlagIsSet(event->requiredFlagB)) &&
            (event->excludedFlagA == 0 || !gameFlagIsSet(event->excludedFlagA)) &&
            (event->excludedFlagB == 0 || !gameFlagIsSet(event->excludedFlagB))) {
            room->events[room->eventCount] = event;
            room->eventCount++;
            if (room->eventCount >= NPC_ROOM_JOBS) {
                break;
            }
        }
    }
}

/* Opens room `id`: starts its jobs, finds its events, lays their portraits out in display rows (the events
 * of one group share a row) and loads the room's scripts, portraits and background. */
void npcRoomCreate(u32 id)
{
    if (g_npcRoom == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\npc_room\\NpcRoom.cpp", 680);
        g_npcRoom = (NpcRoomA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(NpcRoomA), 1);
    }
    NpcRoomA *room = g_npcRoom;
    sysMemClear(room, sizeof(NpcRoomA));
    room->job = asdProcessCreateSimple((const s8 *)"NpcRoom Calc", 4, 0, 0, npcRoomUpdate, NULL, 0);
    taskCreateDraw((const s8 *)"NpcRoom UDrawLeft", 0x7e, 0, 0, FUN_002394a8, NULL, 0, (void *)room->job);
    taskCreateDraw((const s8 *)"NpcRoom UDrawRight", 0xda, 0, 0, FUN_002394a8, NULL, 0, (void *)room->job);
    taskCreateDraw((const s8 *)"NpcRoom DDraw", 0xea, 0, 0, FUN_00284dbc, NULL, 0, (void *)room->job);
    loadSlotEnsureLoaded(0x1a);
    room->mode = id;
    npcRoomFindRecord(id);
    npcRoomCollectEvents(room->mode);

    for (s32 i = 0; i < NPC_ROOM_JOBS; i++) {
        __aeabi_memset4(room->displayModels[i], sizeof(room->displayModels[i]), -1);
    }
    s32 groupCount = 0;
    u16 groups[NPC_ROOM_JOBS] = {0};
    room->displayCount = 0;
    for (s32 i = 0; i < NPC_ROOM_JOBS; i++) {
        if (room->events[i] != NULL) {
            u16 group = room->events[i]->group;
            if (group == 0) {
                room->displayModels[room->displayCount][0] = i;
                room->displayCount++;
            } else {
                s32 known;
                for (known = 0; known < groupCount; known++) {
                    if (groups[known] == group) {
                        break;
                    }
                }
                if (known >= groupCount) {
                    room->displayModels[room->displayCount][0] = i;
                    s32 column = 1;
                    for (s32 j = i + 1; j < room->eventCount; j++) {
                        if (room->events[i]->group == room->events[j]->group) {
                            room->displayModels[room->displayCount][column] = j;
                            column++;
                        }
                    }
                    room->displayCount++;
                    groups[groupCount] = room->events[i]->group;
                    groupCount++;
                }
            }
        }
    }

    room->dataA = asdLoadFileSyncDefault("npc_room/npcMsg.mbm");
    room->dataB = asdLoadFileSyncDefault("npc_room/npc.bf");
    ScriptProcess *process = scrScriptProcessCreate(room->dataB, room->dataA);
    room->processA = process;
    scriptProcessSetMode(process, 2);
    process = scrScriptProcessCreate(room->dataB, room->dataA);
    room->processB = process;
    scriptProcessSetMode(process, 2);
    for (s32 i = 0; i < NPC_ROOM_JOBS; i++) {
        if (room->events[i] != NULL) {
            NpcRoomEventRecord *event = room->events[i];
            if (event->isDemon != 0) {
                room->jobs[i] = npc2dCreateDemonPortrait(event->npcId, 0, event->x + event->xOffset, 0, 1.0f);
            } else {
                room->jobs[i] = npc2dCreatePortraitJob(event->npcId, 0, event->x + event->xOffset, 0, 1.0f);
            }
            jobSetParent(room->job, room->jobs[i]);
            jobSetWork3C(room->jobs[i], room->events[i]->layer + 3);
        }
    }

    void *table = dataTableGet(0x1a, 0);
    u16 *images = (u16 *)dataTableGetEntries(table);
    dataTableGetCount(table);
    room->backgroundImage = images[room->record->background - 1];
    /* Some rooms change their background once a story flag is set. */
    switch (room->mode) {
    case 0x60:
    case 0x61:
        if (gameFlagIsSet(0x9d)) {
            room->backgroundImage = 0xfb;
        }
        break;
    case 0x41:
    case 0x42:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
        if (gameFlagIsSet(0x170)) {
            room->backgroundImage = 0x3f;
        }
        break;
    }
    asdTMTexTablePrepareNodeImage(0, room->backgroundImage);
    campCommonBgAcquire();
    commonBgStopChildAndBeginTransition();
    campButtonHelpAcquire();
    buttonHelpSetSelectedId(0xa2);
}

} /* extern "C" */
