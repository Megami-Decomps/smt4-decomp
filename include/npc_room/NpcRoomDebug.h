/* npc_room/NpcRoomDebug.c: debug menu of the NPC rooms. */
#ifndef NPC_ROOM_NPCROOMDEBUG_H
#define NPC_ROOM_NPCROOMDEBUG_H

#include "common.h"
#include <stddef.h>

/* NpcRoomDebug.state: the room selection's steps. */
enum {
    NPC_ROOM_DEBUG_SELECT = 0,  /* pick a room id with the pad */
    NPC_ROOM_DEBUG_IN_ROOM = 1, /* the chosen room runs until it is done */
    NPC_ROOM_DEBUG_CLOSE = 2    /* stop the menu and free its block */
};

/* Highest room id the selection offers. */
enum { NPC_ROOM_DEBUG_LAST_ROOM = 999 };

/* The debug menu's block (0xC bytes), kept by a module global. */
typedef struct NpcRoomDebug {
    /* 0x00 */ u32 job;       /* job that runs the menu */
    /* 0x04 */ s32 state;     /* NPC_ROOM_DEBUG_* */
    /* 0x08 */ u16 roomId;    /* room the selection shows and opens */
    /* 0x0A */ u8 unk0a[2];
} NpcRoomDebug;
typedef char NpcRoomDebugLayoutCheck[offsetof(NpcRoomDebug, state) == 0x4 &&
    offsetof(NpcRoomDebug, roomId) == 0x8 && sizeof(NpcRoomDebug) == 0xC ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

extern NpcRoomDebug *g_npcRoomDebug;

#ifdef __cplusplus
}
#endif

#endif
