/* npc_room/NpcRoom.c: the rooms where recruited demons and NPCs are visited. */
#ifndef NPC_ROOM_NPCROOM_H
#define NPC_ROOM_NPCROOM_H

#include "common.h"
#include <stddef.h>

#define NPC_ROOM_JOBS 8
#define NPC_ROOM_STATE_DONE 7  /* NpcRoom.state: the room has finished */
#define NPC_ROOM_MODE_SPECIAL 0x22

/* The room's block, kept by a module global. */
typedef struct NpcRoom {
    /* 0x00 */ u32 job;                       /* job that runs the room */
    /* 0x04 */ u32 jobs[NPC_ROOM_JOBS];       /* per-slot jobs */
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ u32 jobUsed[NPC_ROOM_JOBS];    /* nonzero when jobs[i] was started */
    /* 0x48 */ void *dataA;                   /* heap blocks */
    /* 0x4C */ void *dataB;
    /* 0x50 */ void *processA;                /* script process objects */
    /* 0x54 */ void *processB;
    /* 0x58 */ u8 unk58[0xC];
    /* 0x64 */ s16 displayModels[NPC_ROOM_JOBS][NPC_ROOM_JOBS]; /* model index per display row and column, < 0 when empty */
    /* 0xE4 */ s32 displayCount;
    /* 0xE8 */ u8 unkE8[4];
    /* 0xEC */ s32 unkEC;
    /* 0xF0 */ s32 state;
    /* 0xF4 */ u8 unkF4[8];
    /* 0xFC */ s32 unkFC;
    /* 0x100 */ s16 mode;
    /* 0x102 */ u16 unk102;
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
struct NpcRoomSlotProgressA {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
};
struct NpcRoomA {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ NpcRoomOccupantA* occupants[NPC_ROOM_JOBS];
    /* 0x048 */ u8 unk048[0x1C];
    /* 0x064 */ NpcRoomDisplayEntryA displayEntries[NPC_ROOM_JOBS];
    /* 0x0E4 */ s32 displayCount;
    /* 0x0E8 */ u8 unk0E8[0xC];
    /* 0x0F4 */ s32 occupantCount;
    /* 0x0F8 */ u8 unk0F8[0xC];
    /* 0x104 */ u32 messageParameter;
    /* 0x108 */ NpcRoomSlotProgressA progress[NPC_ROOM_JOBS];
};
typedef char NpcRoomASizeCheck[sizeof(NpcRoomA) == 0x168 ? 1 : -1];
typedef char NpcRoomADisplayEntriesOffsetCheck[offsetof(NpcRoomA, displayEntries) == 0x64 ? 1 : -1];
typedef char NpcRoomADisplayCountOffsetCheck[offsetof(NpcRoomA, displayCount) == 0xE4 ? 1 : -1];
typedef char NpcRoomAMessageParameterOffsetCheck[offsetof(NpcRoomA, messageParameter) == 0x104 ? 1 : -1];
typedef char NpcRoomDisplayOffsetsCheck[offsetof(NpcRoom, displayModels) == 0x64 && offsetof(NpcRoom, displayCount) == 0xE4 &&
    offsetof(NpcRoom, unkEC) == 0xEC && offsetof(NpcRoom, state) == 0xF0 && offsetof(NpcRoom, unkFC) == 0xFC &&
    offsetof(NpcRoom, unk102) == 0x102 ? 1 : -1];

extern "C" {
void mapCollisionRelease(void);
}

#endif
