/* NON_MATCHING: 168 raw / 146 shape lines, registers. The loop over a group's later members is unrolled by two as
 * in retail (only `for (j = i + 1; j < room->eventCount; j++)` does that; the forms indexed from zero compile to a
 * single-step loop), but the build keeps `i + 1` in r0 and the loop's row index in a saved register, where retail
 * keeps `i` in r1 and folds the +1 into the offsets (`ldm` of events[i] and events[i + 1], `[r8, #44]`); with that
 * the group count, the group list and the scratch registers come out in other registers, and the record search
 * counts in r1 against r0 (the build: r0 against r1). The two lookups are the helpers npcRoomUpdate (the same
 * file, NpcRoom.cpp) inlines too. */
#include "npc_room/NpcRoom.h"
#include "gamedata/NpcRoomTable.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "camp/CampMenuEntry.h"
#include "code/Code0028_Smt4.h"
#include "code/Code002c_Smt4.h"
#include "event/bustupEvent/BustupTex.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {

extern NpcRoom *g_npcRoom;

s32 npcRoomUpdate(u32 job);
s32 FUN_001aba44(u32 job);
s32 FUN_001dd8e8(u32 job);
void __aeabi_memset4(void *destination, u32 size, s32 value);
void fileSlotLoad(s32 table);
u32 FUN_00252190(u32 npcId, u32 mode, s32 x);
u32 FUN_00285e44(s32 npcId, u32 style, s32 x);
void jobSetParent(u32 parent, u32 job);
void FUN_002fdfe0(u32 job, u32 value);
void commonBgAcquire(void);
void buttonHelpCreate(void);

/* Finds the room's row of the room table (the helper npcRoomUpdate has too). */
static __inline void npcRoomFindRecord(u32 id)
{
    NpcRoom *room = g_npcRoom;
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

/* Collects the room's events whose flag conditions hold, eight at most (the helper npcRoomUpdate has too). */
static __inline void npcRoomCollectEvents(u16 id)
{
    NpcRoom *room = g_npcRoom;
    room->events[0] = NULL;
    room->events[1] = NULL;
    room->events[2] = NULL;
    room->events[3] = NULL;
    void *table = dataTableGet(0x35, 1);
    NpcRoomEventRecordIV *event = (NpcRoomEventRecordIV *)dataTableGetEntries(table);
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
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\npc_room\\NpcRoom.cpp", 456);
        g_npcRoom = (NpcRoom *)asdMemAlloc(0x100, 0x100, 0, sizeof(NpcRoom), 1);
    }
    NpcRoom *room = g_npcRoom;
    memClear(room, sizeof(NpcRoom));
    room->job = asdProcessCreateSimple((const s8 *)"NpcRoom Calc", 2, 0, 0, npcRoomUpdate, NULL, 0);
    taskCreateDraw((const s8 *)"NpcRoom UDrawLeft", 0x7a, 0, 0, FUN_001aba44, NULL, 0, (void *)room->job);
    taskCreateDraw((const s8 *)"NpcRoom UDrawRight", 0xd8, 0, 0, FUN_001aba44, NULL, 0, (void *)room->job);
    taskCreateDraw((const s8 *)"NpcRoom DDraw", 0xe6, 0, 0, FUN_001dd8e8, NULL, 0, (void *)room->job);
    fileSlotLoad(0x35);
    fileSlotLoad(0x1a);
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
            NpcRoomEventRecordIV *event = room->events[i];
            if (event->isDemon != 0) {
                room->jobs[i] = FUN_00252190(event->npcId, 0, event->x + event->xOffset);
            } else {
                room->jobs[i] = FUN_00285e44(event->npcId, 0, event->x + event->xOffset);
            }
            jobSetParent(room->job, room->jobs[i]);
            FUN_002fdfe0(room->jobs[i], room->events[i]->layer + 3);
        }
    }

    void *table = dataTableGet(0x1a, 0);
    u16 *images = (u16 *)dataTableGetEntries(table);
    dataTableGetCount(table);
    room->backgroundImage = images[room->record->background - 1];
    asdTMTexTablePrepareNodeImage(2, room->backgroundImage);
    commonBgAcquire();
    commonBgStopChildAndBeginTransition();
    buttonHelpCreate();
    buttonHelpWorkSetPreset(0xa0);
}

} /* extern "C" */
