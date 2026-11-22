/* npc_room/NpcRoom.c: the rooms where recruited demons and NPCs are visited. */
#ifndef NPC_ROOM_NPCROOM_H
#define NPC_ROOM_NPCROOM_H

#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"

struct NpcRoomRecordIV;
struct NpcRoomEventRecordIV;
struct NpcRoomEventRecord;

#define NPC_ROOM_JOBS 8
#define NPC_ROOM_STATE_DONE 7  /* NpcRoom.state: the room has finished */
#define NPC_ROOM_MODE_SPECIAL 0x22

/* The room's block, kept by a module global. */
typedef struct NpcRoom {
    /* 0x00 */ u32 job;                       /* job that runs the room */
    /* 0x04 */ u32 jobs[NPC_ROOM_JOBS];       /* per-slot jobs */
    /* 0x24 */ NpcRoomRecordIV *record;       /* the room's row of NpcRoomTable.tbb table 0 (IV) */
    union {
        /* 0x28 */ u32 jobUsed[NPC_ROOM_JOBS];    /* nonzero when jobs[i] was started */
        /* 0x28 */ NpcRoomEventRecordIV *events[NPC_ROOM_JOBS]; /* IV: the room's available events; each has a job */
    };
    /* 0x48 */ void *dataA;                   /* heap blocks */
    /* 0x4C */ void *dataB;
    /* 0x50 */ ScriptProcess *processA;                /* script process objects */
    /* 0x54 */ ScriptProcess *processB;
    /* 0x58 */ void *eventMessages;           /* the chosen event's message and script files, and its process */
    /* 0x5C */ void *eventScript;
    /* 0x60 */ ScriptProcess *eventProcess;
    /* 0x64 */ s16 displayModels[NPC_ROOM_JOBS][NPC_ROOM_JOBS]; /* model index per display row and column, < 0 when empty */
    /* 0xE4 */ s32 displayCount;
    /* 0xE8 */ u8 defaultRoom;              /* 1 when the room was opened without an entry (room 0) */
    /* 0xE9 */ u8 unkE9[3];
    /* 0xEC */ s32 unkEC;                     /* frames in the current state */
    /* 0xF0 */ s32 state;
    /* 0xF4 */ s32 eventCount;                /* how many of events[] are set */
    /* 0xF8 */ s32 selectedEvent;             /* index into events[] of the event being played */
    /* 0xFC */ s32 unkFC;                     /* the display row that was chosen */
    /* 0x100 */ s16 mode;                     /* the room's id (NpcRoomRecordIV.id) */
    /* 0x102 */ u16 backgroundImage;          /* the room's background, a node of texture table 2 (Apocalypse: 0) */
    /* 0x104 */ s32 highlightedRow;           /* IV: the chosen row once an event runs */
} NpcRoom;

struct NpcRoomOccupantA {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x50];
    /* 0x52 */ u8 kind;
};

/* The name starts here, but its complete buffer extent is not established. */
static __inline const char *npcRoomOccupantName(const NpcRoomOccupantA *occupant)
{
    return reinterpret_cast<const char *>(occupant) + 0x26;
}
struct NpcRoomDisplayEntryA {
    /* 0x00 */ s16 occupantIndex;
    /* 0x02 */ u8 unk02[0xE];
};
/* A room slot's fade: it waits `delay` frames, then steps its fade up to NPC_ROOM_FADE_STEPS. */
struct NpcRoomSlotProgressA {
    /* 0x00 */ s32 delayElapsed;
    /* 0x04 */ s32 delay;
    /* 0x08 */ s32 fadeStep;
};
enum { NPC_ROOM_FADE_STEPS = 5 };

