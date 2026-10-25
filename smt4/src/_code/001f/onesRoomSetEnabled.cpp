#include "common.h"

extern "C" {

struct RoomWork {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 enabled;
};
extern RoomWork *g_onesRoom;

static __inline void roomSetEnabled(RoomWork *room, u8 enabled)
{
    room->enabled = enabled;
}

/* Enable the active room's flag. */
void onesRoomSetEnabled(void)
{
    roomSetEnabled(g_onesRoom, 1);
}

}
