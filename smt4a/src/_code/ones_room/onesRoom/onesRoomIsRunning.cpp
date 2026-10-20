#include "ones_room/onesRoom.h"

extern "C" {

void asdMemFree(void *block);
s32 jobFind(u32 job);

extern OnesRoom *g_onesRoom;

/* Returns 1 while the room's job runs or the block is to be kept; otherwise frees the block
 * and returns 0. */
s32 onesRoomIsRunning(void)
{
    OnesRoom *room = g_onesRoom;

    if (g_onesRoom != NULL) {
        if (jobFind(g_onesRoom->job) != 0 || room->freeOnEnd == 0) {
            return 1;
        }
        if (g_onesRoom != NULL) {
            asdMemFree(g_onesRoom);
            g_onesRoom = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
