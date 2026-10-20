/* npc_room/NpcRoom.c: the rooms where recruited demons and NPCs are visited. */
#ifndef NPC_ROOM_NPCROOM_H
#define NPC_ROOM_NPCROOM_H

#include "common.h"

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
    /* 0x58 */ u8 unk58[0x98];
    /* 0xF0 */ s32 state;
    /* 0xF4 */ u8 unkF4[0x0C];
    /* 0x100 */ s16 mode;
    /* 0x102 */ u16 unk102;
} NpcRoom;

#endif
