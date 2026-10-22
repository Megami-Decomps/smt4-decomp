/* NON_MATCHING: The room-global literal load is scheduled before the prologue and its work load precedes index initialization. */
#include "npc_room/NpcRoom.h"

extern "C" {
extern NpcRoomA *g_npcRoom;
char *libc_strcpy(char *destination, const char *source);
void FUN_001654f8(const char *source, char *destination, s32 mode);
s32 textFormatBuffer(char *destination, const char *format, ...);
void FUN_003c1060(void);
void FUN_0038892c(u32 text, u32 parameter);

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
            FUN_001654f8(name, converted, 0);
            length += textFormatBuffer(message + length, "%s<br>", converted);
        }
    }
    FUN_003c1060();
    FUN_0038892c(reinterpret_cast<u32>(message), room->messageParameter);
}
}
