#include <stdio.h>
#include "npc_room/NpcRoom.h"
#include "text/TextDraw.h"
#include "code/Code003c_Smt4a.h"

extern "C" {
extern NpcRoomA *g_npcRoom;
char *libc_strcpy(char *destination, const char *source);
void questCenterShowDisplayMessage(u32 text, u32 parameter);

/* Displays the room's listed occupant names as a line-broken message. */
void FUN_0038b084(void)
{
    NpcRoomA *room = g_npcRoom;
    char message[256];
    char name[128];
    char converted[128];
    s32 length = 0;
    for (s32 i = 0; i < room->displayCount; ++i) {
        NpcRoomOccupantA *occupant = room->occupants[room->displayEntries[i].occupantIndex];
        if (occupant != NULL) {
            libc_strcpy(name, npcRoomOccupantName(occupant));
            textExpandGlyphsToBuffer(name, converted, 0);
            length += sprintf(message + length, "%s<br>", converted);
        }
    }
    messageMainRequestBanner();
    questCenterShowDisplayMessage(reinterpret_cast<u32>(message), room->messageParameter);
}
}
