#include "common.h"
#include "gamedata/GameFlags.h"

struct OnesRoomState {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 requested;
};

extern "C" {
extern OnesRoomState *g_onesRoom;

static __inline void onesRoomSetRequested(OnesRoomState *room, u8 requested)
{
    room->requested = requested;
}

/* Requests the room transition and clears its associated game flag. */
void onesRoomRequestTransition(void)
{
    onesRoomSetRequested(g_onesRoom, 1);
    gameFlagSetValue(0x594, 0, 1);
}
}