/* Apocalypse's room block (0x16C bytes): IV's layout with the slots' fade state after it. */
struct NpcRoomA {
    /* 0x000 */ u32 job;                      /* job that runs the room */
    /* 0x004 */ u32 jobs[NPC_ROOM_JOBS];      /* per-slot jobs */
    /* 0x024 */ NpcRoomRecordIV *record;      /* the room's row of NpcRoomTable.tbb table 0 (same layout as IV) */
    union {
        /* 0x028 */ NpcRoomOccupantA* occupants[NPC_ROOM_JOBS];
        /* 0x028 */ NpcRoomEventRecord *events[NPC_ROOM_JOBS]; /* the room's available events; each has a job */
    };
    /* 0x048 */ void *dataA;                  /* heap blocks */
    /* 0x04C */ void *dataB;
    /* 0x050 */ ScriptProcess *processA;      /* script process objects */
    /* 0x054 */ ScriptProcess *processB;
    /* 0x058 */ void *eventMessages;          /* the chosen event's message and script files, and its process */
    /* 0x05C */ void *eventScript;
    /* 0x060 */ ScriptProcess *eventProcess;
    union {
        /* 0x064 */ NpcRoomDisplayEntryA displayEntries[NPC_ROOM_JOBS];
        /* 0x064 */ s16 displayModels[NPC_ROOM_JOBS][NPC_ROOM_JOBS]; /* model index per display row and column, < 0 when empty */
    };
    /* 0x0E4 */ s32 displayCount;
    /* 0x0E8 */ u8 unk0E8[4];
    /* 0x0EC */ s32 stateFrames;              /* frames in the current state */
    /* 0x0F0 */ s32 state;
    union {
        /* 0x0F4 */ s32 occupantCount;
        /* 0x0F4 */ s32 eventCount;           /* how many of events[] are set */
    };
    /* 0x0F8 */ s32 selectedEvent;            /* index into events[] of the event being played */
    /* 0x0FC */ s32 selectedRow;              /* the display row that was chosen */
    /* 0x100 */ s16 mode;                     /* the room's id (NpcRoomRecordIV.id) */
    /* 0x102 */ u16 backgroundImage;          /* the room's background, a node of texture table 0 */
    /* 0x104 */ u32 messageParameter;         /* the chosen row once an event runs */
    /* 0x108 */ NpcRoomSlotProgressA progress[NPC_ROOM_JOBS];
    /* 0x168 */ s32 frame;  /* the animation clock the room slots' fade cycles run on */
};
typedef char NpcRoomASizeCheck[sizeof(NpcRoomA) == 0x16C ? 1 : -1];
typedef char NpcRoomADisplayEntriesOffsetCheck[offsetof(NpcRoomA, displayEntries) == 0x64 ? 1 : -1];
typedef char NpcRoomADisplayCountOffsetCheck[offsetof(NpcRoomA, displayCount) == 0xE4 ? 1 : -1];
typedef char NpcRoomAMessageParameterOffsetCheck[offsetof(NpcRoomA, messageParameter) == 0x104 ? 1 : -1];
typedef char NpcRoomAStateOffsetsCheck[offsetof(NpcRoomA, record) == 0x24 && offsetof(NpcRoomA, events) == 0x28 &&
    offsetof(NpcRoomA, processA) == 0x50 && offsetof(NpcRoomA, eventProcess) == 0x60 &&
    offsetof(NpcRoomA, stateFrames) == 0xEC && offsetof(NpcRoomA, state) == 0xF0 && offsetof(NpcRoomA, eventCount) == 0xF4 &&
    offsetof(NpcRoomA, selectedRow) == 0xFC && offsetof(NpcRoomA, mode) == 0x100 && offsetof(NpcRoomA, backgroundImage) == 0x102 && offsetof(NpcRoomA, progress) == 0x108 &&
    offsetof(NpcRoomA, frame) == 0x168 ? 1 : -1];
typedef char NpcRoomDisplayOffsetsCheck[offsetof(NpcRoom, displayModels) == 0x64 && offsetof(NpcRoom, displayCount) == 0xE4 &&
    offsetof(NpcRoom, defaultRoom) == 0xE8 && offsetof(NpcRoom, unkEC) == 0xEC && offsetof(NpcRoom, state) == 0xF0 && offsetof(NpcRoom, unkFC) == 0xFC &&
    offsetof(NpcRoom, backgroundImage) == 0x102 && offsetof(NpcRoom, record) == 0x24 && offsetof(NpcRoom, events) == 0x28 &&
    offsetof(NpcRoom, eventMessages) == 0x58 && offsetof(NpcRoom, eventProcess) == 0x60 &&
    offsetof(NpcRoom, eventCount) == 0xF4 && offsetof(NpcRoom, selectedEvent) == 0xF8 && sizeof(NpcRoom) == 0x108 ? 1 : -1];

extern "C" {
void mapCollisionRelease(void);
}

#ifdef __cplusplus
extern "C" {
#endif

void mapGimicUpdateVisualBounds(void);

#ifdef __cplusplus
}
#endif

#endif
