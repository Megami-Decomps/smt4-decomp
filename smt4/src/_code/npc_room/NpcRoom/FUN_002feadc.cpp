#include <stdio.h>
#include "npc_room/NpcRoom.h"

struct NpcRoomOccupantNameIV {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ char name[1];
};

extern "C" {
extern NpcRoomA *g_npcRoom;
char *libc_strcpy(char *destination, const char *source);
void textConvertToGlyphPairs(const char *source, char *destination);
void messageMainRequestBanner();
void scrCommMessageShowText(const char *text, u32 parameter);

void FUN_002feadc()
{
    NpcRoomA *room = g_npcRoom;
    char text[256];
    char name[128];
    char converted[128];
    s32 length = 0;
    for (s32 index = 0; index < room->displayCount; ++index) {
        const NpcRoomOccupantNameIV *occupant =
            (const NpcRoomOccupantNameIV *)room->occupants[room->displayEntries[index].occupantIndex];
        if (occupant) {
            libc_strcpy(name, occupant->name);
            textConvertToGlyphPairs(name, converted);
            length += sprintf(text + length, "%s<br>", converted);
        }
    }
    messageMainRequestBanner();
    scrCommMessageShowText(text, room->messageParameter);
}
}
