/* npc_room/NpcRoomDebug.c: debug menu of the NPC rooms. */
#ifndef NPC_ROOM_NPCROOMDEBUG_H
#define NPC_ROOM_NPCROOMDEBUG_H

#include "common.h"

/* The debug menu's block, kept by a module global. */
typedef struct NpcRoomDebug {
    /* 0x00 */ u32 job;       /* job that runs the menu */
} NpcRoomDebug;

#endif
