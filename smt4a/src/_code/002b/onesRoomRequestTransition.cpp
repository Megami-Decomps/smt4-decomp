/* NON_MATCHING: compiler swaps r0/r1 for the request-flag store and schedules the work load earlier. */
#include "common.h"
extern "C" {
extern struct {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 requested;
} *g_onesRoom;
void gameFlagSetValue(u32 flag, s32 value, s32 update);
/* Requests the room transition and clears its associated game flag. */
void onesRoomRequestTransition(void)
{
    g_onesRoom->requested = 1;
    gameFlagSetValue(0x594, 0, 1);
}
}
