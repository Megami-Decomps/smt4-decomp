/* NON_MATCHING: armcc keeps the room pointer in r1 rather than retail's r0. */
#include "common.h"

extern "C" {

struct RoomWork {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 enabled;
};
extern RoomWork *g_onesRoom;

/* Enable the active room's flag. */
void onesRoomSetEnabled(void)
{
    g_onesRoom->enabled = 1;
}

}
